/*
 * XREFs of HalpBuddyAllocatorBltAdd @ 0x14035AD20
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140358FA0 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403594F0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14035AC00 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x1405AE350 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall HalpBuddyAllocatorBltAdd(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 **v7; // rdx

  _BitScanForward64(&v4, a1[7]);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v6 = *(_QWORD *)(a2 + 96) + 16LL * (unsigned int)(v4 - 12);
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *a1 = v6;
  a1[1] = (__int64)v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 104), v5);
}
