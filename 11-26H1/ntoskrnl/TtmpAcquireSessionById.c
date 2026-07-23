/*
 * XREFs of TtmpAcquireSessionById @ 0x1409F6634
 * Callers:
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407EBF9C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x1407EC1A0 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x1407ECC14 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1407ED534 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409F5A40 (TtmNotifyLowPowerStateExited.c)
 *     TtmSessionMonitorControl @ 0x1409F6408 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409F6598 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409F8018 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140ABE730 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B68814 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140B6C74C (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 */

__int64 __fastcall TtmpAcquireSessionById(void **a1, int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  *a1 = 0LL;
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    TtmpAcquireSessionLock();
    if ( PspSiloMonitorLock.InitialStack && *(_DWORD *)PspSiloMonitorLock.InitialStack == a2 )
    {
      *a1 = PspSiloMonitorLock.InitialStack;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1695LL, 0xFFFFFFFFLL, 3221226581LL);
      ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1684LL, 0xFFFFFFFFLL, 3221225659LL);
  }
  return v2;
}
