/*
 * XREFs of ZwPrepareComplete @ 0x14069D940
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x140637830 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
