/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x14084C198
 * Callers:
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408D7490 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindValueByName @ 0x140AB231C (CmpFindValueByName.c)
 */

__int64 __fastcall CmpMarkCurrentValueDirty(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  unsigned int ValueByName; // edi
  int v6; // [rsp+40h] [rbp+20h] BYREF
  int v7; // [rsp+44h] [rbp+24h]

  v6 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v7 = 0;
  if ( v2 )
    result = HvpGetCellPaged(BugCheckParameter3);
  else
    result = HvpGetCellFlat(BugCheckParameter3, a2, &v6);
  if ( result )
  {
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v6);
    result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
           ? HvpGetCellFlat(BugCheckParameter3, 0LL, &v6)
           : HvpGetCellPaged(BugCheckParameter3);
    if ( result )
    {
      ValueByName = CmpFindValueByName(BugCheckParameter3, result, &CmpCurrentString);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        result = HvpReleaseCellFlat(BugCheckParameter3, &v6);
      else
        result = HvpReleaseCellPaged(BugCheckParameter3, &v6);
      if ( ValueByName != -1 )
        return HvpMarkCellDirty(BugCheckParameter3, ValueByName);
    }
  }
  return result;
}
