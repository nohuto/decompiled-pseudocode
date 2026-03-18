/*
 * XREFs of IoGetTopLevelIrp @ 0x1404611F0
 * Callers:
 *     FsRtlMdlReadDev @ 0x14078D8F0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14078DB20 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140AAF910 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
