/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x140B1C7F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408B8038 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E08B8 (CmpCleanUpSubKeyInfo.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(a1, *a2, *((_QWORD *)a2 + 2), 1);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0);
    CmpMarkKeyUnbacked(a1);
    CmpDiscardKcb(a1);
  }
  if ( (a2[2] & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(a1);
  ++a2[1];
  return 0LL;
}
