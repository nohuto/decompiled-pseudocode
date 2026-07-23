/*
 * XREFs of MiAdvanceFaultList @ 0x140371250
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 *     MiFillPageFileReadMdl @ 0x1403740C0 (MiFillPageFileReadMdl.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiComputeHardFaultCluster @ 0x14044FB00 (MiComputeHardFaultCluster.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  v1 = a1[3];
  v2 = a1[1] + 16 * v1;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_DWORD *)v2 & 0xFFF;
  if ( ++a1[4] == (unsigned __int64)(v4 + v3 + 4095) >> 12 )
  {
    v5 = a1[2];
    result = v1 + 1;
    a1[3] = v1 + 1;
    a1[4] = 0LL;
    if ( v1 + 1 < v5 && !*(_QWORD *)(v2 + 24) )
      a1[3] = v5;
  }
  return result;
}
