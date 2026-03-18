/*
 * XREFs of TmRequestOutcomeEnlistment @ 0x140534790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRequestOutcomeEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRequestOutcomeEnlistment(Enlistment, TmVirtualClock);
}
