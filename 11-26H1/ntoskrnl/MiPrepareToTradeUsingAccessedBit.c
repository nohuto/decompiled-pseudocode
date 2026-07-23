/*
 * XREFs of MiPrepareToTradeUsingAccessedBit @ 0x140316C84
 * Callers:
 *     MiLockTargetPageForTrade @ 0x1402948C0 (MiLockTargetPageForTrade.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

unsigned __int64 __fastcall MiPrepareToTradeUsingAccessedBit(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *v2; // r9
  unsigned __int64 v3; // r10
  signed __int64 PteShadow; // rcx
  unsigned __int64 v5; // rbx

  v2 = (volatile signed __int64 *)a2;
  v3 = (__int64)(a2 << 25) >> 16;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    _InterlockedIncrement(&dword_140EF900C);
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (PteShadow & 0x200) != 0 || (PteShadow & 0x20) == 0 )
  {
    _InterlockedIncrement(&dword_140EF9010);
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  v5 = PteShadow & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x8000000) != 0 )
    _mm_lfence();
  if ( PteShadow == _InterlockedCompareExchange64(v2, v5, PteShadow) )
  {
    MiFlushSingleTbEntry(v3, 2LL);
  }
  else
  {
    _InterlockedIncrement(&dword_140EF9014);
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  return v5;
}
