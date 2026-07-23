/*
 * XREFs of CcDeleteMbcb @ 0x14039DF64
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeductDirtyPages @ 0x1403E611C (CcDeductDirtyPages.c)
 *     CcDeallocateBcb @ 0x14046E164 (CcDeallocateBcb.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  __int64 v1; // rbx
  struct _FAST_MUTEX *v2; // rsi
  unsigned int *v4; // rdi
  __int64 v5; // r8
  unsigned int **v6; // r15
  unsigned int *v7; // rbx
  __int64 v8; // rax
  unsigned int **v9; // rcx
  _SLIST_ENTRY *v10; // rdx
  PVOID v11; // rcx
  PVOID *v12; // rax
  __int64 v13; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = (struct _FAST_MUTEX *)(a1 + 288);
  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
  v4 = *(unsigned int **)(a1 + 168);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    CcDeductDirtyPages(a1, v4[2]);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v6 = (unsigned int **)(v4 + 4);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == (unsigned int *)v6 )
        break;
      v8 = *(_QWORD *)v7;
      if ( *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = (unsigned int **)*((_QWORD *)v7 + 1), *v9 != v7) )
LABEL_17:
        __fastfail(3u);
      *v9 = (unsigned int *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = (_SLIST_ENTRY *)*((_QWORD *)v7 + 5);
      if ( v10 && v10 != (_SLIST_ENTRY *)(v4 + 24) )
      {
        ++dword_140E1101C;
        if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_140E11010 )
        {
          ++dword_140E11020;
          guard_dispatch_icall_no_overrides(v10, v10, v5);
        }
        else
        {
          RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, v10);
        }
      }
      if ( v7 < v4 || v7 >= v4 + 48 )
      {
        v12 = p_P;
        if ( *p_P != &P )
          goto LABEL_17;
        *((_QWORD *)v7 + 1) = p_P;
        *(_QWORD *)v7 = &P;
        *v12 = v7;
        p_P = (PVOID *)v7;
      }
    }
    *(_QWORD *)(a1 + 168) = 0LL;
    KeReleaseGuardedMutex(v2);
    while ( 1 )
    {
      v11 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_17;
      v13 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_17;
      P = *(PVOID *)P;
      *(_QWORD *)(v13 + 8) = &P;
      ExFreePoolWithTag(v11, 0);
    }
    CcDeallocateBcb(v4);
  }
  else
  {
    KeReleaseGuardedMutex(v2);
  }
}
