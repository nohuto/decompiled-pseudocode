/*
 * XREFs of CmpLoadManufacturingProfileServicesNode @ 0x140CF0020
 * Callers:
 *     CmpFindDrivers @ 0x140CEEE14 (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x140AC351C (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingProfileNode @ 0x140CEFF30 (CmpLoadManufacturingProfileNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileServicesNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  unsigned int v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10[0] = -1;
  v11 = 0LL;
  v10[1] = 0;
  if ( !CmpLoadManufacturingProfileNode(BugCheckParameter3, a2, a3, &v11, v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, (unsigned __int16 *)&CmpServicesString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v10);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName);
  *a4 = CellFlat;
  return CellFlat != 0;
}
