/*
 * XREFs of WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400
 * Callers:
 *     sub_1409ECDC8 @ 0x1409ECDC8 (sub_1409ECDC8.c)
 *     sub_1409ED0E8 @ 0x1409ED0E8 (sub_1409ED0E8.c)
 *     sub_1409ED3D4 @ 0x1409ED3D4 (sub_1409ED3D4.c)
 *     sub_1409ED914 @ 0x1409ED914 (sub_1409ED914.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1404C61F8 (MmProbeAndLockPagesPrivate.c)
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
