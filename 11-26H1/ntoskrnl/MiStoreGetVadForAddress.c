/*
 * XREFs of MiStoreGetVadForAddress @ 0x140394C1C
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x140394C5C (MmStoreDecommitVirtualMemory.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070AEB0 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 */

struct _LIST_ENTRY *__fastcall MiStoreGetVadForAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v4; // bl
  struct _LIST_ENTRY *Address; // rdi

  v4 = MiLockVadTree(0, a2, a3);
  Address = MiLocateAddress(a1);
  MiUnlockVadTree(0, v4);
  return Address;
}
