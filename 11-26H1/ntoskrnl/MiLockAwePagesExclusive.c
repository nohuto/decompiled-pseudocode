/*
 * XREFs of MiLockAwePagesExclusive @ 0x140706A18
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x14087F2AC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x14087F5D8 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140275DA0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
