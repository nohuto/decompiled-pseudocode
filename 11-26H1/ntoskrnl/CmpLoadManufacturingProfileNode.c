/*
 * XREFs of CmpLoadManufacturingProfileNode @ 0x140CEFF30
 * Callers:
 *     CmpLoadManufacturingProfileServicesNode @ 0x140CF0020 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x140AC351C (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingModeNode @ 0x140CEFDF4 (CmpLoadManufacturingModeNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+74h] [rbp+34h]

  v13 = -1;
  v11 = 0LL;
  v14 = 0;
  DestinationString = 0LL;
  if ( !a3 || !CmpLoadManufacturingModeNode(BugCheckParameter3, a2, &v11, &v13) )
    return 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, a3) < 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v13);
    return 0;
  }
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, &DestinationString.Length);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v13);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName);
  *a4 = CellFlat;
  return CellFlat != 0;
}
