/*
 * XREFs of RIMSetContactBoundary @ 0x1400F90EC
 * Callers:
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1400F92B0 (RIMAddSimulatedPointerDeviceData.c)
 * Callees:
 *     RIMTransformPhysicalPointToScreen @ 0x1400F8BB8 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400F8C30 (RIMTransformPointerDevicePointToPhysical.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RIMSetContactBoundary(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // esi
  unsigned int v9; // r14d
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int (*v15)(void); // rax
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64 *, __int64 *); // rax
  __int64 v18; // [rsp+60h] [rbp+40h] BYREF
  __int64 v19; // [rsp+68h] [rbp+48h] BYREF
  __int64 v20; // [rsp+70h] [rbp+50h] BYREF
  int v21; // [rsp+78h] [rbp+58h]

  v20 = a3;
  v8 = 0;
  if ( !a2 )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1694LL);
    LODWORD(a3) = v20;
  }
  if ( !a1 )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1695LL);
    LODWORD(a3) = v20;
  }
  v9 = a5;
  LODWORD(v18) = a3 - (a4 >> 1);
  LODWORD(v19) = (a4 >> 1) + a3;
  HIDWORD(v18) = HIDWORD(v20) - (a5 >> 1);
  HIDWORD(v19) = (a5 >> 1) + HIDWORD(v20);
  if ( (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
  {
    v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(HIDWORD(v20)) + 48) + 4192LL);
    if ( v15 )
    {
      if ( v15() >= 0 )
      {
        v17 = *(void (__fastcall **)(__int64 *, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16) + 48) + 4200LL);
        if ( v17 )
          v17(&v18, &v19);
      }
    }
  }
  else
  {
    RIMTransformPointerDevicePointToPhysical(a1, v18, &v20);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v20, &v18);
    if ( v8 < 0 )
      return (unsigned int)v8;
    RIMTransformPointerDevicePointToPhysical(a1, v19, &v20);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v20, &v19);
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  v10 = v18;
  v11 = v19;
  v12 = HIDWORD(v18);
  v13 = HIDWORD(v19);
  *a2 = v18;
  a2[2] = v11;
  a2[1] = v12;
  a2[3] = v13;
  if ( v10 == v11 && a4 )
    a2[2] = v10 + 1;
  if ( v12 == v13 && v9 )
    a2[3] = v12 + 1;
  return (unsigned int)v8;
}
