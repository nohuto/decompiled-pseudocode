/*
 * XREFs of SmHwAcceleratorPartitionMgrInsertAccelerator @ 0x140643AF0
 * Callers:
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x140821320 (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrInsertAccelerator(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r15
  unsigned __int64 *v5; // rdi
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbp
  __int64 v13; // rdx
  _QWORD *v14; // rax

  v4 = *(_QWORD *)(a2 + 32);
  v5 = (unsigned __int64 *)(a1 + 24);
  v6 = *(int *)(a2 + 60);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire(a1 + 24, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v10, (__int64)v5);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  ++*(_DWORD *)(a1 + 4 * v6 + 48);
  v13 = 16LL * *(unsigned int *)(v4 + 44) + *(_QWORD *)(a1 + 8 * v6 + 32);
  v14 = *(_QWORD **)(v13 + 8);
  if ( *v14 != v13 )
    __fastfail(3u);
  *(_QWORD *)a2 = v13;
  *(_QWORD *)(a2 + 8) = v14;
  *v14 = a2;
  *(_QWORD *)(v13 + 8) = a2;
  if ( !*(_DWORD *)(a1 + 72) )
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 64LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
}
