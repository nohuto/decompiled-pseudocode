/*
 * XREFs of NdisMFreeSharedMemory @ 0x140022170
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ??1NdisStatisticalStopwatch@@QEAA@XZ @ 0x140022300 (--1NdisStatisticalStopwatch@@QEAA@XZ.c)
 *     ndisFreeSharedMemoryInternal @ 0x140022370 (ndisFreeSharedMemoryInternal.c)
 *     WPP_RECORDER_SF_qLq @ 0x140023120 (WPP_RECORDER_SF_qLq.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  unsigned __int64 v6; // rbx
  int v9; // edx
  int v10; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-20h]

  v6 = Length;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      21,
      34,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      (char)VirtualAddress);
  _InterlockedIncrement64(&qword_14011EF00);
  v10 = 13;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _InterlockedAdd64(&qword_14011EF10, v6);
  if ( KeGetCurrentIrql() )
  {
    ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x42u);
    *((NDIS_PHYSICAL_ADDRESS *)VirtualAddress + 8) = PhysicalAddress;
    *((_QWORD *)VirtualAddress + 4) = MiniportAdapterHandle;
    *((_DWORD *)VirtualAddress + 10) = v6;
    *((_BYTE *)VirtualAddress + 44) = Cached;
    *((_QWORD *)VirtualAddress + 6) = VirtualAddress;
    *((_QWORD *)VirtualAddress + 2) = ndisMQueuedFreeSharedHandler;
    *((_QWORD *)VirtualAddress + 3) = VirtualAddress;
    *(_QWORD *)VirtualAddress = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)VirtualAddress, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisFreeSharedMemoryInternal((ULONG_PTR)MiniportAdapterHandle, PhysicalAddress.QuadPart);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      21,
      35,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle,
      v6,
      (char)VirtualAddress);
  NdisStatisticalStopwatch::~NdisStatisticalStopwatch((NdisStatisticalStopwatch *)&v10);
}
