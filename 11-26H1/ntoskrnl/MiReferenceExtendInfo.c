/*
 * XREFs of MiReferenceExtendInfo @ 0x14086AF30
 * Callers:
 *     MiInsertChildVads @ 0x140B2090C (MiInsertChildVads.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiReferenceExtendInfo(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r14
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = ***(_QWORD ***)(a1 + 80);
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire(v5 + 40, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 40), v6, v5 + 40);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  ++*(_DWORD *)(*(_QWORD *)(v5 + 32) + 8LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 40));
  KeAbPostRelease(v5 + 40);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v10, v9);
  }
}
