/*
 * XREFs of MiStoreGetVadForAddress @ 0x14039699C
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x1403969DC (MmStoreDecommitVirtualMemory.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070FB60 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
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
