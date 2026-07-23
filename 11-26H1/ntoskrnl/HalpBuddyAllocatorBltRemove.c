/*
 * XREFs of HalpBuddyAllocatorBltRemove @ 0x1405AE120
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140358FA0 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x1405AE350 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x1403594B4 (HalpBuddyAllocatorBltRemoveInternal.c)
 */

void __fastcall HalpBuddyAllocatorBltRemove(_QWORD *a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // r8

  v2 = (KSPIN_LOCK *)(a2 + 104);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  if ( (_QWORD *)*a1 != a1 )
    HalpBuddyAllocatorBltRemoveInternal(a1);
  KeReleaseSpinLock(v2, v4);
}
