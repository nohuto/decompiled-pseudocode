/*
 * XREFs of Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline @ 0x14000C97C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     Feature_U3RHDC__private_IsEnabledFallback @ 0x14000C9B8 (Feature_U3RHDC__private_IsEnabledFallback.c)
 */

__int64 Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline()
{
  if ( (WPP_MAIN_CB.DeviceLock.Header.Type & 0x10) != 0 )
    return WPP_MAIN_CB.DeviceLock.Header.Type & 1;
  else
    return Feature_U3RHDC__private_IsEnabledFallback((unsigned int)WPP_MAIN_CB.DeviceLock.Header.Lock, 3LL);
}
