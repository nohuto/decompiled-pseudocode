/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x140945110
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140944570 (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x1409446E4 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x140946CB0 (CmpKeyEnumStackEntryNotifyPromotion.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _WORD *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v8; // rdx
  __int64 CellFlat; // rax
  _WORD *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF
  int v15; // [rsp+3Ch] [rbp+14h]

  v3 = 0LL;
  v14 = -1;
  v15 = 0;
  if ( *a2 == 26994 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v3 >= (unsigned __int16)a2[1] )
        goto LABEL_2;
      v8 = *(unsigned int *)&a2[2 * v3 + 2];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, &v14);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v8);
      v10 = (_WORD *)CellFlat;
      if ( !CellFlat )
        return 0xFFFFFFFFLL;
      v11 = *(unsigned __int16 *)(CellFlat + 2);
      if ( a3 < v11 )
        break;
      a3 -= v11;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v14);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v14);
      v3 = (unsigned int)(v3 + 1);
    }
    if ( *v10 != 26220 && *v10 != 26732 )
    {
      v12 = *(_DWORD *)&v10[2 * a3 + 2];
      v13 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_21;
LABEL_15:
      HvpReleaseCellPaged(v13, &v14);
      return v12;
    }
    v12 = *(_DWORD *)&v10[4 * a3 + 2];
    v13 = BugCheckParameter3;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
      goto LABEL_15;
LABEL_21:
    HvpReleaseCellFlat(v13, (__int64)&v14);
    return v12;
  }
  else
  {
LABEL_2:
    if ( *a2 == 26220 || *a2 == 26732 )
      return *(unsigned int *)&a2[4 * a3 + 2];
    else
      return *(unsigned int *)&a2[2 * a3 + 2];
  }
}
