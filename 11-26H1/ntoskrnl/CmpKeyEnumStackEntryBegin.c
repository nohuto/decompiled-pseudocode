/*
 * XREFs of CmpKeyEnumStackEntryBegin @ 0x140944570
 * Callers:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140943F10 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpDoFindSubKeyByNumber @ 0x140945110 (CmpDoFindSubKeyByNumber.c)
 *     CmpCompareKeysByName @ 0x140A50214 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryBegin(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // r8
  ULONG_PTR v6; // rcx
  __int64 v7; // rdx
  __int64 CellFlat; // rax
  __int64 *v9; // rsi
  unsigned int *v10; // rdi
  __int64 result; // rax
  unsigned int *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rdx
  ULONG_PTR v18; // rcx
  __int64 CellPaged; // rax
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx

  *a1 = *(_QWORD *)a2;
  v4 = (unsigned int *)(a1 + 2);
  v6 = *(_QWORD *)a2;
  v7 = *(unsigned int *)(a2 + 8);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, v4);
  else
    CellFlat = HvpGetCellPaged(v6, v7);
  a1[1] = CellFlat;
  v9 = a1 + 10;
  v10 = (unsigned int *)(a1 + 3);
  result = -4LL - (_QWORD)a1;
  v12 = (unsigned int *)(a1 + 12);
  v13 = 4LL - (_QWORD)a1;
  v14 = 2LL;
  do
  {
    v15 = *(unsigned int *)((char *)v10 + result + a1[1]);
    v10[2] = v15;
    if ( a3 )
      v16 = *(unsigned int *)((char *)v10 + a3 - (_QWORD)a1 - 8);
    else
      v16 = 0;
    *v10 = v16;
    if ( v15 > v16 )
    {
      v17 = *(unsigned int *)((char *)v10 + v13 + a1[1]);
      v18 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v18, v17, v12 - 10);
      else
        CellPaged = HvpGetCellPaged(v18, v17);
      *(v9 - 5) = CellPaged;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1);
      v10[12] = SubKeyByNumber;
      v21 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        v22 = HvpGetCellFlat(v21, SubKeyByNumber, v12);
      else
        v22 = HvpGetCellPaged(v21, SubKeyByNumber);
      *v9 = v22;
      v23 = a1[15];
      if ( !v23 || (int)CmpCompareKeysByName(v22, v23) < 0 )
      {
        a1[15] = *v9;
        *((_DWORD *)a1 + 28) = v10[12];
      }
      v13 = 4LL - (_QWORD)a1;
    }
    result = -4LL - (_QWORD)a1;
    v12 += 2;
    ++v9;
    ++v10;
    --v14;
  }
  while ( v14 );
  return result;
}
