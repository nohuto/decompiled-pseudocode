/*
 * XREFs of PopDirectedDripsClearDisengageReason @ 0x14047CCB8
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14047BC14 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405DE0A8 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PopDirectedDripsDisengageTimerCallback @ 0x1406065C0 (PopDirectedDripsDisengageTimerCallback.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407E2720 (PopDripsWatchdogCallbackWorker.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x14047CD84 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsClearDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140F12E98);
  v2 = _InterlockedAnd(&dword_140F12E98, ~(1 << a1));
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(&PopDirectedDripsState, result, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) != 0 )
    return PopQueueDirectedDripsWork(v4, 2LL);
  return result;
}
