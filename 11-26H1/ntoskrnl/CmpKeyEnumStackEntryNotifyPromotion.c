/*
 * XREFs of CmpKeyEnumStackEntryNotifyPromotion @ 0x140946CB0
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x140947320 (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpDoFindSubKeyByNumber @ 0x140945110 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryNotifyPromotion(__int64 a1)
{
  int v2; // r8d
  int v3; // r14d
  __int64 i; // rdx
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  ULONG_PTR v9; // rcx
  _WORD *CellFlat; // rax
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v12; // rcx
  unsigned int v13; // ebp
  __int64 CellPaged; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  unsigned int *v18; // rdx

  v2 = 0;
  v3 = 2;
  for ( i = 20LL; i < 28; i += 4LL )
  {
    if ( *(_DWORD *)(i + a1 + 12) != *(_DWORD *)(i + *(_QWORD *)(a1 + 8)) )
    {
      v3 = v2;
      break;
    }
    ++v2;
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 112) = -1;
  if ( *(_QWORD *)(a1 + 8LL * v3 + 80) )
  {
    v17 = *(_QWORD *)a1;
    v18 = (unsigned int *)(a1 + 96 + 8LL * v3);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
      HvpReleaseCellFlat(v17, (__int64)v18);
    else
      HvpReleaseCellPaged(v17, v18);
    *(_QWORD *)(a1 + 8LL * v3 + 80) = 0LL;
    *(_DWORD *)(a1 + 4LL * v3 + 72) = -1;
  }
  if ( *(_QWORD *)(a1 + 8LL * v3 + 40) )
  {
    v5 = *(_QWORD *)a1;
    v6 = (unsigned int *)(a1 + 56 + 8LL * v3);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
      HvpReleaseCellFlat(v5, (__int64)v6);
    else
      HvpReleaseCellPaged(v5, v6);
    *(_QWORD *)(a1 + 8LL * v3 + 40) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4LL * v3 + 32) = *(_DWORD *)(v7 + 4LL * v3 + 20);
  v8 = *(unsigned int *)(v7 + 4LL * v3 + 28);
  v9 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(v9, v8, (unsigned int *)(a1 + 56 + 8LL * v3));
  else
    CellFlat = (_WORD *)HvpGetCellPaged(v9, v8);
  *(_QWORD *)(a1 + 8LL * v3 + 40) = CellFlat;
  SubKeyByNumber = CmpDoFindSubKeyByNumber(*(_QWORD *)a1, CellFlat, *(_DWORD *)(a1 + 4LL * v3 + 24));
  *(_DWORD *)(a1 + 4LL * v3 + 72) = SubKeyByNumber;
  v12 = *(_QWORD *)a1;
  v13 = SubKeyByNumber;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v12, SubKeyByNumber, (unsigned int *)(a1 + 96 + 8LL * v3));
  else
    CellPaged = HvpGetCellPaged(v12, SubKeyByNumber);
  v15 = CellPaged;
  result = v3;
  *(_QWORD *)(a1 + 8LL * v3 + 80) = v15;
  *(_DWORD *)(a1 + 112) = v13;
  *(_QWORD *)(a1 + 120) = v15;
  return result;
}
