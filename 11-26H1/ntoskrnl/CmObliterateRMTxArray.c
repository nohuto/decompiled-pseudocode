/*
 * XREFs of CmObliterateRMTxArray @ 0x140861EC4
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpCleanupTransactionState @ 0x1408B3328 (CmpCleanupTransactionState.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 */

_QWORD ***__fastcall CmObliterateRMTxArray(__int64 a1)
{
  __int64 *v2; // rdx
  __int64 *v3; // rax
  __int64 **v4; // rcx
  __int64 **v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD ***result; // rax
  _QWORD **v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-8h]

  v10 = (__int64 *)&v9;
  v9 = &v9;
  LOCK_TRANSACTION_LIST();
  v2 = (__int64 *)CmpLazyCommitListHead;
  while ( v2 != &CmpLazyCommitListHead )
  {
    v3 = v2;
    v2 = (__int64 *)*v2;
    if ( v3[4] == a1 )
    {
      if ( (__int64 *)v2[1] != v3
        || (v4 = (__int64 **)v3[1], *v4 != v3)
        || (*v4 = v2, v2[1] = (__int64)v4, v5 = (__int64 **)v10, (_QWORD ***)*v10 != &v9) )
      {
LABEL_13:
        __fastfail(3u);
      }
      v3[1] = (__int64)v10;
      *v3 = (__int64)&v9;
      *v5 = v3;
      v10 = v3;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  while ( 1 )
  {
    v6 = v9;
    if ( v9[1] != &v9 )
      goto LABEL_13;
    v7 = (__int64)*v9;
    if ( (_QWORD **)(*v9)[1] != v9 )
      goto LABEL_13;
    v9 = (_QWORD **)*v9;
    *(_QWORD *)(v7 + 8) = &v9;
    result = &v9;
    if ( v6 == &v9 )
      return result;
    CmpCleanupTransactionState(a1, v6 - 4, 8LL);
  }
}
