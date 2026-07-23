/*
 * XREFs of ZwPrepareComplete @ 0x14072A7E0
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x1406B2620 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
