/*
 * XREFs of ViFreeContextTable @ 0x140C227FC
 * Callers:
 *     VfInsertContext @ 0x140640BC0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140640D60 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
