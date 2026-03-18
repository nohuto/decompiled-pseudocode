/*
 * XREFs of CiNdisCleanupThrottle @ 0x14000DB84
 * Callers:
 *     CsTerminate @ 0x14000D444 (CsTerminate.c)
 * Callees:
 *     Feature_229060921__private_IsEnabledDeviceUsageNoInline @ 0x140004D38 (Feature_229060921__private_IsEnabledDeviceUsageNoInline.c)
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 */

void CiNdisCleanupThrottle()
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  if ( CiNdisThrottleWorkItem )
  {
    if ( (unsigned int)Feature_229060921__private_IsEnabledDeviceUsageNoInline() )
    {
      CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
      v0 = CiNdisThrottleInProgress;
      WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
      if ( v0 )
      {
        ExBlockOnAddressPushLock(&CiNdisThrottleInProgressPushLock, &CiNdisThrottleInProgress, &v0, 1LL, 0LL);
        CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
        WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
        ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
      }
      IoFreeWorkItem(CiNdisThrottleWorkItem);
      CiNdisThrottleWorkItem = 0LL;
    }
    else
    {
      IoFreeWorkItem(CiNdisThrottleWorkItem);
    }
    if ( CiNdisDeviceHandle )
    {
      ZwClose(CiNdisDeviceHandle);
      CiNdisDeviceHandle = 0LL;
    }
  }
}
