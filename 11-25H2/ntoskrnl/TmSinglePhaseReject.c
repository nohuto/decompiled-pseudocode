/*
 * XREFs of TmSinglePhaseReject @ 0x1404F9F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmSinglePhaseReject(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmSinglePhaseReject(Enlistment, TmVirtualClock);
}
