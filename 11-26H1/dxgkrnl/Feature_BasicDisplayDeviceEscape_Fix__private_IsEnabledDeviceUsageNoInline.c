/*
 * XREFs of Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14007B630
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback @ 0x14007B66C (Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_BasicDisplayDeviceEscape_Fix__private_featureState & 0x10) != 0 )
    return Feature_BasicDisplayDeviceEscape_Fix__private_featureState & 1;
  else
    return Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_BasicDisplayDeviceEscape_Fix__private_featureState,
             3LL);
}
