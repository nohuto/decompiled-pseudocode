/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x14084E200
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)(a1 + 32) != a2 || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
    return 0LL;
  LOBYTE(a4) = 1;
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, a3, a4);
  CmpMarkKeyUnbacked(a1, a3);
  CmpDiscardKcb(a1);
  return 2LL;
}
