/*
 * XREFs of MiAllocateProcessShadow @ 0x140ABD950
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140963A54 (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiInitializeSelfmap @ 0x14040D5C8 (MiInitializeSelfmap.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiMarkPfnTradable @ 0x1404D5758 (MiMarkPfnTradable.c)
 *     KeMakeUserDirectoryTableBase @ 0x1404D888C (KeMakeUserDirectoryTableBase.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(unsigned __int64 a1)
{
  ULONG *ProcessPartition; // rsi
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdi
  __int64 TopLevelPage; // rbx
  __int64 v8; // rdx

  if ( (MiFlags & 0x1800000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG *)MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0LL) >= 0 )
  {
    v6 = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, 1u, v4, v5);
    if ( v6 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1);
      MiInitializeSelfmap(TopLevelPage);
      MiMarkPfnTradable(48 * TopLevelPage - 0x220000000000LL, v8);
      *(_QWORD *)(a1 + 344) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)v6 = MiMakeValidPte(0LL, TopLevelPage, -1610612732);
      *(_QWORD *)(a1 + 1288) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1LL);
  }
  return 3221225626LL;
}
