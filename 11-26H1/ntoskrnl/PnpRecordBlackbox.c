/*
 * XREFs of PnpRecordBlackbox @ 0x1409DE16C
 * Callers:
 *     PnpWatchdogFirstChanceCallback @ 0x1407A38C0 (PnpWatchdogFirstChanceCallback.c)
 *     PnpCancelWatchdog @ 0x1409DE054 (PnpCancelWatchdog.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1409DE344 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140AEFC6C (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x140B561C0 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

__int64 __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  v2 = a2 - 1;
  if ( !v2 )
    return PnpRecordBlackboxPnpEventWorkerInformation();
  v3 = v2 - 1;
  if ( !v3 )
    return PnpRecordBlackboxDeviceCompletionQueueInformation();
  v4 = v3 - 1;
  if ( !v4 )
    return PnpRecordBlackboxDelayedRemoveWorkerInformation();
  if ( (unsigned int)(v4 - 1) > 1 )
    __fastfail(5u);
  return result;
}
