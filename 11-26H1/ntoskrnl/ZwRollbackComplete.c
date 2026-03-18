/*
 * XREFs of ZwRollbackComplete @ 0x140726590
 * Callers:
 *     DifZwRollbackCompleteWrapper @ 0x1406B83E0 (DifZwRollbackCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
