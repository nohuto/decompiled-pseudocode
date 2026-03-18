/*
 * XREFs of Feature_WallpaperInvalidate__private_IsEnabledDeviceUsageNoInline @ 0x1402879D8
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 * Callees:
 *     Feature_WallpaperInvalidate__private_IsEnabledFallback @ 0x140287A10 (Feature_WallpaperInvalidate__private_IsEnabledFallback.c)
 */

__int64 Feature_WallpaperInvalidate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WallpaperInvalidate__private_featureState & 0x10) != 0 )
    return Feature_WallpaperInvalidate__private_featureState & 1;
  else
    return Feature_WallpaperInvalidate__private_IsEnabledFallback(
             (unsigned int)Feature_WallpaperInvalidate__private_featureState,
             3LL);
}
