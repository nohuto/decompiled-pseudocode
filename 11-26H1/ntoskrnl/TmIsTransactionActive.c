/*
 * XREFs of TmIsTransactionActive @ 0x140536A70
 * Callers:
 *     CmpTransIsTransActive @ 0x14050CC2C (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x1408F48C4 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
