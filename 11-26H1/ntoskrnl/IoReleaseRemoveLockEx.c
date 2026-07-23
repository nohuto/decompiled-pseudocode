/*
 * XREFs of IoReleaseRemoveLockEx @ 0x1402C1010
 * Callers:
 *     PoFxPrepareDevice @ 0x14049B394 (PoFxPrepareDevice.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404F65F0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405087E8 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1406083BC (PopFxReleaseAcpiRefDevice.c)
 *     PopFxAcpiForwardNotification @ 0x140614F44 (PopFxAcpiForwardNotification.c)
 *     DifIoReleaseRemoveLockExWrapper @ 0x140661DF0 (DifIoReleaseRemoveLockExWrapper.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140C41F10 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140C42440 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140C42540 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140C36D68 (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // bp
  KIRQL v6; // al
  struct _LIST_ENTRY *Flink; // r15
  KIRQL v8; // dl
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY **p_Flink; // r14
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  KIRQL v13; // [rsp+60h] [rbp+18h]

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    v8 = v6;
    v13 = v6;
    v9 = Flink;
    if ( Flink )
    {
      do
      {
        if ( v5 || v9->Blink != Tag )
        {
          Flink = v9;
          p_Flink = &v9->Flink;
        }
        else
        {
          v5 = 1;
          v10 = v9->Flink;
          if ( v9 == RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink )
          {
            RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v10;
            p_Flink = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
          }
          else
          {
            Flink->Flink = v10;
            p_Flink = &Flink->Flink;
          }
          ExFreePoolWithTag(v9, 0);
        }
        v9 = *p_Flink;
      }
      while ( *p_Flink );
      v8 = v13;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent, v8);
    if ( !v5
      && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseTag((ULONG_PTR)RemoveLock, (ULONG_PTR)Tag, retaddr)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
