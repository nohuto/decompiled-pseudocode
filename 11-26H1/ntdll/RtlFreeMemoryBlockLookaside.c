/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x18016E1A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlFreeMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  RtlpInterlockedPushEntrySList(*(__int128 **)(a2 - 48 + 32), (_QWORD *)(a2 - 48));
  return 0LL;
}
