/*
 * XREFs of ExSvmBeginDeviceReset @ 0x1406D5190
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

__int64 __fastcall ExSvmBeginDeviceReset(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.152, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.152, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
      v7,
      (__int64)&ExSaPageGroupDescriptorArrayLock.152);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v8, 1);
    }
    else
    {
      *((_BYTE *)v10 + 10) = 1;
    }
  }
  Blink = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
  if ( (unsigned __int8 *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink == &ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] )
    goto LABEL_13;
  do
  {
    v12 = Blink;
    if ( !LOBYTE(Blink[1].Flink) && Blink[1].Blink == a1 )
      break;
    Blink = Blink->Flink;
  }
  while ( Blink != (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] );
  if ( !v12 )
LABEL_13:
    v13 = -1073741810;
  else
    v13 = guard_dispatch_icall_no_overrides(v12[11].Flink, a2);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.152);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v15, v14);
  return v13;
}
