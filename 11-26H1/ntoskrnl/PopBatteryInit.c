/*
 * XREFs of PopBatteryInit @ 0x140CDAD9C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140F10648 = (__int64)&qword_140F10640;
  qword_140F10640 = (__int64)&qword_140F10640;
  qword_140F10658 = (__int64)&qword_140F10650;
  qword_140F10650 = (__int64)&qword_140F10650;
  v0 = 4LL;
  qword_140F10628 = 0LL;
  qword_140F108C8 = (__int64)&qword_140F108C0;
  qword_140F108C0 = (__int64)&qword_140F108C0;
  dword_140F10804 = -1;
  *(_QWORD *)&xmmword_140F10860 = -1LL;
  *((_QWORD *)&xmmword_140F10860 + 1) = -1LL;
  *(_QWORD *)&xmmword_140F10870 = -1LL;
  DWORD2(xmmword_140F10870) = -1;
  PopWeakChargerNotificationBatteryMiniport = -1;
  PopWeakChargerNotificationUsbStack = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140F10780;
  xmmword_140F10830 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140F10840 = 0LL;
  *(_QWORD *)&xmmword_140F10830 = 0LL;
  qword_140F0D228 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140F10850 = 0LL;
  qword_140F10814 = 0LL;
  byte_140F10800 = 0;
  LOBYTE(xmmword_140F10840) = 1;
  qword_140F10820 = 0LL;
  dword_140F10810 = 0;
  PopWeakChargerCompositeState = 0;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 8;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140F106C0.Header.Lock = 8LL;
  stru_140F10740.Header.WaitListHead.Blink = &stru_140F10740.Header.WaitListHead;
  stru_140F10740.Header.WaitListHead.Flink = &stru_140F10740.Header.WaitListHead;
  qword_140F10718 = (__int64)PopBatteryWakeDpc;
  stru_140F106C0.Header.WaitListHead.Blink = &stru_140F106C0.Header.WaitListHead;
  stru_140F106C0.Header.WaitListHead.Flink = &stru_140F106C0.Header.WaitListHead;
  stru_140F10758.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  LOWORD(stru_140F10740.Header.Lock) = 1;
  stru_140F10740.Header.Size = 6;
  stru_140F10740.Header.SignalState = 0;
  qword_140F10828 = 0LL;
  dword_140F10700 = 275;
  qword_140F10720 = 0LL;
  qword_140F10738 = 0LL;
  qword_140F10710 = 0LL;
  stru_140F106C0.DueTime.QuadPart = 0LL;
  stru_140F106C0.Period = 0;
  stru_140F106C0.Processor = 0;
  stru_140F106C0.TimerDifObjTracking = 0;
  stru_140F10758.Parameter = 0LL;
  stru_140F10758.List.Flink = 0LL;
  byte_140F10638 = 0;
  dword_140F106B0 = 0;
  *(_QWORD *)&stru_140F0D1E0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140F0D1B8 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140F0D1E0.Header.WaitListHead;
  stru_140F0D1E0.Header.WaitListHead.Blink = &stru_140F0D1E0.Header.WaitListHead;
  stru_140F0D1E0.Header.WaitListHead.Flink = &stru_140F0D1E0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140F0D1C0 = 0LL;
  qword_140F0D1D8 = 0LL;
  qword_140F0D1B0 = 0LL;
  stru_140F0D1E0.DueTime.QuadPart = 0LL;
  stru_140F0D1E0.Period = 0;
  stru_140F0D1E0.Processor = 0;
  stru_140F0D1E0.TimerDifObjTracking = 0;
  byte_140F10778 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
