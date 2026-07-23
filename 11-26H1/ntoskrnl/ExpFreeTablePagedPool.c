/*
 * XREFs of ExpFreeTablePagedPool @ 0x140908540
 * Callers:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1409BDB3C (ExpAllocateMidLevelTable.c)
 *     ExpFreeHandleTable @ 0x1409BE364 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1409BE498 (ExpFreeLowLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140A950FC (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR BugCheckParameter1, PVOID P, ULONG_PTR BugCheckParameter3)
{
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( BugCheckParameter1 )
    PsReturnProcessPagedPoolQuota(BugCheckParameter1, BugCheckParameter3);
}
