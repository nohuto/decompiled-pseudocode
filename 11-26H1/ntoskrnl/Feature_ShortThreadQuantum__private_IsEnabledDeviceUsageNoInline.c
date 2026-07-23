/*
 * XREFs of Feature_ShortThreadQuantum__private_IsEnabledDeviceUsageNoInline @ 0x140526628
 * Callers:
 *     KiInitializeVelocity @ 0x140CD02B4 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_ShortThreadQuantum__private_IsEnabledFallback @ 0x140526664 (Feature_ShortThreadQuantum__private_IsEnabledFallback.c)
 */

__int64 Feature_ShortThreadQuantum__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShortThreadQuantum__private_featureState & 0x10) != 0 )
    return Feature_ShortThreadQuantum__private_featureState & 1;
  else
    return Feature_ShortThreadQuantum__private_IsEnabledFallback(
             (unsigned int)Feature_ShortThreadQuantum__private_featureState,
             3LL);
}
