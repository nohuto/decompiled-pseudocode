/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x1403BBFA4
 * Callers:
 *     MiVadSupportsCombine @ 0x140307A0C (MiVadSupportsCombine.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405327D4 (MiIsVadEligibleForCommitRelease.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14095D738 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6B41C (MiProcessVaRangesInfoClass.c)
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
