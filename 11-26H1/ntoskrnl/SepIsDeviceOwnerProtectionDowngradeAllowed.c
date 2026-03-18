/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x14063B720
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14077A94C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return LODWORD(RtlpBootStatHandleLock.FirstArgument) != 0;
}
