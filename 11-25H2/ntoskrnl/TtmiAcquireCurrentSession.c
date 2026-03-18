/*
 * XREFs of TtmiAcquireCurrentSession @ 0x14075A3F0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407588D0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140758BD0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140758C90 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x14075A59C (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x14075BE98 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int SessionId; // eax
  unsigned int v3; // ebx

  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( SessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1758LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, SessionId);
  }
  return v3;
}
