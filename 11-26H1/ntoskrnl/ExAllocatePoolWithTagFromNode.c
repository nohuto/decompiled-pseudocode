/*
 * XREFs of ExAllocatePoolWithTagFromNode @ 0x140398280
 * Callers:
 *     CcWriteBehind @ 0x14038338C (CcWriteBehind.c)
 *     CcAsyncCopyRead @ 0x1403877D0 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x140387C88 (CcPostWorkQueueAsyncRead.c)
 *     CcInitializeNumaNodeForVolume @ 0x1403E4224 (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeQuickLWSThreadItem @ 0x1403E4630 (CcInitializeQuickLWSThreadItem.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1404CEA30 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializeAsyncLazywriteForNodeHelper @ 0x1404F5890 (CcInitializeAsyncLazywriteForNodeHelper.c)
 *     CcInitializePartition @ 0x1405B285C (CcInitializePartition.c)
 *     CcInitializeNumaNode @ 0x1405B33B0 (CcInitializeNumaNode.c)
 *     CcWriteBehindAsyncPreProcess @ 0x1405B3B34 (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140398700 (ExpAllocatePoolWithTagFromNode.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePoolWithTagFromNode(__int64 a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp-10h]
  int v7; // [rsp+4Ch] [rbp-Ch]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0;
  if ( (ExpPoolFlags & 8) == 0 )
    return ExpAllocatePoolWithTagFromNode(0, 66, a2, a3, a4);
  v5 = 1LL;
  v6 = 32;
  return VfHandlePoolAlloc(NonPagedPool, 0x42uLL, a2, a3, LowPoolPriority, (__int64)&v5, 1, retaddr);
}
