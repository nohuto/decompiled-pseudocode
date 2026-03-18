/*
 * XREFs of TmCommitTransaction @ 0x1405344B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitTransaction(PKTRANSACTION Transaction, BOOLEAN Wait)
{
  return __imp_TmCommitTransaction(Transaction, Wait);
}
