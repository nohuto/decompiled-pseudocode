/*
 * XREFs of HvpGetCellContextMove @ 0x1408E20A4
 * Callers:
 *     CmpMarkIndexDirtyInStorageType @ 0x1408C3EF4 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpRemoveSubKeyFromList @ 0x1408C41C0 (CmpRemoveSubKeyFromList.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1408DF8C0 (HvpGetCellContextReinitialize.c)
 *     HvpGetBinContextMove @ 0x1408E20D0 (HvpGetBinContextMove.c)
 */

double __fastcall HvpGetCellContextMove(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8

  *a1 = *a2;
  HvpGetBinContextMove(a1 + 1, a2 + 1, a2);
  return HvpGetCellContextReinitialize(v2);
}
