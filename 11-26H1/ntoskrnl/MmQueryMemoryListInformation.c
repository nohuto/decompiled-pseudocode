/*
 * XREFs of MmQueryMemoryListInformation @ 0x1403485A8
 * Callers:
 *     PfpMemoryListQuery @ 0x1403464E8 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x14034843C (EtwpLogMemInfo.c)
 *     PfSnCheckActionsNeeded @ 0x14096FED8 (PfSnCheckActionsNeeded.c)
 *     PfpVolumePrefetchMetadata @ 0x1409AE070 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1409AE4F8 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x140A4EC04 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFilesTrickle @ 0x140A507FC (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140A50B5C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPfnPrioRequest @ 0x140A5345C (PfpPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x1403486D4 (MiPartitionObjectToPartition.c)
 *     MiQueryMemoryListInformation @ 0x1403487B4 (MiQueryMemoryListInformation.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
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
