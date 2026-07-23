/*
 * XREFs of IopAllocateAndLockMdl @ 0x140796C1C
 * Callers:
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x14079E10C (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopUnlockAndFreeMdl @ 0x14040F3F4 (IopUnlockAndFreeMdl.c)
 */

__int64 __fastcall IopAllocateAndLockMdl(void *a1, ULONG a2, char a3, __int64 a4, PMDL *a5, _QWORD *a6)
{
  PMDL Mdl; // rax
  PMDL v8; // rbx
  int v9; // edi
  PVOID MappedSystemVa; // rax

  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v8 = Mdl;
  if ( Mdl )
  {
    v9 = MmProbeAndLockPagesEx((__int64)Mdl, a3 & 1 | 2LL);
    if ( v9 < 0 )
    {
      IopUnlockAndFreeMdl(v8);
    }
    else
    {
      if ( a6 )
      {
        if ( (v8->MdlFlags & 5) != 0 )
          MappedSystemVa = v8->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u);
        *a6 = MappedSystemVa;
      }
      *a5 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
