/*
 * XREFs of TmIsTransactionActive @ 0x1405345F0
 * Callers:
 *     CmpTransIsTransActive @ 0x1405131BC (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
