/*
 * XREFs of PspReadIFEONodeOptions @ 0x14096635C
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14040B460 (KeIsEmptyGroupMask.c)
 *     RtlQueryImageFileKeyOption @ 0x1409665B0 (RtlQueryImageFileKeyOption.c)
 */

char __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2)
{
  int ImageFileKeyOption; // eax

  ImageFileKeyOption = RtlQueryImageFileKeyOption(a2, 4, 0LL);
  if ( ImageFileKeyOption >= 0 )
    LOBYTE(ImageFileKeyOption) = 0;
  return ImageFileKeyOption;
}
