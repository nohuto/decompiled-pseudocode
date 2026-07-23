/*
 * XREFs of MmQueryMemoryListInformation @ 0x14034A628
 * Callers:
 *     PfpMemoryListQuery @ 0x140348568 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x14034A4BC (EtwpLogMemInfo.c)
 *     PfpVolumePrefetchMetadata @ 0x14097F124 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14097F5AC (PfpPrefetchDirectoryStream.c)
 *     PfSnCheckActionsNeeded @ 0x1409D21C0 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x140A57EF4 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFilesTrickle @ 0x140A59AEC (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140A59E4C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPfnPrioRequest @ 0x140A5C74C (PfpPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     MiQueryMemoryListInformation @ 0x14034A834 (MiQueryMemoryListInformation.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        char a4,
        _DWORD *a5)
{
  __int64 v9; // rax
  _BYTE Src[176]; // [rsp+40h] [rbp-E8h] BYREF

  memset_0(Src, 0, sizeof(Src));
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  else
  {
    v9 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v9 )
    {
      MiQueryMemoryListInformation(v9, Src);
      if ( a4 )
        RtlCopyToUser(a2, Src, 0xB0uLL);
      else
        RtlCopyVolatileMemory(a2, Src, 0xB0uLL);
      *a5 = 176;
      return 0LL;
    }
    else
    {
      return 3221226656LL;
    }
  }
}
