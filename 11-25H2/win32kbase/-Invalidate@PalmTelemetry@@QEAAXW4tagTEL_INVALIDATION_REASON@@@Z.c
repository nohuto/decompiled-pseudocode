/*
 * XREFs of ?Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z @ 0x1401F5CC8
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1401F61DC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall PalmTelemetry::Invalidate(PalmTelemetry *a1, int a2)
{
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 38);
  PalmTelemetry::_ResetTelemetryData(a1);
  if ( *(_DWORD *)a1 )
  {
    if ( a2 == 1 )
      *((_DWORD *)a1 + 1) = 1;
    else
      *(_QWORD *)a1 = 0LL;
  }
}
