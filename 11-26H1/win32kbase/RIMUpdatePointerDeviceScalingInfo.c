/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1401755E0
 * Callers:
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x140175474 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     rimSetDeviceDisplayConfig @ 0x1401A2A4C (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     rimConvertCoordinatesWithRounding @ 0x14012CBA0 (rimConvertCoordinatesWithRounding.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(_DWORD *a1, _DWORD *a2, int *a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int v8; // r12d
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  unsigned int v12; // ebp
  unsigned int v13; // r13d
  int v14; // eax
  unsigned int v15; // r11d
  int *v16; // r14
  int *v17; // r15
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // ebp
  unsigned int v21; // ecx
  unsigned int v22; // eax
  INT v23; // eax
  unsigned int v24; // eax
  INT v25; // eax
  INT v26; // r8d
  int v27; // r12d
  int v28; // ecx
  int *v29; // rbp
  INT v30; // r12d
  _DWORD *v31; // r8
  int v32; // edx
  __int64 result; // rax
  int v34; // eax
  unsigned int v35; // ebp
  int v36; // ecx
  int v37; // ecx
  INT v38; // [rsp+30h] [rbp-58h]
  unsigned int v40; // [rsp+98h] [rbp+10h]
  unsigned int v41; // [rsp+A8h] [rbp+20h]

  if ( !a2[14] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1419LL);
  if ( !a2[15] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1420LL);
  if ( !a2[22] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1421LL);
  if ( !a2[23] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1422LL);
  v7 = a2[14];
  v8 = a2[15];
  v9 = a2[22];
  v10 = a2[23];
  *a3 = v7;
  a3[1] = v8;
  v11 = a2[35];
  v12 = a2[36];
  v13 = a2[37] - v11;
  v14 = a2[27];
  v15 = a2[38] - v12;
  v40 = v12;
  v41 = v15;
  if ( v14 == 4 )
  {
    if ( (v7 << 14) / v8 < (v9 << 14) / v10 )
      v34 = (v7 << 14) / v9;
    else
      v34 = (v8 << 14) / v10;
    v16 = a3 + 2;
    v17 = a3 + 3;
    v41 = (v15 * v34) >> 14;
    v21 = (v9 * v34) >> 14;
    v35 = v10 * v34;
    v13 = (v34 * v13) >> 14;
    v11 = (unsigned int)(v34 * a2[35]) >> 14;
    v22 = (v34 * v40) >> 14;
    a3[2] = v21;
    v20 = v35 >> 14;
    a3[3] = v20;
    goto LABEL_12;
  }
  v16 = a3 + 2;
  v17 = a3 + 3;
  if ( v14 != 2 )
  {
    *v16 = v7;
    *v17 = v8;
    v18 = (v7 << 14) / v9;
    v19 = v12 * ((v8 << 14) / v10);
    v20 = v8;
    v13 = (v18 * v13) >> 14;
    v11 = (v18 * v11) >> 14;
    v41 = (v15 * ((v8 << 14) / v10)) >> 14;
    v21 = v7;
    v22 = v19 >> 14;
LABEL_12:
    v40 = v22;
    goto LABEL_13;
  }
  *v16 = v9;
  v21 = v9;
  *v17 = v10;
  v20 = v10;
LABEL_13:
  v23 = 0;
  v38 = 0;
  if ( a4 )
  {
    v24 = v21 - v7;
    if ( (int)(v21 - v7) < 0 )
      v24 = v7 - v21;
    v25 = EngMulDiv(v24 + 2 * v11, a1[2] - *a1, 2 * v7);
    v26 = 2 * v8;
    v27 = v8 - v20;
    v38 = v25;
    v28 = -v27;
    if ( v27 > 0 )
      v28 = v27;
    v23 = EngMulDiv(v28 + 2 * v40, a1[3] - a1[1], v26);
    v29 = a3 + 3;
  }
  else
  {
    v29 = v17;
  }
  *v16 = v13;
  v30 = v23;
  *v17 = v41;
  if ( a4 )
  {
    v31 = a1;
    *(_OWORD *)a4 = *(_OWORD *)a1;
    if ( *a3 != *v16 )
    {
      if ( !(unsigned int)rimConvertCoordinatesWithRounding(0, *a3, 0, a1[2], *v16, (_DWORD *)(a4 + 8)) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1553LL);
        v17 = v29;
      }
      v31 = a1;
    }
    v29 = v17;
    v32 = a3[1];
    if ( v32 != *v17 && !(unsigned int)rimConvertCoordinatesWithRounding(0, v32, 0, v31[3], *v17, (_DWORD *)(a4 + 12)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1562LL);
    v16 = a3 + 2;
    *(_DWORD *)a4 += v38;
    *(_DWORD *)(a4 + 8) += v38;
    *(_DWORD *)(a4 + 4) += v30;
    *(_DWORD *)(a4 + 12) += v30;
  }
  result = (unsigned int)a2[26];
  if ( (_DWORD)result == 2 || (_DWORD)result == 4 )
  {
    v36 = a3[1];
    a3[1] = *a3;
    *a3 = v36;
    v37 = *v16;
    result = *v29 ^ (unsigned int)*v16;
    *v16 = result;
    *v29 = v37;
    *v16 ^= v37;
  }
  return result;
}
