/*
 * XREFs of PspReadIFEONodeOptions @ 0x140A78470
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140404550 (KeIsEmptyGroupMask.c)
 *     RtlQueryImageFileKeyOption @ 0x140A786C0 (RtlQueryImageFileKeyOption.c)
 */

char __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2)
{
  int ImageFileKeyOption; // eax

  ImageFileKeyOption = RtlQueryImageFileKeyOption(a2, 4, 0LL);
  if ( ImageFileKeyOption >= 0 )
    LOBYTE(ImageFileKeyOption) = 0;
  return ImageFileKeyOption;
}
