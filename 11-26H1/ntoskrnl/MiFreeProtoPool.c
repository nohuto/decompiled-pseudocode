/*
 * XREFs of MiFreeProtoPool @ 0x140458808
 * Callers:
 *     MiDeletePerSessionProtos @ 0x1404586A0 (MiDeletePerSessionProtos.c)
 *     MiAllocateCombineBlock @ 0x14048F2C0 (MiAllocateCombineBlock.c)
 *     MiDeleteSubsectionPages @ 0x1404919FC (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiDeleteCachedSubsections @ 0x1404A6F5C (MiDeleteCachedSubsections.c)
 *     MiFreeCombinePool @ 0x1404ED200 (MiFreeCombinePool.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x140529CA0 (MiEntireSubsectionIsPurged.c)
 *     MiCreatePagingFileCleanup @ 0x140868838 (MiCreatePagingFileCleanup.c)
 *     MiBuildImageControlArea @ 0x140A551FC (MiBuildImageControlArea.c)
 *     MiCreateImageMapFreeResources @ 0x140A55C50 (MiCreateImageMapFreeResources.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140A8186C (MiDeletePageFileSectionNodes.c)
 *     MiAllocatePerSessionProtos @ 0x140B11CA8 (MiAllocatePerSessionProtos.c)
 *     MiFreeCloneDescriptor @ 0x140B44944 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiOkToDeleteProtos @ 0x14045884C (MiOkToDeleteProtos.c)
 *     MiInsertDanglingProtos @ 0x140458AC8 (MiInsertDanglingProtos.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeProtoPool(PVOID P, __int64 a2)
{
  if ( (unsigned int)MiOkToDeleteProtos((ULONG_PTR)P) )
    ExFreePoolWithTag(P, 0);
  else
    MiInsertDanglingProtos(P, a2);
}
