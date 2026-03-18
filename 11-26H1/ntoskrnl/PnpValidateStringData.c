/*
 * XREFs of PnpValidateStringData @ 0x1404ED05C
 * Callers:
 *     PnpValidateRegistryString @ 0x1404ED020 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1405DB494 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1405DB61C (PnpValidateRegistryValue.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407A9F80 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AD2A4C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B37850 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B442E8 (PiDevCfgResolveMultiSzValue.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateStringData(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
