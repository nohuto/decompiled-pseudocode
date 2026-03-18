/*
 * XREFs of CmpBounceContextCleanup @ 0x14097DA80
 * Callers:
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 8);
  if ( v1 && v1 != *(void **)a1 && v1 != (void *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, v1);
    else
      CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 8));
  }
}
