/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x14063E83C
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14077D87C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return *(_DWORD *)&RtlpBootStatHandleLock.ApcStateFill[32] != 0;
}
