/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x140ADE3F8
 * Callers:
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140775428 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408CC900 (CmpDecommisssionKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x1408CCAC4 (CmpRemoveFromDelayedClose.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408D5368 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  char v11; // bl
  unsigned int i; // ebp
  __int64 v13; // r12
  __int64 v14; // r14
  _QWORD *v15; // r13
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  ULONG_PTR v21; // rcx
  unsigned int v23; // [rsp+30h] [rbp-A8h]
  __int64 v25; // [rsp+50h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-80h] BYREF

  v5 = *(_QWORD *)(a2 + 1648);
  v6 = *(_DWORD *)(a2 + 1656);
  v25 = v5;
  memset(&ApcState, 0, sizeof(ApcState));
  v23 = v6;
  CmpAttachToRegistryProcess(&ApcState);
  v11 = 0;
  for ( i = 0; i < v6; ++i )
  {
    if ( a5 )
      CmpLockHashEntryByIndexExclusive(a2, i, v9, v10);
    v13 = v5 + 24LL * i;
LABEL_6:
    v14 = *(_QWORD *)(v13 + 16);
    v15 = (_QWORD *)(v13 + 16);
    while ( v14 )
    {
      v16 = (_QWORD *)(v14 - 16);
      if ( a5 )
        CmpLockKcbExclusive(v14 - 16, v8, v9, v10);
      v17 = v14 - 16;
      if ( !*v16 )
      {
        CmpRemoveFromDelayedClose(v17);
        CmpCleanUpKcbCacheWithLock(v14 - 16, a3, v19, v20);
        v21 = v14 - 16;
        if ( a5 )
          CmpUnlockKcb(v21);
        else
          CmpDecommisssionKcb(v21);
        goto LABEL_6;
      }
      v14 = v16[3];
      v18 = guard_dispatch_icall_no_overrides(v17, a2);
      switch ( v18 )
      {
        case 1:
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v16);
          v11 = 1;
          goto LABEL_27;
        case 3:
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v16);
LABEL_27:
          CmpUnlockHashEntryByIndex((char *)a2, i);
          return v11;
        case 2:
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v16);
          *v15 = v14;
          break;
        default:
          v15 = v16 + 3;
          if ( a5 )
            CmpUnlockKcb((ULONG_PTR)v16);
          v14 = v16[3];
          break;
      }
    }
    if ( a5 )
      CmpUnlockHashEntryByIndex((char *)a2, i);
    v6 = v23;
    v5 = v25;
  }
  CmpDetachFromRegistryProcess(&ApcState);
  return 1;
}
