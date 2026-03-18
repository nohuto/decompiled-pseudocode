/*
 * XREFs of RIMCmMarkSuppressedContactForDelivery @ 0x140078060
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmMarkSuppressedContactForDelivery(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 611LL);
  result = RIMCmIsContactSuppressed(a1);
  if ( !(_DWORD)result )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 612LL);
  *(_DWORD *)(a1 + 2444) |= 0x2000000u;
  return result;
}
