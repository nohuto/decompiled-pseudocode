/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x140A3CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F7B44 (Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogStopTimer @ 0x140B51AE8 (PopDripsWatchdogStopTimer.c)
 */

void PopDripsWatchdogStopWatchdog()
{
  PiDmObjectManagerAcquireExclusiveLock((struct _ERESOURCE *)&PopAdaptiveStandbyLock.QuantumTarget);
  if ( ((__int64)PopAdaptiveStandbyLock.FirstArgument & 4) != 0 )
  {
    if ( (unsigned int)Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (PopAdaptiveStandbyLock.WaitBlockFill4[4] & 1) != 0 )
        PopDripsWatchdogStopTimer(&PopAdaptiveStandbyLock.TrapFrame);
      if ( (PopAdaptiveStandbyLock.NpxState & 0x100000000LL) != 0 )
        PopDripsWatchdogStopTimer(&PopAdaptiveStandbyLock.WaitBlockFill11[96]);
    }
    LODWORD(PopAdaptiveStandbyLock.FirstArgument) &= ~4u;
  }
  ExReleaseResourceLite((PERESOURCE)&PopAdaptiveStandbyLock.QuantumTarget);
  KeLeaveCriticalRegion();
}
