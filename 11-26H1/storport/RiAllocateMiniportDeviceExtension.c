/*
 * XREFs of RiAllocateMiniportDeviceExtension @ 0x140183674
 * Callers:
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x140196AC0 (InitializeNvmeAdapter.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RiAllocateMiniportDeviceExtension(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  _QWORD *Pool; // rax

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 232) + 64LL);
  v3 = (unsigned int)(v2 + 16);
  if ( v3 < 0x10 )
    return 3221225495LL;
  if ( v3 < v2 )
    return 3221225495LL;
  Pool = (_QWORD *)RaidAllocatePool(
                     64LL,
                     v3,
                     (*(_DWORD *)(a1 + 248) & 1) != 0 ? 1447977298 : 1162699090,
                     *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  *(_QWORD *)(a1 + 240) = Pool;
  if ( !Pool )
    return 3221225495LL;
  *Pool = a1;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL) = a1;
  return 0LL;
}
