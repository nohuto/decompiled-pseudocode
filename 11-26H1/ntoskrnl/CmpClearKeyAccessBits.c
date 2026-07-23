/*
 * XREFs of CmpClearKeyAccessBits @ 0x1408E5568
 * Callers:
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 *     CmpLogClearAccessBitsEvent @ 0x140B6DD24 (CmpLogClearAccessBitsEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int SubKeyByNumber; // edi
  _QWORD *Pool2; // rsi
  __int64 v5; // r14
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // r15
  unsigned int v11; // r8d
  unsigned int v13[4]; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+80h] [rbp+50h] BYREF
  int v16; // [rsp+88h] [rbp+58h]

  SubKeyByNumber = 0;
  v15 = 0;
  v13[0] = -1;
  v13[1] = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  LODWORD(v5) = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  *Pool2 = v6;
  if ( v6 == -1 )
    goto LABEL_23;
  v7 = 0;
  v16 = *(_DWORD *)(BugCheckParameter3 + 104);
  while ( 1 )
  {
    v8 = LODWORD(Pool2[(unsigned int)v5]);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, v13);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v8);
    v10 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(CellFlat + 12) )
    {
      SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, Pool2[(unsigned int)v5], 0);
      if ( SubKeyByNumber < 0 )
        goto LABEL_21;
      SubKeyByNumber = 0;
      *(_BYTE *)(v10 + 12) = 0;
      ++v7;
    }
    v11 = HIDWORD(Pool2[(unsigned int)v5]);
    if ( v11 >= *(_DWORD *)(v10 + 20) || (_DWORD)v5 == 511 )
      break;
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, (_DWORD *)v10, v11, &v15);
    if ( SubKeyByNumber < 0 )
      goto LABEL_21;
    ++HIDWORD(Pool2[(unsigned int)v5]);
    v5 = (unsigned int)(v5 + 1);
    SubKeyByNumber = 0;
    LODWORD(Pool2[v5]) = v15;
    HIDWORD(Pool2[v5]) = 0;
LABEL_14:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v13);
  }
  if ( (_DWORD)v5 )
  {
    LODWORD(v5) = v5 - 1;
    goto LABEL_14;
  }
  CmpLogClearAccessBitsEvent(a2, v7, (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 104) - v16) >> 3);
LABEL_21:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v13);
LABEL_23:
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SubKeyByNumber;
}
