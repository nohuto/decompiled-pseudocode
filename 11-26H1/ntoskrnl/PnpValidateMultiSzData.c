/*
 * XREFs of PnpValidateMultiSzData @ 0x1404F5374
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x140506D2C (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x1405DB61C (PnpValidateRegistryValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14098BEFC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A70B50 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AD2A4C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B37850 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B442E8 (PiDevCfgResolveMultiSzValue.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpValidateMultiSzData(_WORD *a1, unsigned int a2)
{
  char result; // al
  unsigned __int64 v3; // r8

  result = 0;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( a1[v3 - 1] )
      return result;
    if ( !a1[v3 - 2] )
      return 1;
  }
  if ( a2 == 2 && !*a1 )
    return 1;
  return result;
}
