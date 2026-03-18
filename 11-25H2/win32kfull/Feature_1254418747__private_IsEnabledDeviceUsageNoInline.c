/*
 * XREFs of Feature_1254418747__private_IsEnabledDeviceUsageNoInline @ 0x1402FBB90
 * Callers:
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FB908 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 * Callees:
 *     Feature_1254418747__private_IsEnabledFallback @ 0x1402FBBC8 (Feature_1254418747__private_IsEnabledFallback.c)
 */

__int64 Feature_1254418747__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1254418747__private_featureState & 0x10) != 0 )
    return Feature_1254418747__private_featureState & 1;
  else
    return Feature_1254418747__private_IsEnabledFallback((unsigned int)Feature_1254418747__private_featureState, 3LL);
}
