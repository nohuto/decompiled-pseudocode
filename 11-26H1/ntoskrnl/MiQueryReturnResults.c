/*
 * XREFs of MiQueryReturnResults @ 0x140920250
 * Callers:
 *     MiQueryAddressSpan @ 0x140304F70 (MiQueryAddressSpan.c)
 *     MiQueryImageExtensionInformation @ 0x1404E6410 (MiQueryImageExtensionInformation.c)
 *     MiQuerySecureBasicInfo @ 0x14091F660 (MiQuerySecureBasicInfo.c)
 *     MiQueryImageInfo @ 0x14091F6D4 (MiQueryImageInfo.c)
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     MiQueryBasicInfo @ 0x140AA3200 (MiQueryBasicInfo.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     MiQueryUpdateBytesWritten @ 0x1409202CC (MiQueryUpdateBytesWritten.c)
 *     MiQueryDetach @ 0x140920308 (MiQueryDetach.c)
 */

__int64 __fastcall MiQueryReturnResults(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rdx
  void *v4; // rcx
  size_t v5; // r8

  MiQueryDetach(a1);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v3 = *(void **)(a1 + 64);
    v4 = *(void **)(a1 + 8);
    v5 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(a1 + 32) )
      RtlCopyToUser(v4, v3, v5);
    else
      RtlCopyVolatileMemory(v4, v3, v5);
  }
  MiQueryUpdateBytesWritten(a1, v2);
  return 0LL;
}
