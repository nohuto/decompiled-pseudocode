/*
 * XREFs of CmpFindSubKeyByName @ 0x140AC518C
 * Callers:
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 *     CmpFindGroupOrderList @ 0x140CF5484 (CmpFindGroupOrderList.c)
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140CF5730 (CmpFindStateSepKeysRedirectionMapNode.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CF5C1C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140CF5DD8 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x140CF6170 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140CF62AC (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140CF639C (CmpLoadManufacturingProfileServicesNode.c)
 *     CmpLoadServicesNode @ 0x140CF6460 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140CF65C4 (CmpSortDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
