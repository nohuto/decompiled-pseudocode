/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x1409F8700
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F1154 (Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409AA1AC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogStopTimer @ 0x140B54388 (PopDripsWatchdogStopTimer.c)
 */

void PopDripsWatchdogStopWatchdog()
{
  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  if ( (dword_140F0BDA8 & 4) != 0 )
  {
    if ( (unsigned int)Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (dword_140F0BE64 & 1) != 0 )
        PopDripsWatchdogStopTimer(&unk_140F0BDB0);
      if ( (dword_140F0BF74 & 1) != 0 )
        PopDripsWatchdogStopTimer(&unk_140F0BEC0);
    }
    dword_140F0BDA8 &= ~4u;
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
