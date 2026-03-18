/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1407E453C
 * Callers:
 *     SshpUninitialize @ 0x140CD7578 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140B19570 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback((PVOID)PsAltSystemCallRegistrationLock.ExtendedFeatureDisableMask);
}
