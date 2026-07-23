/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140CD6C08
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140CD6E50 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x1407CBD0C (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x1407CF144 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x1407E775C (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140CDCFB0 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  *(_QWORD *)&stru_140F12EA0.Header.Lock = 0LL;
  stru_140F12E18.Header.WaitListHead.Blink = &stru_140F12E18.Header.WaitListHead;
  stru_140F12E18.Header.WaitListHead.Flink = &stru_140F12E18.Header.WaitListHead;
  LOWORD(stru_140F12E18.Header.Lock) = 1;
  stru_140F12E18.Header.Size = 6;
  stru_140F12E18.Header.SignalState = 0;
  dword_140F12E38[0] = -1946157056;
  LODWORD(stru_140F12EA0.ThreadLock) = 0;
  stru_140F12EA0.WaitBlock[1].SparePtr = (PVOID)-1LL;
  LOWORD(stru_140F12EA0.Header.WaitListHead.Flink) = 0;
  HIDWORD(stru_140F12EA0.Header.WaitListHead.Flink) = 0;
  LOBYTE(stru_140F12EA0.Header.WaitListHead.Blink) = 0;
  PopInitializeWorkItem(
    (__int64)&stru_140F12EA0.SListFaultAddress,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer(
    (__int64)&stru_140F12EA0.CycleTime,
    2,
    PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer(
    (__int64)&stru_140F12EA0.Queue,
    3,
    PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  stru_140F12EA0.WaitBlock[2].WaitListEntry.Flink = 0LL;
  *(_DWORD *)&stru_140F12EA0.WaitBlockFill11[104] = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
