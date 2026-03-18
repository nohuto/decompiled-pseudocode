/*
 * XREFs of IoSetTopLevelIrp @ 0x14044F910
 * Callers:
 *     FsRtlMdlReadDev @ 0x14078D8F0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14078DB20 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140A562D8 (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x140A56A00 (MiShareExistingControlArea.c)
 *     FsRtlCopyRead @ 0x140AAF910 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
