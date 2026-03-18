/*
 * XREFs of CmpFindStateSepKeysRedirectionMapNode @ 0x140CEF3B4
 * Callers:
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CEF8A0 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x140AC351C (CmpFindSubKeyByName.c)
 *     CmpFindHiveSubKey @ 0x140CEF1F4 (CmpFindHiveSubKey.c)
 */

bool __fastcall CmpFindStateSepKeysRedirectionMapNode(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 *a3,
        unsigned int *a4)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  unsigned int v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10[0] = -1;
  v11 = 0LL;
  v10[1] = 0;
  if ( !CmpFindHiveSubKey(BugCheckParameter3, a2, (__int128 *)L"pr", &v11, v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v11, L"\b\n");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v10);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName);
  *a3 = CellFlat;
  return CellFlat != 0;
}
