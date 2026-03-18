/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x1407714F8
 * Callers:
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 */

__int64 __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2)
{
  return CmpLogTransactionAbortedWithChildName(a1, 0LL, a2);
}
