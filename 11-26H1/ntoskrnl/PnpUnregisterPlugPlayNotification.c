/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x1404ABEF8
 * Callers:
 *     PopCleanCoolingExtension @ 0x1407CB9D0 (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x1407D7C00 (PopPolicyDeviceTargetChange.c)
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140AEA4D0 (IoUnregisterPlugPlayNotificationEx.c)
 *     IoUnregisterPlugPlayNotification @ 0x140B319C0 (IoUnregisterPlugPlayNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PnpDereferenceNotify @ 0x1409DD548 (PnpDereferenceNotify.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(struct _LIST_ENTRY *P, char a2)
{
  struct _FAST_MUTEX *Flink; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rsi
  PVOID *p_Blink; // r15
  struct _KTHREAD *v10; // r14
  struct _LIST_ENTRY *v11; // rax

  Flink = (struct _FAST_MUTEX *)P[4].Flink;
  v5 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE3(NlsMbOemCodePageTag) )
  {
    ExAcquireFastMutex(&PnpDeferredRegistrationLock);
    v8 = *(struct _KTHREAD **)&PspSiloMonitorLock.Spare36;
    while ( v8 != (struct _KTHREAD *)&PspSiloMonitorLock.Spare36 )
    {
      p_Blink = (PVOID *)&v8->Header.WaitListHead.Blink;
      v10 = v8;
      if ( v8->Header.WaitListHead.Blink == P )
      {
        v5 = 1;
        if ( Flink )
          ExAcquireFastMutex(Flink);
        v8 = *(struct _KTHREAD **)&v8->Header.Lock;
        if ( (struct _KTHREAD *)v8->Header.WaitListHead.Flink != v10
          || (v11 = v10->Header.WaitListHead.Flink, (struct _KTHREAD *)v11->Flink != v10) )
        {
          __fastfail(3u);
        }
        v11->Flink = (struct _LIST_ENTRY *)v8;
        v8->Header.WaitListHead.Flink = v11;
        PnpDereferenceNotify(*p_Blink);
        if ( Flink )
          KeReleaseGuardedMutex(Flink);
        ExFreePoolWithTag(v10, 0x37706E50u);
      }
      else
      {
        v8 = *(struct _KTHREAD **)&v8->Header.Lock;
      }
    }
    KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)P[4].Blink, 1u);
  }
  else if ( Flink )
  {
    ExAcquireFastMutex(Flink);
  }
  if ( !BYTE2(P[3].Blink) || v5 )
  {
    BYTE2(P[3].Blink) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite((PERESOURCE)P[4].Blink);
      KeLeaveCriticalRegion();
      if ( Flink )
        ExAcquireFastMutex(Flink);
    }
    PnpDereferenceNotify(P);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite((PERESOURCE)P[4].Blink);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  if ( Flink )
    KeReleaseGuardedMutex(Flink);
  return 0LL;
}
