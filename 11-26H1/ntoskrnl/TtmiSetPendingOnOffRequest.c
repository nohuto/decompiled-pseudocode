/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x1407EC370
 * Callers:
 *     TtmiSetDisplayPowerRequest @ 0x1407E68A0 (TtmiSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1407E82F4 (TtmpDispatchSetDisplayState.c)
 *     TtmiResetTerminalTimeouts @ 0x1407EC080 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x1407EC424 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1407E67A4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x1407E9B38 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x1407EB360 (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1407EB464 (TtmiLogTerminalOnRequest.c)
 *     TtmpExitProximity @ 0x1407EC738 (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x1407EC8F0 (TtmpShouldEscapeProximity.c)
 */

void __fastcall TtmiSetPendingOnOffRequest(__int64 a1, _DWORD *a2, char a3, int a4, int a5)
{
  __int64 v9; // r8
  int v10; // ecx

  if ( (a2[9] & 8) != 0 )
  {
    if ( !a3 || a4 != 1 || !(unsigned __int8)TtmpShouldEscapeProximity(a2) )
    {
      TtmiLogProximityBlockedRequest(a3, a4, a5);
      return;
    }
    LOBYTE(v9) = a4;
    TtmpExitProximity(a1, a2, v9);
  }
  v10 = a2[7];
  if ( a3 )
    TtmiLogTerminalOnRequest(v10, a4, a5);
  else
    TtmiLogTerminalOffRequest(v10, a4, a5);
  a2[14] = a4;
  a2[9] |= 4u;
  a2[13] = 2 - (a3 != 0);
  TtmiScheduleSessionWorker(a1, 2);
}
