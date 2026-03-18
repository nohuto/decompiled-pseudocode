/*
 * XREFs of Feature_FixCursorShadowUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140273ECC
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     Feature_FixCursorShadowUpdate__private_IsEnabledFallback @ 0x140273F04 (Feature_FixCursorShadowUpdate__private_IsEnabledFallback.c)
 */

__int64 Feature_FixCursorShadowUpdate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixCursorShadowUpdate__private_featureState & 0x10) != 0 )
    return Feature_FixCursorShadowUpdate__private_featureState & 1;
  else
    return Feature_FixCursorShadowUpdate__private_IsEnabledFallback(
             (unsigned int)Feature_FixCursorShadowUpdate__private_featureState,
             3LL);
}
