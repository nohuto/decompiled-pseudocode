/*
 * XREFs of PnpValidateRegistryString @ 0x1404E6600
 * Callers:
 *     PiDevCfgQueryMinWhcpVersion @ 0x1407AD8E8 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407ADA4C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1407AE0F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1407AE7A0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407AE990 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgBuildIndirectString @ 0x140A42AB8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B39A60 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     PnpValidateStringData @ 0x1404E663C (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
