/*
 * XREFs of AlpcAddHandleTableEntry @ 0x14098D2D0
 * Callers:
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rdi
  __int64 v12; // rbp
  void *Pool2; // rax
  void *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdi

  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 8), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 8), v6, a1 + 8);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v9; ++i )
  {
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * i) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = *a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
      KeAbPostRelease(a1 + 8);
      return i + 16;
    }
  }
  v12 = 2 * v9;
  if ( 2 * v9 >= 0x1FFFFFFFFFFFFFFFLL )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    return -1LL;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v14 = Pool2;
    v15 = -1LL;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 8 * v12);
      memmove(v14, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
      v16 = *(_QWORD *)(a1 + 16);
      *((_QWORD *)v14 + v16) = *a2;
      if ( *(_QWORD *)(a1 + 16) == 16LL )
        ExFreeToNPagedLookasideList(&stru_140E26600, *(PVOID *)a1);
      else
        ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
      *(_QWORD *)a1 = v14;
      v15 = v16 + 16;
      *(_QWORD *)(a1 + 16) = v12;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    return v15;
  }
}
