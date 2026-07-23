/*
 * XREFs of ZwWaitHighEventPair @ 0x14072BCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitHighEventPair(HANDLE EventPairHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
