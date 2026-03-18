/*
 * XREFs of VfIrpReleaseCallDriverData @ 0x140C2C5D0
 * Callers:
 *     IovCallDriver @ 0x1404F36FC (IovCallDriver.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall VfIrpReleaseCallDriverData(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, Entry);
}
