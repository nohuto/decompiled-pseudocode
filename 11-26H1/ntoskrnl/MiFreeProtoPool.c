/*
 * XREFs of MiFreeProtoPool @ 0x140450078
 * Callers:
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 *     MiAllocateCombineBlock @ 0x140488D08 (MiAllocateCombineBlock.c)
 *     MiDeleteSubsectionPages @ 0x14048B54C (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 *     MiFreeCombinePool @ 0x1404E67E0 (MiFreeCombinePool.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 *     MiCreatePagingFileCleanup @ 0x14086EC18 (MiCreatePagingFileCleanup.c)
 *     MiBuildImageControlArea @ 0x140A6279C (MiBuildImageControlArea.c)
 *     MiCreateImageMapFreeResources @ 0x140A631D8 (MiCreateImageMapFreeResources.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140A876DC (MiDeletePageFileSectionNodes.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 *     MiFreeCloneDescriptor @ 0x140B46704 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiOkToDeleteProtos @ 0x1404500BC (MiOkToDeleteProtos.c)
 *     MiInsertDanglingProtos @ 0x140450338 (MiInsertDanglingProtos.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeProtoPool(PVOID P, __int64 a2)
{
  if ( (unsigned int)MiOkToDeleteProtos((ULONG_PTR)P) )
    ExFreePoolWithTag(P, 0);
  else
    MiInsertDanglingProtos(P, a2);
}
