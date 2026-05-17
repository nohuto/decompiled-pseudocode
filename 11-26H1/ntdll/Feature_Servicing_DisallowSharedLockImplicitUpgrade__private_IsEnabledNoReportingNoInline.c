/*
 * XREFs of Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x1800E36A8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState & 2) != 0 )
    return Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState & 1;
  else
    return Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState,
             0LL);
}
