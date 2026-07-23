/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x1407EA078
 * Callers:
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportRegisterPowerSettingCallback()
{
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           SshpPowerSettingCallback,
           0LL,
           &qword_140F0A840);
}
