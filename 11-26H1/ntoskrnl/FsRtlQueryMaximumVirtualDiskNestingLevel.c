/*
 * XREFs of FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x1404D0BD0
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1404D09E0 (FsRtlGetVirtualDiskNestingLevel.c)
 * Callees:
 *     FsRtlpGetMaxVirtualDiskNestingLevel @ 0x1405B7C40 (FsRtlpGetMaxVirtualDiskNestingLevel.c)
 */

ULONG FsRtlQueryMaximumVirtualDiskNestingLevel(void)
{
  ULONG result; // eax

  result = FsRtlVirtualDiskMaxTreeDepth;
  if ( FsRtlVirtualDiskMaxTreeDepth == -1 )
  {
    result = FsRtlpGetMaxVirtualDiskNestingLevel();
    FsRtlVirtualDiskMaxTreeDepth = result;
  }
  return result;
}
