/*
 * XREFs of TtmpAcquireSessionById @ 0x140A2DD78
 * Callers:
 *     TtmNotifySessionPowerRequestDeleted @ 0x14075A1F0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x14075A3F0 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x14075AE78 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14075B7B4 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140A2CE40 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A2CFA4 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140A2D020 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A2D0B0 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionTerminalInput @ 0x140A2D208 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140A2D9F8 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A2DB84 (TtmNotifySessionDisplayBurst.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionLock @ 0x1406EBB64 (TtmpAcquireSessionLock.c)
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  *a1 = 0LL;
  if ( TtmIsEnabled() )
  {
    TtmpAcquireSessionLock();
    if ( TtmpSession && *(_DWORD *)TtmpSession == a2 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1697, -1, -1073740715);
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1686, -1, -1073741637);
  }
  return v2;
}
