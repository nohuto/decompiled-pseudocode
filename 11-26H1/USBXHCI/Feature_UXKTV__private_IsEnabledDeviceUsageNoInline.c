/*
 * XREFs of Feature_UXKTV__private_IsEnabledDeviceUsageNoInline @ 0x140044FBC
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_UXKTV__private_IsEnabledFallback @ 0x140044FF8 (Feature_UXKTV__private_IsEnabledFallback.c)
 */

__int64 Feature_UXKTV__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Reserved & 1;
  else
    return Feature_UXKTV__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Reserved), 3LL);
}
