/*
 * XREFs of CcGetDirtyPagesHelper @ 0x14039D5E0
 * Callers:
 *     CcGetDirtyPages @ 0x140259A70 (CcGetDirtyPages.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 a2, __int64 *a3)
{
  char *v4; // r14
  __int64 v5; // r12
  __int64 i; // rdi
  ULONG_PTR v7; // r15
  __int64 j; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // bl
  __int64 v15; // rdx
  int v16; // eax
  __int64 v18; // [rsp+48h] [rbp-80h] BYREF
  __int64 v19; // [rsp+50h] [rbp-78h]
  __int64 v20; // [rsp+58h] [rbp-70h]
  __int64 v21; // [rsp+60h] [rbp-68h]
  __int64 v22; // [rsp+68h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-58h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+8h]

  v4 = 0LL;
  v18 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v21 = a3[2];
  v20 = a3[3];
  v5 = *a3;
  v22 = a3[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  for ( i = *(_QWORD *)(a1 + 720) - 120LL; i != a1 + 600; i = *(_QWORD *)(i + 120) - 120LL )
  {
    v16 = *(_DWORD *)(i + 152);
    if ( (v16 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x338uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v16 & 0x2000000) != 0 && *(_QWORD *)(i + 248) == v5 || (v16 & 0x1000000) != 0 && **(_QWORD **)(i + 248) == v5 )
    {
      ++*(_DWORD *)(i + 4);
      ++*(_DWORD *)(i + 544);
      ++*(_DWORD *)(i + 112);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v7 = CcReferenceSharedCacheMapFileObject(i);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(i + 288));
      for ( j = *(_QWORD *)(i + 16) - 16LL; j + 16 != i + 16; j = *(_QWORD *)(j + 16) - 16LL )
      {
        if ( *(_WORD *)j == 765 && *(_BYTE *)(j + 2) )
        {
          v18 = *(_QWORD *)(j + 8);
          v9 = *(_DWORD *)(j + 4);
          v24 = *(_QWORD *)(j + 40);
          ++*(_DWORD *)(j + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(i + 288));
          if ( v4 )
          {
            CcUnpinFileDataEx(v4, 1, 1);
            v4 = 0LL;
            v19 = 0LL;
          }
          guard_dispatch_icall_no_overrides(v7, &v18, v9);
          if ( v24 )
          {
            v10 = a3[4];
            if ( !v10 || v24 < v10 )
              a3[4] = v24;
          }
          ExAcquireFastMutex((PKGUARDED_MUTEX)(i + 288));
          v11 = *(_DWORD *)(j + 64);
          if ( v11 > 1 )
          {
            *(_DWORD *)(j + 64) = v11 - 1;
          }
          else
          {
            v4 = (char *)j;
            v19 = j;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(i + 288));
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(i + 96), v7, 0x63536343u);
      if ( v4 )
      {
        CcUnpinFileDataEx(v4, 1, 1);
        v4 = 0LL;
        v19 = 0LL;
      }
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 768);
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
      }
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v15 = _InterlockedExchange64((volatile __int64 *)(a1 + 768), (__int64)&LockHandle);
        if ( v15 )
          KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v15, v13);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(a1 + 768));
      }
      --*(_DWORD *)(i + 4);
      --*(_DWORD *)(i + 544);
      --*(_DWORD *)(i + 112);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 1;
}
