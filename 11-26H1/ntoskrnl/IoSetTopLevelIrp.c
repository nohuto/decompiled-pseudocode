/*
 * XREFs of IoSetTopLevelIrp @ 0x140447A40
 * Callers:
 *     FsRtlMdlReadDev @ 0x140790420 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x140A63F80 (MiShareExistingControlArea.c)
 *     FsRtlCopyRead @ 0x140AAD560 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
