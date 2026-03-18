/*
 * XREFs of CiNdisUpdateThrottleState @ 0x14000F5F0
 * Callers:
 *     CiThreadDecrementScheduledCount @ 0x14000F260 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x14000F2C0 (CiThreadIncrementScheduledCount.c)
 * Callees:
 *     <none>
 */

void CiNdisUpdateThrottleState()
{
  if ( CiNdisDeviceHandle )
  {
    if ( !CiNdisThrottleInProgress )
    {
      CiNdisThrottleInProgress = 1;
      IoQueueWorkItem(CiNdisThrottleWorkItem, (PIO_WORKITEM_ROUTINE)CiNdisThrottle, NormalWorkQueue, 0LL);
    }
  }
}
