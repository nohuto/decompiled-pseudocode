/*
 * XREFs of ZwSetLowEventPair @ 0x14069E800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLowEventPair(HANDLE EventPairHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
