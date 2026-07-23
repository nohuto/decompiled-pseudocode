/*
 * XREFs of ViFreeContextTable @ 0x140C2880C
 * Callers:
 *     VfInsertContext @ 0x1406447A0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140644940 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
