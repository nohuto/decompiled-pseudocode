/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x140506D2C
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1407AB0D0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A71F50 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B442E8 (PiDevCfgResolveMultiSzValue.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1404F5374 (PnpValidateMultiSzData.c)
 */

bool __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9

  v1 = 0;
  if ( a1[1] == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]) != 0;
  return v1;
}
