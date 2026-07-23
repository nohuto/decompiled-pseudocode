/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x140A41064
 * Callers:
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvDuplicateCell @ 0x140A4115C (HvDuplicateCell.c)
 */

__int64 __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v6; // r8
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // rbp
  int v11; // edi
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  HvpGetCellContextInitialize(&v14);
  if ( *(_QWORD *)(a1 + 288) )
  {
    *v6 = 0;
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(unsigned int *)(a1 + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v8, (unsigned int *)&v14);
  else
    CellFlat = HvpGetCellPaged(v7, v8);
  v10 = CellFlat;
  if ( *(_DWORD *)(CellFlat + 36) )
  {
    v11 = HvDuplicateCell(*(_QWORD *)(a1 + 32), a1 + 284);
    if ( v11 < 0 )
      goto LABEL_8;
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(v10 + 36);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 284) = -1;
  }
  v11 = 0;
  *a3 = 1;
  *(_QWORD *)(a1 + 288) = a2;
LABEL_8:
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v12, (__int64)&v14);
  else
    HvpReleaseCellPaged(v12, (unsigned int *)&v14);
  return (unsigned int)v11;
}
