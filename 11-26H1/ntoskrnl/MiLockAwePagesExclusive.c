/*
 * XREFs of MiLockAwePagesExclusive @ 0x140701D48
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x140878ECC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408791F8 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140276830 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
