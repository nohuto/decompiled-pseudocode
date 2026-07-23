/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x140AEAFF0
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpCopyCell @ 0x1408E3124 (CmpCopyCell.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rsi
  _DWORD *Pool; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // ebx
  ULONG_PTR v13; // rdx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  Pool = (_DWORD *)CmpAllocatePool(0x100uLL);
  v6 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = 1;
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v7, &v14);
  else
    CellFlat = HvpGetCellPaged(v4, v7);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v11 = -1073741670;
LABEL_17:
    v13 = (unsigned int)v6[2];
    if ( (_DWORD)v13 != -1 )
      HvFreeCell(v4, v13);
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    return (unsigned int)v11;
  }
  v6[1] = 0;
  v6[2] = -1;
  v10 = *(_DWORD *)(CellFlat + 36);
  if ( !v10
    || (v6[1] = v10,
        v11 = CmpCopyCell(v4, *(unsigned int *)(CellFlat + 40), v4, *(_DWORD *)(CellFlat + 40) >> 31, v6 + 2),
        v11 >= 0)
    && (v11 = HvpMarkCellDirty(v4, *(_DWORD *)(v9 + 40), 0), v11 >= 0) )
  {
    *a2 = v6;
    v11 = 0;
    v6 = 0LL;
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, (__int64)&v14);
  else
    HvpReleaseCellPaged(v4, &v14);
  if ( v6 )
    goto LABEL_17;
  return (unsigned int)v11;
}
