/*
 * XREFs of CmpQueryKeyData @ 0x1408C6E10
 * Callers:
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C6F10 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpQueryKeyData(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // edx
  ULONG_PTR v10; // rcx
  __int64 CellFlat; // rax
  unsigned int KeyDataFromNode; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15[6]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = -1;
  v15[1] = 0;
  if ( a2 == 4 )
    return CmpQueryKeyDataFromCache(a1, 4, a3, a4, a5, a6);
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, v9, v15);
  else
    CellFlat = HvpGetCellPaged(v10);
  if ( !CellFlat )
    return 3221225626LL;
  KeyDataFromNode = CmpQueryKeyDataFromNode(*(_QWORD *)(a1 + 32), a4, a5, a1, a6);
  v13 = *(_QWORD *)(a1 + 32);
  v14 = KeyDataFromNode;
  if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v13, v15);
  else
    HvpReleaseCellPaged(v13, v15);
  return v14;
}
