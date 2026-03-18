/*
 * XREFs of Feature_RawMouseFlush__private_IsEnabledDeviceUsageNoInline @ 0x1402770F8
 * Callers:
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017F348 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 * Callees:
 *     Feature_RawMouseFlush__private_IsEnabledFallback @ 0x140277130 (Feature_RawMouseFlush__private_IsEnabledFallback.c)
 */

__int64 Feature_RawMouseFlush__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RawMouseFlush__private_featureState & 0x10) != 0 )
    return Feature_RawMouseFlush__private_featureState & 1;
  else
    return Feature_RawMouseFlush__private_IsEnabledFallback(
             (unsigned int)Feature_RawMouseFlush__private_featureState,
             3LL);
}
