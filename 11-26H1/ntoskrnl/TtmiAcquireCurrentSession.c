/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1407E6640
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407E4B20 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407E4E10 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1407E4EE0 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1407E67DC (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1407E80E4 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
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
