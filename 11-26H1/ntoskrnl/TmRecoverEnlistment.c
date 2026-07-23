/*
 * XREFs of TmRecoverEnlistment @ 0x140536B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRecoverEnlistment(PKENLISTMENT Enlistment, PVOID EnlistmentKey)
{
  return __imp_TmRecoverEnlistment(Enlistment, EnlistmentKey);
}
