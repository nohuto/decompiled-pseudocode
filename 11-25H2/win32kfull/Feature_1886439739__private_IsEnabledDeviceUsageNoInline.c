/*
 * XREFs of Feature_1886439739__private_IsEnabledDeviceUsageNoInline @ 0x14033AE0C
 * Callers:
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14033AAD8 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     Feature_1886439739__private_IsEnabledFallback @ 0x14033AE44 (Feature_1886439739__private_IsEnabledFallback.c)
 */

__int64 Feature_1886439739__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1886439739__private_featureState & 0x10) != 0 )
    return Feature_1886439739__private_featureState & 1;
  else
    return Feature_1886439739__private_IsEnabledFallback((unsigned int)Feature_1886439739__private_featureState, 3LL);
}
