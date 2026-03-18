/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140CD0A60
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140CD0CA8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x1407C8C6C (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x1407CC0A4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x1407E26CC (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140CD6C5C (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  *(_QWORD *)&unk_140F12B60.Header.Lock = 0LL;
  unk_140F12AE8 = &qword_140F12AE0;
  qword_140F12AE0 = &qword_140F12AE0;
  LOWORD(unk_140F12AD8.Header.Lock) = 1;
  unk_140F12ADA = 6;
  unk_140F12ADC = 0;
  dword_140F12AF8[0] = -1946157056;
  unk_140F12BA0 = 0;
  qword_140F12CF8 = -1LL;
  unk_140F12B68 = 0;
  unk_140F12B6C = 0;
  unk_140F12B70 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140F12B78,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)dword_140F12AC0);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F12BA8, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140F12C48, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140F12D00 = 0LL;
  dword_140F12D08 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
