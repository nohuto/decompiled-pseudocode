/*
 * XREFs of TtmpAcquireSessionById @ 0x140A3AA34
 * Callers:
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407E643C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x1407E6640 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x1407E70BC (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1407E79D4 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A39E40 (TtmNotifyLowPowerStateExited.c)
 *     TtmSessionMonitorControl @ 0x140A3A808 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A3A998 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A3C5F8 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140ABC910 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B65774 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140B697BC (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 */

__int64 __fastcall TtmpAcquireSessionById(void **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // esi

  v3 = 0;
  v4 = a2;
  *a1 = 0LL;
  if ( (unsigned __int8)TtmIsEnabled(a1, a2, a3) )
  {
    TtmpAcquireSessionLock();
    if ( PspSiloMonitorLock.InitialStack && *(_DWORD *)PspSiloMonitorLock.InitialStack == v4 )
    {
      *a1 = PspSiloMonitorLock.InitialStack;
    }
    else
    {
      v3 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1695LL, 0xFFFFFFFFLL, 3221226581LL);
      ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v3 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1684LL, 0xFFFFFFFFLL, 3221225659LL);
  }
  return v3;
}
