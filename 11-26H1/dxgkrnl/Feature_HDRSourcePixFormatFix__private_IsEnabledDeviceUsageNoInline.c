/*
 * XREFs of Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline @ 0x1400982B0
 * Callers:
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     BmlGetPixelFormatPreference @ 0x1402DEE24 (BmlGetPixelFormatPreference.c)
 * Callees:
 *     Feature_HDRSourcePixFormatFix__private_IsEnabledFallback @ 0x1400982EC (Feature_HDRSourcePixFormatFix__private_IsEnabledFallback.c)
 */

__int64 Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HDRSourcePixFormatFix__private_featureState & 0x10) != 0 )
    return Feature_HDRSourcePixFormatFix__private_featureState & 1;
  else
    return Feature_HDRSourcePixFormatFix__private_IsEnabledFallback(
             (unsigned int)Feature_HDRSourcePixFormatFix__private_featureState,
             3LL);
}
