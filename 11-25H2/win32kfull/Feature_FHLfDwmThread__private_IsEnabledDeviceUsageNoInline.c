/*
 * XREFs of Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1402943A8
 * Callers:
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140292A58 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1402995F0 (NtUserGetWindowProcessHandle.c)
 * Callees:
 *     Feature_FHLfDwmThread__private_IsEnabledFallback @ 0x1402943E0 (Feature_FHLfDwmThread__private_IsEnabledFallback.c)
 */

__int64 Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FHLfDwmThread__private_featureState & 0x10) != 0 )
    return Feature_FHLfDwmThread__private_featureState & 1;
  else
    return Feature_FHLfDwmThread__private_IsEnabledFallback(
             (unsigned int)Feature_FHLfDwmThread__private_featureState,
             3LL);
}
