/*
 * XREFs of VfIrpReleaseCallDriverData @ 0x140C325E0
 * Callers:
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall VfIrpReleaseCallDriverData(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, Entry);
}
