/*
 * XREFs of PsReferencePartitionSystemProcess @ 0x140B4BC20
 * Callers:
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PsReferencePartitionSystemProcess(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  void *v8; // rdx
  LegacyAutoBoost *v9; // rdi
  PVOID v10; // rcx
  unsigned int v11; // edi

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 112);
  --CurrentThread->KernelApcDisable;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v9, (struct _KTHREAD *)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = *(PVOID *)(a1 + 120);
  if ( v10 == MmBadPointer )
  {
    v11 = -1073740640;
  }
  else
  {
    PsReferenceSiloContext(v10);
    v11 = 0;
    *a2 = *(_QWORD *)(a1 + 120);
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  return v11;
}
