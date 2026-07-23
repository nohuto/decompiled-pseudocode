/*
 * XREFs of MiQueryReturnResults @ 0x140923994
 * Callers:
 *     MiQueryAddressSpan @ 0x1402E6FF0 (MiQueryAddressSpan.c)
 *     MiQueryImageExtensionInformation @ 0x1404DF9B0 (MiQueryImageExtensionInformation.c)
 *     MiQueryBasicInfo @ 0x140923490 (MiQueryBasicInfo.c)
 *     MiQuerySecureBasicInfo @ 0x140923550 (MiQuerySecureBasicInfo.c)
 *     MiQueryImageInfo @ 0x1409235C4 (MiQueryImageInfo.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     MiQueryUpdateBytesWritten @ 0x140923A10 (MiQueryUpdateBytesWritten.c)
 *     MiQueryDetach @ 0x140923A4C (MiQueryDetach.c)
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
