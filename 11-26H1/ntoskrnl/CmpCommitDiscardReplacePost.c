/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x140A2F58C
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A2EE88 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408BC670 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpRebuildKcbCache @ 0x1408BCBD8 (CmpRebuildKcbCache.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408C6330 (CmpDecommisssionKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A2F9B0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // r12d
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 *v24; // rsi
  _QWORD *v25; // rsi
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v3 = a3 + 16;
  v6 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
    __fastfail(3u);
  *(_QWORD *)v3 = v7;
  v8 = (ULONG_PTR)(v6 - 15);
  *(_QWORD *)(v7 + 8) = v3;
  v9 = 0;
  v6[1] = v6;
  *v6 = v6;
  *((_WORD *)v6 - 27) = *(_WORD *)(BugCheckParameter4 + 66);
  v6[9] = *(_QWORD *)(BugCheckParameter4 + 192);
  *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
  *(_WORD *)(BugCheckParameter4 + 66) = 0;
  *(_QWORD *)(v6[9] + 16LL) = v6 - 15;
  v10 = *(_DWORD *)(BugCheckParameter4 + 40);
  if ( v10 != -1 )
  {
    *(_DWORD *)(v8 + 40) = v10;
    CmpMarkKeyUnbacked(BugCheckParameter4);
    CmpRebuildKcbCache(v8);
  }
  CmpDiscardKcb(BugCheckParameter4);
  v11 = *(_QWORD *)(v8 + 32);
  v12 = 3
      * ((unsigned int)(*(_DWORD *)(v11 + 1656) - 1) & ((unsigned int)(101027
                                                                     * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)));
  v13 = *(_QWORD *)(v11 + 1648);
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v13
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v11 + 1656) - 1) & ((unsigned int)(101027
                                                                                                  * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v13 + 8 * v12 + 16) = v8 + 16;
  v14 = *(_QWORD *)(v8 + 192);
  v15 = (_QWORD *)(v14 + 32);
  v16 = *(_QWORD **)(v14 + 32);
  while ( v16 != v15 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
    CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter4);
    v14 = *(_QWORD *)(v8 + 192);
    v16 = (_QWORD *)*v16;
    v15 = (_QWORD *)(v14 + 32);
  }
  v17 = v14 + 48;
  v18 = *(_QWORD **)(v14 + 48);
  while ( v18 != (_QWORD *)v17 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
    CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter4);
    v18 = (_QWORD *)*v18;
    v17 = *(_QWORD *)(v8 + 192) + 48LL;
  }
  v19 = *(_QWORD *)(v8 + 32);
  memset(&ApcState, 0, sizeof(ApcState));
  v20 = *(_DWORD *)(v19 + 1656);
  v21 = *(_QWORD *)(v19 + 1648);
  CmpAttachToRegistryProcess(&ApcState);
  while ( v9 < v20 )
  {
    v22 = v21 + 24LL * v9;
LABEL_12:
    v23 = *(_QWORD *)(v22 + 16);
    v24 = (__int64 *)(v22 + 16);
    while ( v23 )
    {
      v25 = (_QWORD *)(*v24 - 16);
      if ( !*v25 )
      {
        CmpRemoveFromDelayedClose((__int64)v25);
        CmpCleanUpKcbCacheWithLock((ULONG_PTR)v25, a2, v26, v27);
        CmpDecommisssionKcb((ULONG_PTR)v25);
        goto LABEL_12;
      }
      if ( v25[9] == BugCheckParameter4 )
      {
        ++v25[38];
        v25[9] = v8;
        if ( *(_QWORD *)BugCheckParameter4 )
        {
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
          CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter4);
        }
      }
      v24 = v25 + 3;
      v23 = *v24;
    }
    ++v9;
  }
  CmpDetachFromRegistryProcess(&ApcState);
  CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4, a2, 0);
  CmpDereferenceKeyControlBlockWithLock(v8, a2, 0);
  return 0LL;
}
