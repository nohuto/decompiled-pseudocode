/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x1404A5588
 * Callers:
 *     PopCleanCoolingExtension @ 0x1407CEA70 (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x1407DB220 (PopPolicyDeviceTargetChange.c)
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140AECFC0 (IoUnregisterPlugPlayNotificationEx.c)
 *     IoUnregisterPlugPlayNotification @ 0x140B33BC0 (IoUnregisterPlugPlayNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PnpDereferenceNotify @ 0x140A1A800 (PnpDereferenceNotify.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
