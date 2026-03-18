/*
 * XREFs of ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AADCC
 * Callers:
 *     ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400735F0 (-PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1400A6EA4 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x14003DF1C (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140067C5C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x14006B2E0 (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1400A4364 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

bool __fastcall FxPkgPnp::PnpCheckAndIncrementRestartCount(FxPkgPnp *this)
{
  FxDevice *m_Device; // rcx
  bool v3; // bl
  unsigned int disposition; // [rsp+30h] [rbp-40h] BYREF
  FxAutoRegKey restart; // [rsp+38h] [rbp-38h] BYREF
  FxAutoRegKey settings; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING keyNameRestart; // [rsp+48h] [rbp-28h] BYREF
  wchar_t keyNameRestart_buffer[8]; // [rsp+58h] [rbp-18h] BYREF

  settings.m_Key = 0LL;
  m_Device = this->m_Device;
  restart.m_Key = 0LL;
  disposition = 0;
  wcscpy(keyNameRestart_buffer, L"Restart");
  *(_QWORD *)&keyNameRestart.Length = 1048590LL;
  keyNameRestart.Buffer = keyNameRestart_buffer;
  v3 = (int)FxDevice::OpenSettingsKey(m_Device, &settings.m_Key, 0x1F0000u) >= 0
    && FxRegKey::_Create(settings.m_Key, &keyNameRestart, &restart.m_Key, 0xF003Fu, 1u, &disposition) >= 0
    && FxPkgPnp::PnpIncrementRestartCountLogic(this, restart.m_Key, disposition == 1);
  FxAutoRegKey::~FxAutoRegKey(&restart);
  FxAutoRegKey::~FxAutoRegKey(&settings);
  return v3;
}
