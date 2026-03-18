/*
 * XREFs of MiDereferenceExtendInfo @ 0x140B18EB8
 * Callers:
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiDataVadErrorCleanup @ 0x1409C670C (MiDataVadErrorCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(_DWORD *a1, __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r15
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // r14
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = *a2;
  --CurrentThread->SpecialApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire(v6 + 40, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 40), v7, v6 + 40);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = a1[2]-- == 1;
  if ( v10 )
    *(_QWORD *)(v6 + 32) = 0LL;
  else
    a1 = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
  KeAbPostRelease(v6 + 40);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12, v11);
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
