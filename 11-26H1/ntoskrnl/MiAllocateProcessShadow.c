/*
 * XREFs of MiAllocateProcessShadow @ 0x140ABFF40
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140ABF810 (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiInitializeSelfmap @ 0x14042A4F4 (MiInitializeSelfmap.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiMarkPfnTradable @ 0x1404CEFC8 (MiMarkPfnTradable.c)
 *     KeMakeUserDirectoryTableBase @ 0x1404D205C (KeMakeUserDirectoryTableBase.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
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
    v6 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, v4, v5);
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
