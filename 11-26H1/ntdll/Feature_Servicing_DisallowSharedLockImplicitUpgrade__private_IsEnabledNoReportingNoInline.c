/*
 * XREFs of Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x1800E4DC8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
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
