/*
 * XREFs of PopBatteryInit @ 0x140CD4A1C
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *result; // rax

  qword_140F0FE88 = (__int64)&qword_140F0FE80;
  qword_140F0FE80 = (__int64)&qword_140F0FE80;
  qword_140F0FE98 = (__int64)&qword_140F0FE90;
  qword_140F0FE90 = (__int64)&qword_140F0FE90;
  v0 = 4LL;
  qword_140F0FE68 = 0LL;
  stru_140F10070.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)&stru_140F10070.TrapFrame;
  stru_140F10070.TrapFrame = (_KTRAP_FRAME *)&stru_140F10070.TrapFrame;
  dword_140F10044 = -1;
  stru_140F10070.StackLimit = (void *volatile)-1LL;
  stru_140F10070.StackBase = (void *)-1LL;
  stru_140F10070.ThreadLock = -1LL;
  LODWORD(stru_140F10070.CycleTime) = -1;
  PopWeakChargerNotificationBatteryMiniport = -1;
  PopWeakChargerNotificationUsbStack = -1;
  PopWeakChargerLock.ThreadLock = (unsigned __int64)PopBatteryWorker;
  v1 = &unk_140F0FFC0;
  *(_OWORD *)&stru_140F10070.Header.Lock = 0LL;
  *(_QWORD *)&qword_140F0FE60 = 0LL;
  *(_OWORD *)&stru_140F10070.Header.WaitListHead.Blink = 0LL;
  *(_QWORD *)&stru_140F10070.Header.Lock = 0LL;
  PopWeakChargerLock.Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&PopWeakChargerLock.Header.Lock = 0LL;
  *(_OWORD *)&stru_140F10070.QuantumTarget = 0LL;
  qword_140F10054 = 0LL;
  byte_140F10040 = 0;
  LOBYTE(stru_140F10070.Header.WaitListHead.Blink) = 1;
  qword_140F10060 = 0LL;
  dword_140F10050 = 0;
  PopWeakChargerCompositeState = 0;
  PopWeakChargerLock.CycleTime = 0LL;
  PopWeakChargerLock.StackLimit = 0LL;
  do
  {
    *v1 = 2;
    v1 += 8;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140F0FF00.Header.Lock = 8LL;
  stru_140F0FF80.Header.WaitListHead.Blink = &stru_140F0FF80.Header.WaitListHead;
  stru_140F0FF80.Header.WaitListHead.Flink = &stru_140F0FF80.Header.WaitListHead;
  qword_140F0FF58 = (__int64)PopBatteryWakeDpc;
  stru_140F0FF00.Header.WaitListHead.Blink = &stru_140F0FF00.Header.WaitListHead;
  stru_140F0FF00.Header.WaitListHead.Flink = &stru_140F0FF00.Header.WaitListHead;
  stru_140F0FF98.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  LOWORD(stru_140F0FF80.Header.Lock) = 1;
  stru_140F0FF80.Header.Size = 6;
  stru_140F0FF80.Header.SignalState = 0;
  qword_140F10068 = 0LL;
  dword_140F0FF40 = 275;
  qword_140F0FF60 = 0LL;
  qword_140F0FF78 = 0LL;
  qword_140F0FF50 = 0LL;
  stru_140F0FF00.DueTime.QuadPart = 0LL;
  stru_140F0FF00.Period = 0;
  stru_140F0FF00.Processor = 0;
  stru_140F0FF00.TimerDifObjTracking = 0;
  stru_140F0FF98.Parameter = 0LL;
  stru_140F0FF98.List.Flink = 0LL;
  byte_140F0FE78 = 0;
  dword_140F0FEF0 = 0;
  PopWeakChargerLock.TrapFrame = (_KTRAP_FRAME *)8;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  PopWeakChargerLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)PopRefreshEstimateAfterSpoilingDpc;
  result = &PopWeakChargerLock.152;
  PopWeakChargerLock.ApcState.ApcListHead[0].Blink = PopWeakChargerLock.ApcState.ApcListHead;
  PopWeakChargerLock.ApcState.ApcListHead[0].Flink = PopWeakChargerLock.ApcState.ApcListHead;
  PopWeakChargerLock.CurrentRunTime = 275;
  *(_QWORD *)&PopWeakChargerLock.WaitRegister.Flags = 0LL;
  PopWeakChargerLock.FirstArgument = 0LL;
  PopWeakChargerLock.StateSaveArea = 0LL;
  PopWeakChargerLock.ApcState.ApcListHead[1].Flink = 0LL;
  HIDWORD(PopWeakChargerLock.WaitStatus) = 0;
  LOWORD(PopWeakChargerLock.WaitStatus) = 0;
  BYTE3(PopWeakChargerLock.WaitStatus) = 0;
  byte_140F0FFB8 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
