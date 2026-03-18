/*
 * XREFs of MmAreMdlPagesLocked @ 0x140C43650
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x140C22E10 (VERIFY_BUFFER_LOCKED.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140C3D150 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 * Callees:
 *     MmIsMdlPageLocked @ 0x140C436B4 (MmIsMdlPageLocked.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(_DWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rdi

  v1 = a1 + 12;
  v2 = (unsigned __int64)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12];
  while ( (unsigned __int64)v1 < v2 )
  {
    if ( !(unsigned int)MmIsMdlPageLocked(*v1) )
      return 0LL;
    ++v1;
  }
  return 1LL;
}
