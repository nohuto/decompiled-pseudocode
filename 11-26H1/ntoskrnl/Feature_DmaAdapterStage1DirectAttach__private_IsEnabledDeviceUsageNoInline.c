/*
 * XREFs of Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x140589CFC
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14058A958 (IommupDomainDetachPasidDevice.c)
 *     IommupPasidDeviceCreate @ 0x14058AAEC (IommupPasidDeviceCreate.c)
 *     IommuDomainAttachDeviceEx @ 0x1405A14F0 (IommuDomainAttachDeviceEx.c)
 * Callees:
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledFallback @ 0x140589D38 (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledFallback.c)
 */

__int64 Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DmaAdapterStage1DirectAttach__private_featureState & 0x10) != 0 )
    return Feature_DmaAdapterStage1DirectAttach__private_featureState & 1;
  else
    return Feature_DmaAdapterStage1DirectAttach__private_IsEnabledFallback(
             (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_featureState,
             3LL);
}
