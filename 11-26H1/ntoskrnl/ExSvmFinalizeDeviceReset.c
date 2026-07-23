/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1406D52D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.152, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.152, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
      v6,
      (__int64)&ExSaPageGroupDescriptorArrayLock.152);
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
  Blink = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
  if ( (unsigned __int8 *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink == &ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] )
    goto LABEL_13;
  do
  {
    v11 = Blink;
    if ( !LOBYTE(Blink[1].Flink) && Blink[1].Blink == a1 )
      break;
    Blink = Blink->Flink;
  }
  while ( Blink != (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] );
  if ( !v11 )
LABEL_13:
    v12 = -1073741810;
  else
    v12 = guard_dispatch_icall_no_overrides(v11[11].Flink, &ExSaPageGroupDescriptorArrayLock.ApcStateFill[8]);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.152);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13);
  return v12;
}
