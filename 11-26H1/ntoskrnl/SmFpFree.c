/*
 * XREFs of SmFpFree @ 0x140280590
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     SmKmUnlockMdl @ 0x14040060C (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404FB7F4 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpFree(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  struct _MDL *v7; // rsi

  v4 = (unsigned int *)a4;
  v7 = (struct _MDL *)a4;
  if ( a2 < 5 )
    v7 = 0LL;
  else
    v4 = *(unsigned int **)(a4 + 24);
  if ( *(_QWORD *)(a1 + 112) == a3 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)a1) )
  {
    if ( a2 >= 5 )
      MmUnmapReservedMapping(v4, 0x6D526D73u, v7);
    if ( !*(_BYTE *)(a1 + 94) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 112), 0LL);
      KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    }
  }
  else if ( a2 < 5 )
  {
    if ( a2 == 2 )
    {
      SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), v4[10], 3LL, 1LL);
      ExFreePoolWithTag(v4, 0);
    }
    else if ( a2 == 3 )
    {
      SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), (unsigned __int64)*(unsigned __int16 *)(a1 + 102) << 12, 1LL, 1LL);
    }
    else
    {
      ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    MmUnmapLockedPages(v4, v7);
  }
}
