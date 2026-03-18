/*
 * XREFs of MiRemoveBasedSection @ 0x140864E24
 * Callers:
 *     MiSectionDelete @ 0x140A96C50 (MiSectionDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiRemoveBasedSection(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2C7D0, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&stru_140E2C7D0.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2C7D0, v6, (__int64)&stru_140E2C7D0);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2C7C8, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2C7D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2C7D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2C7D0);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v11, v10);
  }
}
