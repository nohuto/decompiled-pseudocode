/*
 * XREFs of ZwSinglePhaseReject @ 0x140726D30
 * Callers:
 *     DifZwSinglePhaseRejectWrapper @ 0x1406BD030 (DifZwSinglePhaseRejectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSinglePhaseReject(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
