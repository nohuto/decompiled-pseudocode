/*
 * XREFs of FxAllocateDriverGlobals @ 0x14007D2F4
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x140077428 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     AllocAndInitializeTelemetryContext @ 0x14009A684 (AllocAndInitializeTelemetryContext.c)
 */

_WDF_DRIVER_GLOBALS *__fastcall FxAllocateDriverGlobals()
{
  _WDF_DRIVER_GLOBALS *result; // rax
  _WDF_DRIVER_GLOBALS *v1; // rdi
  KIRQL v2; // al
  __int64 v3; // rcx

  result = (_WDF_DRIVER_GLOBALS *)ExAllocatePool2(64LL, 512LL, 1917089862LL);
  v1 = result;
  if ( result )
  {
    *(_DWORD *)result->DriverName = 1;
    KeInitializeEvent((PRKEVENT)&result->DriverName[8], NotificationEvent, 0);
    v1->DisplaceDriverUnload = 1;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1400C9010);
    v3 = qword_1400C9018;
    if ( *(_QWORD **)(qword_1400C9018 + 8LL) != &qword_1400C9018 )
      __fastfail(3u);
    v1->Driver = (WDFDRIVER__ *)qword_1400C9018;
    *(_QWORD *)&v1->DriverFlags = &qword_1400C9018;
    *(_QWORD *)(v3 + 8) = v1;
    qword_1400C9018 = v1;
    KeReleaseSpinLock(&qword_1400C9010, v2);
    v1[1].Driver = (WDFDRIVER__ *)-8LL;
    *(_QWORD *)&v1[1].DriverName[24] = &WPP_GLOBAL_WDF_Control.SectorSize;
    v1[1].DriverFlags = -1;
    *(_DWORD *)&v1[7].DriverName[8] = 60;
    *(_DWORD *)&v1[7].DriverName[12] = 60;
    *(_QWORD *)&v1[1].DriverName[8] = 0LL;
    *(_QWORD *)&v1[1].DriverName[16] = 0LL;
    *(_QWORD *)&v1[1].DisplaceDriverUnload = 0LL;
    *(_QWORD *)&v1[5].DriverName[28] = 0LL;
    v1[4].DisplaceDriverUnload = 0;
    *(&v1[5].DisplaceDriverUnload + 4) = 0;
    *(unsigned int *)((char *)&v1[6].DriverFlags + 1) = 16777217;
    *(_DWORD *)&v1[7].DriverName[4] = 0;
    *(_WORD *)((char *)&v1[6].DriverTag + 1) = 0;
    *(_DWORD *)&v1[6].DriverName[4] = 0;
    v1[6].Driver = 0LL;
    LOBYTE(v1[6].DriverFlags) = 0;
    *(_QWORD *)&v1[7].DriverName[16] = 0LL;
    if ( Tlgg_TelemetryProviderProv.LevelPlus1 )
      AllocAndInitializeTelemetryContext((_FX_TELEMETRY_CONTEXT **)&v1[7].DriverName[16]);
    return v1 + 8;
  }
  return result;
}
