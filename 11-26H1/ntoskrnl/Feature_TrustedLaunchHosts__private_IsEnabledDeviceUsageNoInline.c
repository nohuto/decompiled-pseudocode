/*
 * XREFs of Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140615670
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140460C84 (SepVerifyDesktopAppxImage.c)
 *     MiInitializeCreateSectionPacket @ 0x1409BA6F4 (MiInitializeCreateSectionPacket.c)
 *     MiValidateExistingImage @ 0x140A56F88 (MiValidateExistingImage.c)
 *     MiReleaseImageSection @ 0x140A579A4 (MiReleaseImageSection.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 *     MmCreateSpecialImageSection @ 0x140B7F20C (MmCreateSpecialImageSection.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledFallback @ 0x1406156AC (Feature_TrustedLaunchHosts__private_IsEnabledFallback.c)
 */

__int64 Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TrustedLaunchHosts__private_featureState & 0x10) != 0 )
    return Feature_TrustedLaunchHosts__private_featureState & 1;
  else
    return Feature_TrustedLaunchHosts__private_IsEnabledFallback(
             (unsigned int)Feature_TrustedLaunchHosts__private_featureState,
             3LL);
}
