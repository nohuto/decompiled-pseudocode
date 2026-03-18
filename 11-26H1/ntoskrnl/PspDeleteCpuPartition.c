/*
 * XREFs of PspDeleteCpuPartition @ 0x1407F2A60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeDeleteCpuPartition @ 0x1407BB114 (KeDeleteCpuPartition.c)
 */

void __fastcall PspDeleteCpuPartition(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rdi
  __int64 v8; // r8
  _QWORD *v9; // rdx

  KeDeleteCpuPartition(*(PVOID *)a1, **(_QWORD **)(a1 + 8));
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x50707350u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.SavedApcState.ApcListHead[1], 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.SavedApcStateFill[16], 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.SavedApcState.ApcListHead[1],
      v4,
      (__int64)&PspSiloMonitorLock.SavedApcState.ApcListHead[1]);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v8 + 8) != a1 + 24 || (v9 = *(_QWORD **)(a1 + 32), *v9 != a1 + 24) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PspSiloMonitorLock.SavedApcState.ApcListHead[1].Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.SavedApcState.ApcListHead[1]);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.SavedApcState.ApcListHead[1]);
  KeLeaveCriticalRegion();
}
