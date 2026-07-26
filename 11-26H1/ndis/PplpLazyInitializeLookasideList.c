/*
 * XREFs of PplpLazyInitializeLookasideList @ 0x14003AEF0
 * Callers:
 *     PplFreeToLookasideList @ 0x14003A720 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x14003A780 (PplAllocateFromLookasideList.c)
 *     NdisMAllocateNetBufferSGList @ 0x14003A7D0 (NdisMAllocateNetBufferSGList.c)
 *     NdisMFreeNetBufferSGList @ 0x14003ADC0 (NdisMFreeNetBufferSGList.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpLazyInitializeLookasideList(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  if ( !*(_BYTE *)(a2 + 112) )
  {
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)a2,
      PplpGenericAllocateFunction,
      PplpGenericFreeFunction,
      *(POOL_TYPE *)(a1 + 32),
      *(_DWORD *)(a1 + 4),
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 8),
      *(_WORD *)(a1 + 36));
    *(_BYTE *)(a2 + 112) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 104), v4);
}
