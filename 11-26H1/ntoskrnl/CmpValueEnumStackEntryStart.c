/*
 * XREFs of CmpValueEnumStackEntryStart @ 0x14048C8BC
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14048C7C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

void __fastcall CmpValueEnumStackEntryStart(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 CellFlat; // rax

  if ( (*(_BYTE *)(a3 + 2) & 0x40) == 0 && *(_DWORD *)(a3 + 36) )
  {
    *(_QWORD *)a1 = a2;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 36);
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a2, *(unsigned int *)(a3 + 40), a1 + 16);
    else
      CellFlat = HvpGetCellPaged(a2);
    *(_QWORD *)(a1 + 8) = CellFlat;
  }
}
