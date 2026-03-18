/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x140760454
 * Callers:
 *     TtmiSetDisplayPowerRequest @ 0x14075A65C (TtmiSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14075C09C (TtmpDispatchSetDisplayState.c)
 *     TtmiResetTerminalTimeouts @ 0x140760170 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x140760508 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x14075A564 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x14075DAB0 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x14075F40C (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x14075F524 (TtmiLogTerminalOnRequest.c)
 *     TtmpExitProximity @ 0x140760818 (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x1407609D4 (TtmpShouldEscapeProximity.c)
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
