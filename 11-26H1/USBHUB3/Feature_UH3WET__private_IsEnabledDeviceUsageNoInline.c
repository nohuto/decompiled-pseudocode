/*
 * XREFs of Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014B8C
 * Callers:
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015C40 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x140018AC0 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C108 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_CreatePdoInternal @ 0x1400811BC (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1400869EC (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     Feature_UH3WET__private_IsEnabledFallback @ 0x140014BC8 (Feature_UH3WET__private_IsEnabledFallback.c)
 */

__int64 Feature_UH3WET__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UH3WET__private_featureState & 0x10) != 0 )
    return Feature_UH3WET__private_featureState & 1;
  else
    return Feature_UH3WET__private_IsEnabledFallback((unsigned int)Feature_UH3WET__private_featureState, 3LL);
}
