/*
 * XREFs of Feature_UBCWF1__private_IsEnabledDeviceUsageNoInline @ 0x14004F218
 * Callers:
 *     UsbhAddDevice @ 0x14004F580 (UsbhAddDevice.c)
 * Callees:
 *     Feature_UBCWF1__private_IsEnabledFallback @ 0x14004F254 (Feature_UBCWF1__private_IsEnabledFallback.c)
 */

__int64 Feature_UBCWF1__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.SecurityDescriptor & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.SecurityDescriptor & 1;
  else
    return Feature_UBCWF1__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.SecurityDescriptor), 3LL);
}
