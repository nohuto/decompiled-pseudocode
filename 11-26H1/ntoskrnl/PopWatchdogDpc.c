/*
 * XREFs of PopWatchdogDpc @ 0x14060D700
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403AB220 (PopUpdateWatchdogNoWorkersEvent.c)
 */

void __fastcall PopWatchdogDpc(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 16) != 1146572624 )
    __fastfail(5u);
  *(_QWORD *)(a2 + 360) = RtlGetInterruptTimePrecise(&v4);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2);
  if ( *(_BYTE *)(a2 + 208) && !*(_BYTE *)(a2 + 21) )
  {
    *(_BYTE *)(a2 + 21) = 1;
    *(_QWORD *)(a2 + 368) = RtlGetInterruptTimePrecise(&v4);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), RealTimeWorkQueue);
  }
  *(_BYTE *)(a2 + 20) = 0;
  PopUpdateWatchdogNoWorkersEvent(a2);
  KeReleaseSpinLock((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2, v3);
}
