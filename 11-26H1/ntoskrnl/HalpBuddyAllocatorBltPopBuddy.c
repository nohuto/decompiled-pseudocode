/*
 * XREFs of HalpBuddyAllocatorBltPopBuddy @ 0x1403576A4
 * Callers:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x140358E60 (HalpBuddyAllocatorFreeLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x140357714 (HalpBuddyAllocatorBltRemoveInternal.c)
 */

__int64 __fastcall HalpBuddyAllocatorBltPopBuddy(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi

  v2 = (KSPIN_LOCK *)(a2 + 104);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v6 = *(_QWORD *)(a1 + 16);
  LOBYTE(v7) = v4;
  v8 = *(_QWORD *)(v6 + 24);
  if ( a1 == v8 )
    v8 = *(_QWORD *)(v6 + 32);
  if ( *(_BYTE *)(v8 + 72) || *(_QWORD *)v8 == v8 )
    v8 = 0LL;
  else
    HalpBuddyAllocatorBltRemoveInternal(v8, v5, v7);
  KeReleaseSpinLock(v2, v7);
  return v8;
}
