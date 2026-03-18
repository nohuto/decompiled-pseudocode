/*
 * XREFs of MmGetFileObjectForSection @ 0x140AAE5D0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402C53E0 (FsRtlCreateSectionForDataScan.c)
 *     PspInitializeFullProcessImageName @ 0x140966D20 (PspInitializeFullProcessImageName.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 *     PsReferenceProcessFilePointer @ 0x140AAE560 (PsReferenceProcessFilePointer.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14038ED10 (MiReferenceControlAreaFileWithTag.c)
 */

void *__fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFileWithTag(v1, 0x746C6644u, 0);
}
