/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x1408524A8
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
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
