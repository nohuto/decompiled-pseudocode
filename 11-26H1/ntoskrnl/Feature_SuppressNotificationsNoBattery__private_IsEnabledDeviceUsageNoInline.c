/*
 * XREFs of Feature_SuppressNotificationsNoBattery__private_IsEnabledDeviceUsageNoInline @ 0x14060F8A0
 * Callers:
 *     PopEvaluateWeakChargerState @ 0x1407DCC2C (PopEvaluateWeakChargerState.c)
 * Callees:
 *     Feature_SuppressNotificationsNoBattery__private_IsEnabledFallback @ 0x14060F8DC (Feature_SuppressNotificationsNoBattery__private_IsEnabledFallback.c)
 */

__int64 Feature_SuppressNotificationsNoBattery__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SuppressNotificationsNoBattery__private_featureState & 0x10) != 0 )
    return Feature_SuppressNotificationsNoBattery__private_featureState & 1;
  else
    return Feature_SuppressNotificationsNoBattery__private_IsEnabledFallback(
             (unsigned int)Feature_SuppressNotificationsNoBattery__private_featureState,
             3LL);
}
