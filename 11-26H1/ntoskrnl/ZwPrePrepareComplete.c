/*
 * XREFs of ZwPrePrepareComplete @ 0x14072A7A0
 * Callers:
 *     DifZwPrePrepareCompleteWrapper @ 0x1406B2340 (DifZwPrePrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
