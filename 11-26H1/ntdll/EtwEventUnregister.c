/*
 * XREFs of EtwEventUnregister @ 0x18008DC70
 * Callers:
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180137808 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1801378B0 (LdrpAppxEtwIntegrityFailure.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
