/*
 * XREFs of WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C
 * Callers:
 *     sub_1409F05F8 @ 0x1409F05F8 (sub_1409F05F8.c)
 *     sub_1409F0918 @ 0x1409F0918 (sub_1409F0918.c)
 *     sub_1409F0C04 @ 0x1409F0C04 (sub_1409F0C04.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmProbeAndLockPages @ 0x14039FC20 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     ZwProtectVirtualMemory @ 0x140723DF0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall WbMakeUserDataPagesKernelWritable(PVOID VirtualAddress, ULONG Length, struct _MDL **a3, _QWORD *a4)
{
  struct _MDL *v8; // rbx
  int v9; // esi
  int v10; // edi
  struct _MDL *Mdl; // rax
  PVOID MappedSystemVa; // rax
  _QWORD v14[3]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0LL;
  v9 = 0;
  v14[0] = VirtualAddress;
  v10 = ZwProtectVirtualMemory(-1LL, (__int64)v14);
  if ( v10 >= 0 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v8 = Mdl;
    if ( Mdl )
    {
      v9 = 1;
      MmProbeAndLockPages(Mdl, 1, IoModifyAccess);
      if ( (v8->MdlFlags & 5) != 0 )
        MappedSystemVa = v8->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
      v14[2] = MappedSystemVa;
      if ( MappedSystemVa )
      {
        if ( a4 )
          *a4 = MappedSystemVa;
        if ( a3 )
        {
          *a3 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        v10 = -1073741801;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( v8 )
  {
    if ( v9 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  return (unsigned int)v10;
}
