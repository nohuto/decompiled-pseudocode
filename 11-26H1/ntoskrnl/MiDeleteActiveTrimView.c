/*
 * XREFs of MiDeleteActiveTrimView @ 0x14046C034
 * Callers:
 *     MiTrimSharedPageFromView @ 0x14046BEB4 (MiTrimSharedPageFromView.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     MiReleaseTrimViewResources @ 0x140360084 (MiReleaseTrimViewResources.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 */

void __fastcall MiDeleteActiveTrimView(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  KIRQL v9; // bp
  __int64 v10; // r8
  __int64 v11; // rcx
  void *v12; // rcx

  if ( *(_QWORD *)(a1 + 24) )
    MiReleaseTrimViewResources(a1, a2);
  if ( *(_DWORD *)(a1 + 260) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E34C08, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140E34C08.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E34C08);
    CurrentThread = KeGetCurrentThread();
    v5 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v5 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v3);
  }
  if ( *(_DWORD *)(a1 + 256) )
  {
    KeForceDetachProcess(a1 + 208, 0);
    v6 = *(_QWORD *)(a1 + 64);
    v7 = *(_QWORD *)(v6 + 1040);
    v8 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v6 + 1198));
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 21384));
    --*(_DWORD *)(v7 + 56);
    v10 = *(_QWORD *)(v6 + 1040);
    v11 = *(_QWORD *)(v10 + 72);
    if ( v11 )
      KeSignalGate(v11, 1LL, v10);
    if ( v9 != 17 )
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 21384), v9);
  }
  v12 = *(void **)(a1 + 64);
  if ( v12 )
    ObDereferenceObjectDeferDeleteWithTag(v12, 0x77566D4Du);
}
