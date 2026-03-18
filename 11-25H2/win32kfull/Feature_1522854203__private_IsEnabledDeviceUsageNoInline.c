/*
 * XREFs of Feature_1522854203__private_IsEnabledDeviceUsageNoInline @ 0x14033ADB8
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 * Callees:
 *     Feature_1522854203__private_IsEnabledFallback @ 0x14033ADF0 (Feature_1522854203__private_IsEnabledFallback.c)
 */

__int64 Feature_1522854203__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1522854203__private_featureState & 0x10) != 0 )
    return Feature_1522854203__private_featureState & 1;
  else
    return Feature_1522854203__private_IsEnabledFallback((unsigned int)Feature_1522854203__private_featureState, 3LL);
}
