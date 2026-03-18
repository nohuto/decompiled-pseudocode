/*
 * XREFs of TmIsTransactionActive @ 0x1404F9D50
 * Callers:
 *     CmpTransIsTransActive @ 0x1404D9480 (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x140870E50 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
