/*
 * XREFs of ExpFreeTablePagedPool @ 0x14092CA10
 * Callers:
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x14092C1A0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ExpFreeHandleTable @ 0x1409588DC (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x140958A10 (ExpFreeLowLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140972494 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14097284C (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140A905AC (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR BugCheckParameter1, PVOID P, ULONG_PTR BugCheckParameter3)
{
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( BugCheckParameter1 )
    PsReturnProcessPagedPoolQuota(BugCheckParameter1, BugCheckParameter3);
}
