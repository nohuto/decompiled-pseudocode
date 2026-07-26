/*
 * XREFs of ndisFreeSharedMemoryInternal @ 0x140022370
 * Callers:
 *     ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x1400212F0 (-ndisMQueuedFreeSharedHandler@@YAXPEAX@Z.c)
 *     NdisMFreeSharedMemory @ 0x140022170 (NdisMFreeSharedMemory.c)
 * Callees:
 *     ??1NdisStatisticalStopwatch@@QEAA@XZ @ 0x140022300 (--1NdisStatisticalStopwatch@@QEAA@XZ.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140022550 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFreeSharedMemoryInternal(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        char a3,
        ULONG_PTR a4,
        __int64 a5)
{
  struct _NDIS_SG_DMA_BLOCK *v5; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  _DMA_ADAPTER *DmaAdapterObject; // rbx
  int v12; // ecx
  void (__fastcall *FreeCommonBuffer)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8); // r12
  __int64 v14; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER v19; // [rsp+38h] [rbp-30h]

  v5 = *(struct _NDIS_SG_DMA_BLOCK **)(BugCheckParameter2 + 504);
  _InterlockedIncrement64(&qword_14011EF18);
  v18 = 16;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  DmaAdapterObject = v5->DmaAdapterObject;
  v19 = PerformanceCounter;
  if ( !DmaAdapterObject )
  {
    DmaAdapterObject = v5->SavedDmaAdapterObject;
    if ( !DmaAdapterObject )
    {
      NdisStatisticalStopwatch::~NdisStatisticalStopwatch((NdisStatisticalStopwatch *)&v18);
      return;
    }
    v5->DmaAdapterObject = DmaAdapterObject;
  }
  v12 = 72;
  if ( a2 >= 0x48 )
    v12 = a2;
  FreeCommonBuffer = DmaAdapterObject->DmaOperations->FreeCommonBuffer;
  v14 = ~(ndisDmaAlignment - 1) & (v12 + ndisDmaAlignment - 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
  if ( (unsigned __int64)(v14 + 8) < 0x1000 )
  {
    if ( *(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFF8) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3856),
        "Freeing shared memory not allocated");
      KeBugCheckEx(0x7Cu, 3uLL, BugCheckParameter2, a4 & 0xFFFFFFFFFFFFF000uLL, a4);
    }
    if ( (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFFC))-- == 1 )
    {
      LODWORD(a5) = a5 & 0xFFFFF000;
      ((void (__fastcall *)(_DMA_ADAPTER *, __int64, __int64, ULONG_PTR, char))FreeCommonBuffer)(
        DmaAdapterObject,
        4096LL,
        a5,
        a4 & 0xFFFFFFFFFFFFF000uLL,
        a3);
      v16 = 104LL;
      if ( a3 )
        v16 = 112LL;
      if ( (a4 & 0xFFFFFFFFFFFFF000uLL) == *(_QWORD *)(&v5->Header.Type + v16) )
      {
        v17 = 120LL;
        if ( a3 )
          v17 = 124LL;
        *(_NDIS_OBJECT_HEADER *)((char *)&v5->Header + v17) = 0;
        *(_QWORD *)(&v5->Header.Type + v16) = 0LL;
      }
    }
  }
  else
  {
    ((void (__fastcall *)(_DMA_ADAPTER *, _QWORD, __int64, ULONG_PTR, char))FreeCommonBuffer)(
      DmaAdapterObject,
      (unsigned int)v14,
      a5,
      a4,
      a3);
  }
  ndisDereferenceDmaAdapter(v5);
  ExReleaseResourceLite(&SharedMemoryResource);
  KeLeaveCriticalRegion();
  NdisStatisticalStopwatch::~NdisStatisticalStopwatch((NdisStatisticalStopwatch *)&v18);
}
