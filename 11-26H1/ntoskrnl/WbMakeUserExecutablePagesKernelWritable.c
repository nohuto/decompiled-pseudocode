/*
 * XREFs of WbMakeUserExecutablePagesKernelWritable @ 0x1409F0C30
 * Callers:
 *     sub_1409F05F8 @ 0x1409F05F8 (sub_1409F05F8.c)
 *     sub_1409F0918 @ 0x1409F0918 (sub_1409F0918.c)
 *     sub_1409F0C04 @ 0x1409F0C04 (sub_1409F0C04.c)
 *     sub_1409F1144 @ 0x1409F1144 (sub_1409F1144.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1404CCA58 (MmProbeAndLockPagesPrivate.c)
 */

__int64 __fastcall WbMakeUserExecutablePagesKernelWritable(void *a1, ULONG a2, PMDL *a3, _QWORD *a4)
{
  int v6; // esi
  unsigned int v7; // edi
  PMDL Mdl; // rax
  PMDL v9; // rbx
  PVOID MappedSystemVa; // rax

  v6 = 0;
  v7 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v9 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPagesPrivate((__int64)Mdl);
    v6 = 1;
    if ( (v9->MdlFlags & 5) != 0 )
      MappedSystemVa = v9->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( MappedSystemVa )
    {
      if ( a4 )
        *a4 = MappedSystemVa;
      if ( a3 )
      {
        *a3 = v9;
        v9 = 0LL;
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  if ( v9 )
  {
    if ( v6 )
      MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  return v7;
}
