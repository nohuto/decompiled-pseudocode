/*
 * XREFs of Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1402B605C
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     Feature_AssertionFixes__private_IsEnabledFallback @ 0x1402B6094 (Feature_AssertionFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AssertionFixes__private_featureState & 0x10) != 0 )
    return Feature_AssertionFixes__private_featureState & 1;
  else
    return Feature_AssertionFixes__private_IsEnabledFallback(
             (unsigned int)Feature_AssertionFixes__private_featureState,
             3LL);
}
