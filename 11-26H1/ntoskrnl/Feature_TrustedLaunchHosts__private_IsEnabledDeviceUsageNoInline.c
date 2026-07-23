/*
 * XREFs of Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140618694
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x14051E754 (SepVerifyDesktopAppxImage.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B6D4 (MiInitializeCreateSectionPacket.c)
 *     MiValidateExistingImage @ 0x140A64508 (MiValidateExistingImage.c)
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledFallback @ 0x1406186D0 (Feature_TrustedLaunchHosts__private_IsEnabledFallback.c)
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
