/*
 * XREFs of RtlpCreateLowFragHeap @ 0x18006CC20
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18006C604 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetLowFragHeapSize @ 0x18006CF3C (RtlpGetLowFragHeapSize.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18006CF94 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLowFragHeap @ 0x18006DA10 (RtlpInitializeLowFragHeap.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18009574C (RtlpLogHeapExtendEvent.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x1800DC2FC (RtlpInitializeLfhRandomDataArray.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

PVOID __fastcall RtlpCreateLowFragHeap(PVOID BaseAddress)
{
  unsigned int v2; // ebx
  ULONG Protect; // eax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r14
  ULONG HeapProtection; // eax
  __int64 v8; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  ULONG_PTR v12[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+38h] BYREF
  PVOID BaseAddressa; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0;
  v2 = 0;
  if ( (int)RtlpQueryPhysicalMemoryPolicy(&v13) >= 0 && v13 <= 10 )
    v2 = 3;
  RegionSize = RtlpGetLowFragHeapSize(BaseAddress, v2);
  BaseAddressa = 0LL;
  Protect = RtlpGetHeapProtection(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v4 = RtlpAffinityState[0];
  if ( (v2 & 1) != 0 )
    v4 = 1;
  v5 = (unsigned int)(v4 - 1);
  v6 = (unsigned int)v5;
  v12[0] = (48 * v5 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, v12, 0x1000u, HeapProtection) < 0 )
  {
    RegionSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v8, &BaseAddressa, &RegionSize, 0x8000LL);
    return 0LL;
  }
  v10 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v11 = 2147353472LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(
      (int)BaseAddress,
      (int)BaseAddressa,
      v12[0],
      16 * *((_QWORD *)BaseAddress + 24),
      (HANDLE)*(unsigned __int8 *)v10);
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, v12[0], 9LL);
  }
  RtlpInitializeLowFragHeap(BaseAddress, v2, BaseAddressa);
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 568LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 576LL) += v12[0];
  *((_QWORD *)BaseAddressa + 6) = (char *)BaseAddressa + RegionSize;
  *((_QWORD *)BaseAddressa + 5) = (char *)BaseAddressa + v12[0];
  *((_QWORD *)BaseAddressa + 4) = (char *)BaseAddressa + 48 * v6 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *((_DWORD *)BaseAddressa + 168) = v2;
  return BaseAddressa;
}
