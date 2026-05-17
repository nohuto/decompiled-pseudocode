/*
 * XREFs of RtlpCreateLowFragHeap @ 0x18007EE98
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x18007DF18 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180072298 (RtlpLogHeapExtendEvent.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1800D5C0C (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpInitializeLowFragHeap @ 0x1800DB7D0 (RtlpInitializeLowFragHeap.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x1800DF38C (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpGetLowFragHeapSize @ 0x1800F90BC (RtlpGetLowFragHeapSize.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int HeapProtection; // eax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  __int64 LowFragHeapSize; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0;
  v2 = 0;
  if ( (int)RtlpQueryPhysicalMemoryPolicy(&v13) >= 0 && v13 <= 10 )
    v2 = 3;
  LowFragHeapSize = RtlpGetLowFragHeapSize(a1, v2);
  v14 = 0LL;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &LowFragHeapSize, 0x2000, HeapProtection) < 0 )
    return 0LL;
  v4 = RtlpAffinityState[0];
  if ( (v2 & 1) != 0 )
    v4 = 1;
  v5 = (unsigned int)(v4 - 1);
  v6 = (unsigned int)v5;
  v12 = (48 * v5 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v7 = RtlpGetHeapProtection(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v12, 4096, v7) < 0 )
  {
    LowFragHeapSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v8, &v14, &LowFragHeapSize, 0x8000LL);
    return 0LL;
  }
  v10 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v11 = 2147353472LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v14, v12, 16LL * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v10);
    RtlpLogHeapCommit(a1, v14, v12, 9);
  }
  RtlpInitializeLowFragHeap(a1, v2, v14);
  *(_QWORD *)(*(_QWORD *)(v14 + 24) + 568LL) += LowFragHeapSize;
  *(_QWORD *)(*(_QWORD *)(v14 + 24) + 576LL) += v12;
  *(_QWORD *)(v14 + 48) = v14 + LowFragHeapSize;
  *(_QWORD *)(v14 + 40) = v14 + v12;
  *(_QWORD *)(v14 + 32) = v14 + 48 * (v6 + 69);
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *(_DWORD *)(v14 + 672) = v2;
  return v14;
}
