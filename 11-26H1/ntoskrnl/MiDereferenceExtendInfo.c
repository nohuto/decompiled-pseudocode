/*
 * XREFs of MiDereferenceExtendInfo @ 0x140B1B300
 * Callers:
 *     MiDataVadErrorCleanup @ 0x1409976EC (MiDataVadErrorCleanup.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  if ( v10 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12, v11);
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
