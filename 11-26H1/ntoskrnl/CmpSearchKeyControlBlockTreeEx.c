/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x140AE0D24
 * Callers:
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140772428 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408C6330 (CmpDecommisssionKcb.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408CEDB8 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
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
  __int64 v13; // r13
  __int64 v14; // r14
  _QWORD *v15; // r12
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  unsigned int v21; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+50h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-80h] BYREF

  v5 = *(_QWORD *)(a2 + 1648);
  v6 = *(_DWORD *)(a2 + 1656);
  v23 = v5;
  memset(&ApcState, 0, sizeof(ApcState));
  v21 = v6;
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
      v16 = (_QWORD *)(*v15 - 16LL);
      if ( a5 )
        CmpLockKcbExclusive(*v15 - 16LL, v8, v9, v10);
      if ( !*v16 )
      {
        CmpRemoveFromDelayedClose((__int64)v16);
        CmpCleanUpKcbCacheWithLock((ULONG_PTR)v16, a3, v18, v19);
        if ( a5 )
          CmpUnlockKcb((ULONG_PTR)v16);
        else
          CmpDecommisssionKcb((ULONG_PTR)v16);
        goto LABEL_6;
      }
      v14 = v16[3];
      v17 = guard_dispatch_icall_no_overrides((__int64)v16, a2);
      switch ( v17 )
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
    v6 = v21;
    v5 = v23;
  }
  CmpDetachFromRegistryProcess(&ApcState);
  return 1;
}
