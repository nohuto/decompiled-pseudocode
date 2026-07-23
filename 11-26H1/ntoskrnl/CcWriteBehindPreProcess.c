/*
 * XREFs of CcWriteBehindPreProcess @ 0x140386674
 * Callers:
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcWriteBehindAsyncPreProcess @ 0x1405B6344 (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140385398 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcApplyLowIoPriorityToThread @ 0x140387538 (CcApplyLowIoPriorityToThread.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14050B81C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcWriteBehindPreProcess(__int64 a1)
{
  __int64 v1; // r14
  _DWORD *v2; // rax
  char v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // al
  char v12; // r12
  char v13; // bl
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // r8
  unsigned int v21; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v24; // [rsp+80h] [rbp+30h]

  v1 = *(_QWORD *)(a1 + 264);
  v2 = *(_DWORD **)(a1 + 112);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  memset(&v23, 0, sizeof(v23));
  v24 = v2;
  if ( *(_DWORD *)(v1 + 128) == 2 )
  {
    v5 = *(_QWORD *)(v1 + 16);
    v4 = *(_BYTE *)(v1 + 56);
    v6 = *(_QWORD *)(v5 + 536);
  }
  else
  {
    v5 = *(_QWORD *)(v1 + 24);
    v6 = *(_QWORD *)(v1 + 136);
  }
  *(_BYTE *)(a1 + 136) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(v5 + 544);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  LOBYTE(v7) = 1;
  CcApplyLowIoPriorityToThread(v6, v7, v5);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 832), &v23);
  v8 = CcIsWriteBehindThreadpoolAtLowPriority(v6);
  KeReleaseInStackQueuedSpinLock(&v23);
  if ( !v8 )
    CcApplyLowIoPriorityToThread(v6, 0LL, v5);
  *(_DWORD *)(a1 + 140) = 0;
  if ( (*(_DWORD *)(v5 + 156) & 1) != 0 )
  {
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_BYTE *)(a1 + 139) == 0, a1 + 140);
  }
  else
  {
    LOBYTE(v9) = 1;
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), v9, v10);
  }
  v12 = v11;
  v13 = *(_BYTE *)(a1 + 140) & 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( v11 )
    {
LABEL_9:
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        *(_BYTE *)(a1 + 136) = 1;
      v14 = *(_QWORD *)(v5 + 168);
      if ( v14 )
      {
        if ( CcEnablePerVolumeLazyWriter )
          v21 = *(_DWORD *)(*(_QWORD *)(v5 + 600) + 912LL);
        else
          v21 = *(_DWORD *)(v6 + 976);
        v15 = *(_DWORD *)(v14 + 8);
        *(_DWORD *)(v14 + 4) = v15;
        if ( v15 > v21 )
        {
          *(_DWORD *)(v14 + 4) = v21;
          v15 = v21;
        }
      }
      else
      {
        v15 = *(_DWORD *)(v5 + 200);
      }
      *(_DWORD *)(a1 + 252) = v15;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
      if ( _bittest((const signed __int32 *)(v5 + 152), 0x18u) )
      {
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(v5 + 248) + 112LL);
        *(_QWORD *)(a1 + 88) = a1 + 80;
      }
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 512) + 204LL), *(_DWORD *)(a1 + 252));
      if ( _bittest((const signed __int32 *)(v5 + 152), 0x18u) )
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 512) + 208LL), *(_DWORD *)(a1 + 252));
      v16 = *(_QWORD *)(v5 + 512);
      *(_QWORD *)(v16 + 296) += *(unsigned int *)(v16 + 204);
      ++*(_QWORD *)(v16 + 312);
      *(_QWORD *)(v16 + 320) += *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
      ++*(_QWORD *)(v16 + 336);
      if ( *(_QWORD *)(v16 + 304) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL) )
        v17 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL);
      else
        v17 = *(_QWORD *)(v16 + 304);
      *(_QWORD *)(v16 + 304) = v17;
      if ( *(_QWORD *)(v16 + 328) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL) )
        v18 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
      else
        v18 = *(_QWORD *)(v16 + 328);
      *(_QWORD *)(v16 + 328) = v18;
      return 0LL;
    }
    CcApplyLowIoPriorityToThread(v6, 0LL, v5);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    *(_DWORD *)(v5 + 152) &= ~0x20u;
    if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
      CcCancelMmWaitForUninitializeCacheMap(v5);
    CcDecrementOpenCount(v5);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *v24 = -1073741740;
    if ( v4 )
      KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
    return 1LL;
  }
  else
  {
    if ( v11 && v13 )
      goto LABEL_9;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    CcDecrementOpenCount(v5);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *v24 = -1073741740;
    if ( v12 && !v13 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_QWORD *)(v5 + 216), v20);
    return 2LL;
  }
}
