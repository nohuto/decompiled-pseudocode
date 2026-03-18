/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1403719B0
 * Callers:
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiLockVirtualMemoryVa @ 0x140318C10 (MiLockVirtualMemoryVa.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14033897C (MiGetPageForHeader.c)
 *     MmCopyMemory @ 0x140339450 (MmCopyMemory.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036B648 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiPrefetchRestOfCluster @ 0x1404CC6B0 (MiPrefetchRestOfCluster.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x140A4E9F0 (MmPrefetchVirtualAddresses.c)
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
