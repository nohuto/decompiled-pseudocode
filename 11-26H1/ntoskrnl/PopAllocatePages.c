/*
 * XREFs of PopAllocatePages @ 0x140C09D28
 * Callers:
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopBuildMemoryImageHeader @ 0x140BF9C6C (PopBuildMemoryImageHeader.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x1404FA004 (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *Mdl; // rax

  dword_140E674B0 += a1;
  v1 = 0LL;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl
    || (v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL
    || *(int *)(qword_140F0FBB0 + 204) < 0 )
  {
    *(_DWORD *)(qword_140F0FBB0 + 204) = -1073741670;
  }
  return v1;
}
