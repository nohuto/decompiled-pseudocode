/*
 * XREFs of ?Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z @ 0x140210D60
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1402111E0 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall PalmTelemetry::Invalidate(PalmTelemetry *a1, int a2)
{
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 38);
  PalmTelemetry::_ResetTelemetryData(a1);
  if ( *(_DWORD *)a1 )
  {
    if ( a2 == 1 )
      *((_DWORD *)a1 + 1) = 1;
    else
      *(_QWORD *)a1 = 0LL;
  }
}
