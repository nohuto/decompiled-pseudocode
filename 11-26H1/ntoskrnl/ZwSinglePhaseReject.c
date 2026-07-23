/*
 * XREFs of ZwSinglePhaseReject @ 0x14072B900
 * Callers:
 *     DifZwSinglePhaseRejectWrapper @ 0x1406C0C10 (DifZwSinglePhaseRejectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSinglePhaseReject(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
