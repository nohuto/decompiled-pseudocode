/*
 * XREFs of HalpBuddyAllocatorBltRemove @ 0x1405AB910
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140357200 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x1405ABB40 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x140357714 (HalpBuddyAllocatorBltRemoveInternal.c)
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
