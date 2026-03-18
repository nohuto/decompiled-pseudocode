/*
 * XREFs of Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline @ 0x14028426C
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 * Callees:
 *     Feature_HtTransparentDisabledFix__private_IsEnabledFallback @ 0x1402842A4 (Feature_HtTransparentDisabledFix__private_IsEnabledFallback.c)
 */

__int64 Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HtTransparentDisabledFix__private_featureState & 0x10) != 0 )
    return Feature_HtTransparentDisabledFix__private_featureState & 1;
  else
    return Feature_HtTransparentDisabledFix__private_IsEnabledFallback(
             (unsigned int)Feature_HtTransparentDisabledFix__private_featureState,
             3LL);
}
