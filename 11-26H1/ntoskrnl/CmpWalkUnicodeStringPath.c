/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x1408665A8
 * Callers:
 *     CmpWalkPath @ 0x140866560 (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x140CF5570 (CmpFindHiveSubKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpGetNextName @ 0x140864E0C (CmpGetNextName.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpWalkUnicodeStringPath(ULONG_PTR BugCheckParameter3, unsigned int a2, __int128 *a3)
{
  __int128 v4; // xmm0
  __int64 CellFlat; // rax
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  int v12; // [rsp+74h] [rbp+34h]

  v11 = -1;
  v8 = 0LL;
  v4 = *a3;
  v12 = 0;
  v9 = v4;
  while ( 1 )
  {
    CmpGetNextName((__int16 *)&v9, (__int64)&v8, (bool *)&v10);
    if ( !(_WORD)v8 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v11);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( CellFlat )
    {
      v10 = 0;
      CmpFindSubKeyByNameWithStatus(BugCheckParameter3);
      a2 = v10;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v11);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v11);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
