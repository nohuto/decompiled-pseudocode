/*
 * XREFs of PspGetNextJob @ 0x1409FFAA0
 * Callers:
 *     PspGetNextSilo @ 0x1409FF6D8 (PspGetNextSilo.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     PspEnforceLimits @ 0x1409FF9A0 (PspEnforceLimits.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.Affinity, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.Affinity, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSiloMonitorLock.Affinity,
      0,
      v8,
      (struct _KTHREAD *)&PspSiloMonitorLock.Affinity);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.Affinity, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.Affinity);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.Affinity);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v6;
}
