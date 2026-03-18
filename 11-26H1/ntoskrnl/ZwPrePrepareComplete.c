/*
 * XREFs of ZwPrePrepareComplete @ 0x140725BD0
 * Callers:
 *     DifZwPrePrepareCompleteWrapper @ 0x1406AE760 (DifZwPrePrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
