/*
 * XREFs of Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044DF0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140044E2C (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 */

__int64 Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SPR_HardenInClient__private_featureState & 0x10) != 0 )
    return Feature_SPR_HardenInClient__private_featureState & 1;
  else
    return Feature_SPR_HardenInClient__private_IsEnabledFallback(
             (unsigned int)Feature_SPR_HardenInClient__private_featureState,
             3LL);
}
