/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x1403C5E14
 * Callers:
 *     MiVadSupportsCombine @ 0x1402E9A8C (MiVadSupportsCombine.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140534C74 (MiIsVadEligibleForCommitRelease.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx
  int v3; // r8d

  v1 = *(_DWORD *)(a1 + 48);
  v2 = 0;
  v3 = v1 & 0x80000;
  if ( (v1 & 0x1C) != 0 )
  {
    if ( (v3 || (*(_DWORD *)(a1 + 72) & 1) == 0) && (*(_DWORD *)(a1 + 48) & 0x1C) == 8 )
      return 1LL;
  }
  else if ( !v3 || (v1 & 0x200000) == 0 && (v1 & 0x60000u) < 0x40000 )
  {
    return 1LL;
  }
  LOBYTE(v2) = (*(_DWORD *)(a1 + 48) & 0x1C) == 16;
  return v2;
}
