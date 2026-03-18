/*
 * XREFs of Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1401B9BF8
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x14016FB90 (NtUserGetAsyncKeyState.c)
 *     UpdateAsyncKeyState @ 0x14018CE40 (UpdateAsyncKeyState.c)
 *     _GetAsyncKeyState @ 0x14018D230 (_GetAsyncKeyState.c)
 * Callees:
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback @ 0x1401B9C30 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback.c)
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
