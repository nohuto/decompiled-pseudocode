/*
 * XREFs of PnpValidateRegistryDword @ 0x1404FCFB8
 * Callers:
 *     PnpGetRegistryDword @ 0x1404F4BE8 (PnpGetRegistryDword.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407A7970 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407A9F80 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1407AA1AC (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1407AAAFC (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407AAB70 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1409886D0 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140988AF0 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgVerifyService @ 0x140AD34A4 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B37850 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
