/*
 * XREFs of MiEndingOffset @ 0x14036E8D0
 * Callers:
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiCanFileBeTruncatedInternal @ 0x1404A5164 (MiCanFileBeTruncatedInternal.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEndingOffset(_DWORD *a1)
{
  unsigned __int64 v1; // rdx

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v1 = ((unsigned int)a1[9] + (unsigned __int64)(unsigned int)a1[10]) << 9;
  else
    v1 = ((unsigned int)a1[10] + ((unsigned int)a1[9] | ((unsigned __int64)(a1[8] & 0xFFC0) << 26))) << 12;
  return v1 + ((unsigned __int64)(unsigned int)a1[8] >> 20);
}
