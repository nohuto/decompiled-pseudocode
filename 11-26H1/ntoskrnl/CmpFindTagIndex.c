/*
 * XREFs of CmpFindTagIndex @ 0x140CF5804
 * Callers:
 *     CmpAddDriverToList @ 0x140CF493C (CmpAddDriverToList.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpValueToData @ 0x140866670 (CmpValueToData.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpFindTagIndex(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, unsigned __int16 *a4)
{
  bool v6; // zf
  unsigned int v8; // ebx
  ULONG_PTR CellPaged; // rax
  unsigned int i; // ebx
  unsigned int *v11; // rsi
  __int64 CellFlat; // rax
  unsigned int ValueByName; // ebx
  __int64 v14; // rax
  unsigned int v16; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v17[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v18[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v19[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+30h] BYREF

  v21 = 0xFFFFFFFFLL;
  v17[0] = -1;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v18[0] = -1;
  v8 = a2;
  v20 = 0xFFFFFFFFLL;
  v19[0] = -1;
  v17[1] = 0;
  v18[1] = 0;
  v16 = 0;
  v19[1] = 0;
  LOBYTE(v23) = 0;
  P[0] = 0LL;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, v17);
  if ( !CellPaged )
    return (unsigned int)-2;
  v11 = (unsigned int *)CmpValueToData(BugCheckParameter3, v8, CellPaged, (__int64)&v16, (__int64)&v21);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v17);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v17);
  if ( !v11 )
    return (unsigned int)-2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, v18);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a3);
  if ( !CellFlat )
  {
LABEL_14:
    i = -2;
    goto LABEL_38;
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3, CellFlat, a4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v18);
  if ( ValueByName != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v14 = HvpGetCellFlat(BugCheckParameter3, ValueByName, v19);
    else
      v14 = HvpGetCellPaged(BugCheckParameter3, ValueByName);
    if ( v14 )
    {
      CmpGetValueData(BugCheckParameter3, ValueByName, v14, &v16, (__int64)P, (__int64)&v23, (unsigned int *)&v20);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v19);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v19);
      if ( P[0] )
      {
        for ( i = 1; i <= *(_DWORD *)P[0]; ++i )
        {
          if ( *((_DWORD *)P[0] + i) == *v11 )
            goto LABEL_33;
        }
        i = -2;
LABEL_33:
        if ( (_BYTE)v23 )
        {
          ExFreePoolWithTag(P[0], 0);
        }
        else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        {
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v20);
        }
        else
        {
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v20);
        }
        goto LABEL_38;
      }
    }
    goto LABEL_14;
  }
  i = *v11;
LABEL_38:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  return i;
}
