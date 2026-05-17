/*
 * XREFs of Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline @ 0x180110090
 * Callers:
 *     LdrpAppCompatRedirect @ 0x180085190 (LdrpAppCompatRedirect.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Arm64VcRedistRedirect__private_featureState & 0x10) != 0 )
    return Feature_Arm64VcRedistRedirect__private_featureState & 1;
  else
    return Feature_Arm64VcRedistRedirect__private_IsEnabledFallback(
             (unsigned int)Feature_Arm64VcRedistRedirect__private_featureState,
             3LL);
}
