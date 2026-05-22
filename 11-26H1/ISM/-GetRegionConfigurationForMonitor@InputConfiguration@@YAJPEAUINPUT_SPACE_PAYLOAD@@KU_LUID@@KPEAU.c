/*
 * XREFs of ?GetRegionConfigurationForMonitor@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KU_LUID@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x18010B808
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x1801BD8CC (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfiguration::GetRegionConfigurationForMonitor(
        InputConfiguration *this,
        struct INPUT_SPACE_PAYLOAD *a2,
        __int64 a3,
        struct _LUID a4,
        __int64 a5)
{
  _OWORD *v5; // r10
  DWORD LowPart; // esi
  _QWORD *v7; // r11
  __int64 v8; // rbx
  unsigned int i; // edx
  __int64 v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  _OWORD *v18; // r10
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  LowPart = a4.LowPart;
  if ( !(_DWORD)a2 )
    goto LABEL_12;
  v7 = (_QWORD *)((char *)this + 16);
  v8 = (unsigned int)a2;
  do
  {
    for ( i = 0; i < *((_DWORD *)v7 - 1); ++i )
    {
      v10 = *v7 + 200LL * i;
      if ( *(_DWORD *)(v10 + 44) == LowPart && *(_QWORD *)(v10 + 36) == a3 )
      {
        v5 = (_OWORD *)(*v7 + 200LL * i);
        break;
      }
    }
    v7 += 3;
    --v8;
  }
  while ( v8 );
  if ( v5 )
  {
    v11 = v5[1];
    *(_OWORD *)a5 = *v5;
    v12 = v5[2];
    *(_OWORD *)(a5 + 16) = v11;
    v13 = v5[3];
    *(_OWORD *)(a5 + 32) = v12;
    v14 = v5[4];
    *(_OWORD *)(a5 + 48) = v13;
    v15 = v5[5];
    *(_OWORD *)(a5 + 64) = v14;
    v16 = v5[6];
    *(_OWORD *)(a5 + 80) = v15;
    *(_OWORD *)(a5 + 96) = v16;
    v17 = v5[7];
    v18 = v5 + 8;
    *(_OWORD *)(a5 + 112) = v17;
    v19 = *((_QWORD *)v18 + 8);
    v20 = v18[1];
    *(_OWORD *)(a5 + 128) = *v18;
    v21 = v18[2];
    *(_OWORD *)(a5 + 144) = v20;
    v22 = v18[3];
    *(_OWORD *)(a5 + 160) = v21;
    *(_OWORD *)(a5 + 176) = v22;
    *(_QWORD *)(a5 + 192) = v19;
    return 0LL;
  }
  else
  {
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
