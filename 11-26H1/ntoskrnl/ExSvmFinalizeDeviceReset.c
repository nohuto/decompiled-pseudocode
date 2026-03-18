/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1406D12A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1], 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[16], 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1],
      v6,
      (__int64)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1]);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v7, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  Flink = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Flink;
  if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Flink == &ExSaPageGroupDescriptorArrayLock.152 )
    goto LABEL_13;
  do
  {
    v11 = Flink;
    if ( !LOBYTE(Flink[1].Flink) && Flink[1].Blink == a1 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.152 );
  if ( !v11 )
LABEL_13:
    v12 = -1073741810;
  else
    v12 = guard_dispatch_icall_no_overrides(v11[11].Flink, &ExSaPageGroupDescriptorArrayLock.152);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1]);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1]);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13);
  return v12;
}
