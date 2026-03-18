/*
 * XREFs of ViFreeContextTable @ 0x140B748F8
 * Callers:
 *     VfInsertContext @ 0x140604820 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1406049C0 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
