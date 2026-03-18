/*
 * XREFs of Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledDeviceUsageNoInline @ 0x140098658
 * Callers:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x140005854 (-MonitorCleanupGlobal@@YAJXZ.c)
 * Callees:
 *     Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledFallback @ 0x140098694 (Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_featureState & 1;
  else
    return Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_featureState,
             3LL);
}
