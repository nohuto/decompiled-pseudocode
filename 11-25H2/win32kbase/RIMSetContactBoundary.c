/*
 * XREFs of RIMSetContactBoundary @ 0x140076BE4
 * Callers:
 *     RIMApplyTransforms @ 0x1400786DC (RIMApplyTransforms.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1401E2194 (RIMAddSimulatedPointerDeviceData.c)
 * Callees:
 *     RIMTransformPhysicalPointToScreen @ 0x140079180 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400792B4 (RIMTransformPointerDevicePointToPhysical.c)
 *     ApiSetApplyMagInputTransform @ 0x1401949F4 (ApiSetApplyMagInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMSetContactBoundary(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // esi
  unsigned int v9; // r14d
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  __int64 v15; // [rsp+60h] [rbp+40h] BYREF
  __int64 v16; // [rsp+68h] [rbp+48h] BYREF
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF
  int v18; // [rsp+78h] [rbp+58h]

  v17 = a3;
  v8 = 0;
  if ( !a2 )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1694LL);
    LODWORD(a3) = v17;
  }
  if ( !a1 )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1695LL);
    LODWORD(a3) = v17;
  }
  v9 = a5;
  LODWORD(v15) = a3 - (a4 >> 1);
  LODWORD(v16) = a3 + (a4 >> 1);
  HIDWORD(v15) = HIDWORD(v17) - (a5 >> 1);
  HIDWORD(v16) = HIDWORD(v17) + (a5 >> 1);
  if ( (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
  {
    ApiSetApplyMagInputTransform(&v15, &v16);
  }
  else
  {
    RIMTransformPointerDevicePointToPhysical(a1, v15, &v17);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v17, &v15);
    if ( v8 < 0 )
      return (unsigned int)v8;
    RIMTransformPointerDevicePointToPhysical(a1, v16, &v17);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v17, &v16);
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  v10 = v15;
  v11 = v16;
  v12 = HIDWORD(v15);
  v13 = HIDWORD(v16);
  *a2 = v15;
  a2[2] = v11;
  a2[1] = v12;
  a2[3] = v13;
  if ( v10 == v11 && a4 )
    a2[2] = v10 + 1;
  if ( v12 == v13 && v9 )
    a2[3] = v12 + 1;
  return (unsigned int)v8;
}
