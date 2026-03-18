/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x14085ED40
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x140B474C4 (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // r9

  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1, a2);
    LOBYTE(v6) = 1;
    CmpFlushNotifiesOnKeyBodyList(a1, *a3, a2, v6);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
