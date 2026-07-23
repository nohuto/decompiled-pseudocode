/*
 * XREFs of CmpRunDownCmRM @ 0x1408B55A0
 * Callers:
 *     CmShutdownCmRM @ 0x1408B5760 (CmShutdownCmRM.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpCleanupTransactionState @ 0x1408B3328 (CmpCleanupTransactionState.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     LOCK_CM_RM_LIST @ 0x1408B5570 (LOCK_CM_RM_LIST.c)
 *     CmpDelayFreeCmRm @ 0x140B49FE0 (CmpDelayFreeCmRm.c)
 */

void __fastcall CmpRunDownCmRM(__int64 a1, char a2)
{
  __int64 *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  __int64 *v12; // rcx
  __int64 **v13; // rdx
  __int64 **v14; // rdx
  _QWORD **v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-8h]

  if ( a1 && !*(_DWORD *)(a1 + 64) )
  {
    v16 = (__int64 *)&v15;
    v15 = &v15;
    LOCK_TRANSACTION_LIST();
    v4 = (__int64 *)CmpLazyCommitListHead;
    while ( v4 != &CmpLazyCommitListHead )
    {
      v12 = v4;
      v4 = (__int64 *)*v4;
      if ( v12[4] == a1 )
      {
        if ( (__int64 *)v4[1] != v12 )
          goto LABEL_20;
        v13 = (__int64 **)v12[1];
        if ( *v13 != v12 )
          goto LABEL_20;
        *v13 = v4;
        v4[1] = (__int64)v13;
        v14 = (__int64 **)v16;
        if ( (_QWORD ***)*v16 != &v15 )
          goto LABEL_20;
        v12[1] = (__int64)v16;
        *v12 = (__int64)&v15;
        *v14 = v12;
        v16 = v12;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    while ( 1 )
    {
      v5 = v15;
      if ( v15[1] != &v15 )
        goto LABEL_20;
      v6 = (__int64)*v15;
      if ( (_QWORD **)(*v15)[1] != v15 )
        goto LABEL_20;
      v15 = (_QWORD **)*v15;
      *(_QWORD *)(v6 + 8) = &v15;
      if ( v5 == &v15 )
        break;
      CmpCleanupTransactionState(a1, v5 - 4, 4LL, 0);
    }
    LOCK_CM_RM_LIST();
    *(_DWORD *)(a1 + 104) |= 8u;
    v7 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = *(_QWORD **)(a1 + 8), *v8 != a1) )
LABEL_20:
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 4160) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KeLeaveCriticalRegion();
    v10 = *(void **)(a1 + 56);
    if ( v10 )
    {
      ObDereferenceObjectDeferDelete(v10);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v11 = *(void **)(a1 + 40);
    if ( v11 )
    {
      ObDereferenceObjectDeferDelete(v11);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
