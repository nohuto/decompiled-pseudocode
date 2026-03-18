/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x1407E4508
 * Callers:
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportRegisterPowerSettingCallback()
{
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           SshpPowerSettingCallback,
           0LL,
           (PVOID *)&PsAltSystemCallRegistrationLock.ExtendedFeatureDisableMask);
}
