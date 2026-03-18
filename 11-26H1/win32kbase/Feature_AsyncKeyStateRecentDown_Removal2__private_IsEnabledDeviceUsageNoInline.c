/*
 * XREFs of Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1400E8AFC
 * Callers:
 *     UpdateAsyncKeyState @ 0x14008A330 (UpdateAsyncKeyState.c)
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 *     _GetAsyncKeyState @ 0x1400E8D50 (_GetAsyncKeyState.c)
 * Callees:
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback @ 0x1401C60B4 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback.c)
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
