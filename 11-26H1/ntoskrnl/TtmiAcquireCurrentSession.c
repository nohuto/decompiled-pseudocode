/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1407EC1A0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407EA680 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407EA970 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1407EAA40 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1407EC33C (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1407EDC44 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int SessionId; // eax
  unsigned int v5; // ebx

  SessionId = TtmiGetSessionId(a1, a2, a3);
  if ( SessionId == -1 )
  {
    v5 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1756LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, SessionId);
  }
  return v5;
}
