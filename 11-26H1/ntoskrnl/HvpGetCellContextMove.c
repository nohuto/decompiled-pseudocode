/*
 * XREFs of HvpGetCellContextMove @ 0x1408DBAE4
 * Callers:
 *     CmpMarkIndexDirtyInStorageType @ 0x1408BD924 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpRemoveSubKeyFromList @ 0x1408BDBF0 (CmpRemoveSubKeyFromList.c)
 *     HvAllocateCell @ 0x1408DB7FC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408DBB30 (HvpDoAllocateCell.c)
 *     HvReallocateCell @ 0x1408DCC94 (HvReallocateCell.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1408D9300 (HvpGetCellContextReinitialize.c)
 *     HvpGetBinContextMove @ 0x1408DBB10 (HvpGetBinContextMove.c)
 */

double __fastcall HvpGetCellContextMove(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8

  *a1 = *a2;
  HvpGetBinContextMove(a1 + 1, a2 + 1, a2);
  return HvpGetCellContextReinitialize(v2);
}
