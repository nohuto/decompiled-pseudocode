/*
 * XREFs of HvlCalculateLivedumpSize @ 0x1405C01C0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1405CF098 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1405C3618 (VslLiveDumpQuerySecondaryDataSize.c)
 */

__int64 __fastcall HvlCalculateLivedumpSize(__int64 a1, unsigned __int64 *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // r11d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx

  v6 = -1073741637;
  if ( (HvlpRootFlags & 2) != 0 && VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Flink && HvlpHypervisorStatsPage )
  {
    v7 = *(_QWORD *)(HvlpHypervisorStatsPage + 24);
    if ( (a1 & 2) == 0 )
    {
      v8 = *(_QWORD *)(HvlpHypervisorStatsPage + 88);
      if ( v7 <= v8 )
        return 3221225473LL;
      v7 -= v8;
    }
    v6 = 0;
    v10 = (v7
         + ((v7 + 767) >> 9)
         + ((((((v7 + 767) >> 9) + 511) >> 9) + 511) >> 9)
         + ((((v7 + 767) >> 9) + 511) >> 9)
         + 257) << 12;
  }
  else
  {
    v10 = 0LL;
  }
  *a2 = v10;
  if ( VslVsmEnabled )
  {
    return (unsigned int)VslLiveDumpQuerySecondaryDataSize(a1, a3, a4);
  }
  else
  {
    *a4 = (unsigned __int64)*(unsigned int *)&VslpReservedTransferLock.WaitBlockFill11[112] << 12;
    *a3 = 0LL;
  }
  return v6;
}
