/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1407EA0AC
 * Callers:
 *     SshpUninitialize @ 0x140CDD8F8 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140B1B9C0 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(qword_140F0A840);
}
