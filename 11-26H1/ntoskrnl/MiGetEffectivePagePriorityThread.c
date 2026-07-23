/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140373760
 * Callers:
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14033A9FC (MiGetPageForHeader.c)
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiPrefetchRestOfCluster @ 0x1404C5E4C (MiPrefetchRestOfCluster.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x140A57CE0 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // ecx

  v1 = *(_DWORD *)(a1 + 1448);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  result = (*(_DWORD *)(a1 + 1440) >> 12) & 7;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1092);
    if ( (unsigned int)result >= v4 )
      return v4;
  }
  return result;
}
