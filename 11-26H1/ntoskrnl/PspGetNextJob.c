/*
 * XREFs of PspGetNextJob @ 0x14095A1E0
 * Callers:
 *     PspGetNextSilo @ 0x140959E18 (PspGetNextSilo.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140959E60 (EtwpUpdateGlobalGroupMasks.c)
 *     PspEnforceLimits @ 0x14095A0E0 (PspEnforceLimits.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

unsigned __int64 *__fastcall PspGetNextJob(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 *v6; // rbp
  void *v7; // rdx
  LegacyAutoBoost *v8; // rsi
  struct _KTHREAD *KernelStack; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = 0LL;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.AffinityVersion, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.AffinityVersion, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSiloMonitorLock.AffinityVersion,
      0,
      v8,
      (struct _KTHREAD *)&PspSiloMonitorLock.AffinityVersion);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  KernelStack = (struct _KTHREAD *)KiSystemServiceTraceCallbackLock.KernelStack;
  if ( Object )
    KernelStack = (struct _KTHREAD *)Object[3];
  while ( KernelStack != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.KernelStack )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)&KernelStack[-1].Padding[2], 0x6E457350u) )
    {
      v6 = &KernelStack[-1].Padding[2];
      break;
    }
    KernelStack = *(struct _KTHREAD **)&KernelStack->Header.Lock;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.AffinityVersion, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.AffinityVersion);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.AffinityVersion);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v6;
}
