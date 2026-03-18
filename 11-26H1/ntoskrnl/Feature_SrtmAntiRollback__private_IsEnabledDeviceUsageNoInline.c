/*
 * XREFs of Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline @ 0x140607130
 * Callers:
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     Feature_SrtmAntiRollback__private_IsEnabledFallback @ 0x14060716C (Feature_SrtmAntiRollback__private_IsEnabledFallback.c)
 */

__int64 Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SrtmAntiRollback__private_featureState & 0x10) != 0 )
    return Feature_SrtmAntiRollback__private_featureState & 1;
  else
    return Feature_SrtmAntiRollback__private_IsEnabledFallback(
             (unsigned int)Feature_SrtmAntiRollback__private_featureState,
             3LL);
}
