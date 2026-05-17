/*
 * XREFs of EtwEventUnregister @ 0x18006D820
 * Callers:
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180137A98 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180137B40 (LdrpAppxEtwIntegrityFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
