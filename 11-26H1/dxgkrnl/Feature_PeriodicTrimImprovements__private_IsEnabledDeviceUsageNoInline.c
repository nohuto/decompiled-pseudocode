/*
 * XREFs of Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14005B6F0
 * Callers:
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1401949B0 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1403D3438 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 * Callees:
 *     Feature_PeriodicTrimImprovements__private_IsEnabledFallback @ 0x140075C10 (Feature_PeriodicTrimImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PeriodicTrimImprovements__private_featureState & 0x10) != 0 )
    return Feature_PeriodicTrimImprovements__private_featureState & 1;
  else
    return Feature_PeriodicTrimImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_PeriodicTrimImprovements__private_featureState,
             3LL);
}
