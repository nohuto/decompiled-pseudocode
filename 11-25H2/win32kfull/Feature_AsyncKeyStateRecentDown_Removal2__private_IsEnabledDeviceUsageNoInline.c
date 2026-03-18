/*
 * XREFs of Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x14027A0E0
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback @ 0x14027A118 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback.c)
 */

__int64 Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AsyncKeyStateRecentDown_Removal2__private_featureState & 0x10) != 0 )
    return Feature_AsyncKeyStateRecentDown_Removal2__private_featureState & 1;
  else
    return Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback(
             (unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_featureState,
             3LL);
}
