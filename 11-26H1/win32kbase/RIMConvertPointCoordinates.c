/*
 * XREFs of RIMConvertPointCoordinates @ 0x1400F8C88
 * Callers:
 *     RIMTransformPhysicalPointToScreen @ 0x1400F8BB8 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400F8C30 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMTransformDimensionFromDigitizer @ 0x140205FC0 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  int v4; // r12d
  unsigned int v5; // edi
  int v6; // r13d
  int v8; // esi
  __int64 v10; // r15
  int v11; // ebx
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v18; // esi
  int v19; // r14d
  int v20; // ebx
  __int64 v21; // rbp
  int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+74h] [rbp+Ch]
  __int64 v28; // [rsp+80h] [rbp+18h]

  v27 = HIDWORD(a1);
  v4 = a2[2];
  v5 = 0;
  v6 = *a2;
  v8 = a3[2];
  v10 = *a3;
  v11 = a1;
  if ( *a2 >= v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 63LL);
  if ( (int)v10 >= v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  v12 = v4 - v6;
  v13 = (v11 - v6) * (__int64)(v8 - (int)v10);
  v14 = 2 * v13;
  if ( v13 <= 0 )
    v15 = v14 - v12;
  else
    v15 = v12 + v14;
  v16 = v10 + v15 / (2LL * v12);
  if ( v16 >= (__int64)0xFFFFFFFF80000000uLL && v16 <= 0x7FFFFFFF )
  {
    LODWORD(v28) = v16;
    if ( (int)v16 >= v8 )
      LODWORD(v28) = v8 - 1;
    v18 = a2[3];
    v19 = a2[1];
    v20 = a3[3];
    v21 = a3[1];
    if ( v19 >= v18 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 63LL);
    if ( (int)v21 >= v20 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    v22 = v18 - v19;
    v23 = (v27 - v19) * (__int64)(v20 - (int)v21);
    v24 = 2 * v23;
    if ( v23 <= 0 )
      v25 = v24 - v22;
    else
      v25 = v22 + v24;
    v26 = v21 + v25 / (2LL * v22);
    if ( v26 >= (__int64)0xFFFFFFFF80000000uLL && v26 <= 0x7FFFFFFF )
    {
      HIDWORD(v28) = v26;
      v5 = 1;
      if ( (int)v26 >= v20 )
        HIDWORD(v28) = v20 - 1;
      *a4 = v28;
    }
  }
  return v5;
}
