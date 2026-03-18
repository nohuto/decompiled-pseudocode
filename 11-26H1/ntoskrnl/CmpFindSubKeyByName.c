/*
 * XREFs of CmpFindSubKeyByName @ 0x140AC351C
 * Callers:
 *     CmpGetSystemControlValues @ 0x140CEC3D8 (CmpGetSystemControlValues.c)
 *     CmpFindGroupOrderList @ 0x140CEF108 (CmpFindGroupOrderList.c)
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140CEF3B4 (CmpFindStateSepKeysRedirectionMapNode.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CEF8A0 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140CEFA5C (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x140CEFDF4 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140CEFF30 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140CF0020 (CmpLoadManufacturingProfileServicesNode.c)
 *     CmpLoadServicesNode @ 0x140CF00E4 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140CF024C (CmpSortDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1408D7490 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
