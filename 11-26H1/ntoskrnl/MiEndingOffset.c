/*
 * XREFs of MiEndingOffset @ 0x14036CB30
 * Callers:
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiCanFileBeTruncatedInternal @ 0x1404ABAD4 (MiCanFileBeTruncatedInternal.c)
 *     MiFlushSection @ 0x1404ADA20 (MiFlushSection.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
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
