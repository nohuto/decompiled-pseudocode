/*
 * XREFs of Feature_Arm64VcRedistRedirect__private_IsEnabledDeviceUsageNoInline @ 0x18010FC20
 * Callers:
 *     LdrpAppCompatRedirect @ 0x18007C530 (LdrpAppCompatRedirect.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
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
