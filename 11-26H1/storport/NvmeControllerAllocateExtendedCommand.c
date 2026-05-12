/*
 * XREFs of NvmeControllerAllocateExtendedCommand @ 0x140058910
 * Callers:
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerCreateAERExtendedCommandPool @ 0x1400F1C38 (NvmeControllerCreateAERExtendedCommandPool.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerCreateExtendedCommandPool @ 0x14011FB74 (NvmeControllerCreateExtendedCommandPool.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerFreeExtendedCommand @ 0x1400589E4 (NvmeControllerFreeExtendedCommand.c)
 *     NvmeAllocateContiguousMemoryWithPreferredNode @ 0x14008F590 (NvmeAllocateContiguousMemoryWithPreferredNode.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

_QWORD *__fastcall NvmeControllerAllocateExtendedCommand(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *Pool; // rbx
  __int64 v4; // rax
  void *v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  v7 = 0LL;
  Pool = (_QWORD *)RaidAllocatePool(72LL, 128LL, 1380147538LL, *(_QWORD *)(v1 + 8));
  if ( Pool
    && (_bittest64((const signed __int64 *)(a1 + 136), 0x20u)
     || (v4 = RaidAllocatePool(74LL, 584LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
         (Pool[7] = v4) != 0LL))
    && (v5 = (void *)NvmeAllocateContiguousMemoryWithPreferredNode(4272LL, *(_QWORD *)(a1 + 128), 0x80000000LL, &v7),
        (*Pool = v5) != 0LL) )
  {
    Pool[1] = v7;
    memset_0(v5, 0, 0x10B0uLL);
    return Pool;
  }
  else
  {
    NvmeControllerFreeExtendedCommand(a1, Pool);
    return 0LL;
  }
}
