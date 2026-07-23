/*
 * XREFs of PnpValidateRegistryDword @ 0x1404F64F8
 * Callers:
 *     PnpGetRegistryDword @ 0x1404EE1C8 (PnpGetRegistryDword.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407AA520 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407ACBF0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1407ACE1C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1407AD9D8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407ADA4C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140A42DFC (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgVerifyService @ 0x140AEA7D8 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B39A60 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
