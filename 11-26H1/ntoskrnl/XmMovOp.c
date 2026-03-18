/*
 * XREFs of XmMovOp @ 0x1404A7D30
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A8E3C (XmStoreResult.c)
 */

__int64 __fastcall XmMovOp(__int64 a1)
{
  return XmStoreResult(a1, *(unsigned int *)(a1 + 108));
}
