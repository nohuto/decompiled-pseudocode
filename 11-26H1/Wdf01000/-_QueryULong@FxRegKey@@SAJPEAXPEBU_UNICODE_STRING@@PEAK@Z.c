/*
 * XREFs of ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x14003F12C
 * Callers:
 *     GetEnhancedVerifierOptions @ 0x14003D1A8 (GetEnhancedVerifierOptions.c)
 *     ?ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x14003DDF4 (-ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     imp_WdfRegistryQueryULong @ 0x14003EE10 (imp_WdfRegistryQueryULong.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003FA3C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x14006C5C8 (FxRegistrySettingsInitialize.c)
 *     ?FxIFRGetSettings@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAKPEAE3@Z @ 0x14006D01C (-FxIFRGetSettings@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAKPEAE3@Z.c)
 *     FxOverrideDefaultVerifierSettings @ 0x14006D37C (FxOverrideDefaultVerifierSettings.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x14006D3E0 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400967C8 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxVerifierQueryStateSeparationDetection @ 0x140096A88 (FxVerifierQueryStateSeparationDetection.c)
 *     FxVerifierQueryTrackPower @ 0x140096B34 (FxVerifierQueryTrackPower.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1400A4364 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     ?CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ @ 0x1400A6A4C (-CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ.c)
 *     ?ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1400A7CE8 (-ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1400A7F14 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FxRegKey::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS result; // eax
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  result = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
  {
    if ( *(_DWORD *)&buffer[4] == 4 )
    {
      if ( result >= 0 )
        *Value = *(_DWORD *)&buffer[12];
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
