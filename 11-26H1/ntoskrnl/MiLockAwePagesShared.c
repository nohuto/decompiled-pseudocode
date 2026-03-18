/*
 * XREFs of MiLockAwePagesShared @ 0x1404F0690
 * Callers:
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiResizeAweBitMap @ 0x1408791F8 (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140879900 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B39FC0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140277AD0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
}
