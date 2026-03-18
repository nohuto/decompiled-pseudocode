/*
 * XREFs of Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline @ 0x14006783C
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_RemoteVsyncWaiterFix__private_IsEnabledFallback @ 0x140067878 (Feature_RemoteVsyncWaiterFix__private_IsEnabledFallback.c)
 */

__int64 Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RemoteVsyncWaiterFix__private_featureState & 0x10) != 0 )
    return Feature_RemoteVsyncWaiterFix__private_featureState & 1;
  else
    return Feature_RemoteVsyncWaiterFix__private_IsEnabledFallback(
             (unsigned int)Feature_RemoteVsyncWaiterFix__private_featureState,
             3LL);
}
