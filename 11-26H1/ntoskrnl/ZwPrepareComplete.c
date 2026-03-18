/*
 * XREFs of ZwPrepareComplete @ 0x140725C10
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x1406AEA40 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
