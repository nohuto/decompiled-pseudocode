/*
 * XREFs of sub_1409ED914 @ 0x1409ED914
 * Callers:
 *     sub_1409EC6FC @ 0x1409EC6FC (sub_1409EC6FC.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409EC968 @ 0x1409EC968 (sub_1409EC968.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409ED914(__int64 a1, __int64 *a2)
{
  __int64 Pool2; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  signed int VirtualMemory; // esi

  Pool2 = ExAllocatePool2(0x100uLL);
  v4 = 0LL;
  v5 = Pool2;
  if ( Pool2 )
    v4 = Pool2;
  SddlpFree(0LL);
  VirtualMemory = v5 == 0 ? 0xC0000017 : 0;
  if ( v5 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0x10000LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 1080) = 0LL;
    *(_QWORD *)(v4 + 16) = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(v4 + 1072) = 0LL;
    memset_0((void *)(v4 + 44), 0, 0x400uLL);
    VirtualMemory = MmAllocateVirtualMemory(-1, v4, (int)v4 + 8, 4096, 32, 0LL, 0, 0, 0x20000000, 2, v4 + 1080);
    if ( VirtualMemory >= 0 )
    {
      if ( *(_QWORD *)(v4 + 1080) )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable(
                          *(void **)v4,
                          *(_DWORD *)(v4 + 8),
                          (PMDL *)(v4 + 24),
                          (_QWORD *)(v4 + 32));
        if ( VirtualMemory >= 0 && a2 )
        {
          *a2 = v4;
          v4 = 0LL;
        }
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  sub_1409EC968((PVOID *)v4);
  return (unsigned int)VirtualMemory;
}
