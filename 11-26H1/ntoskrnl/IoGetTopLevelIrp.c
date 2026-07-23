/*
 * XREFs of IoGetTopLevelIrp @ 0x1404595F0
 * Callers:
 *     FsRtlMdlReadDev @ 0x140790420 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140AAD560 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
