/*
 * XREFs of NdisMAllocateSharedMemory @ 0x14007BD00
 * Callers:
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x140094380 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLq @ 0x140023120 (WPP_RECORDER_SF_qLq.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR v5; // rbp
  ULONG_PTR v7; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  PNDIS_PHYSICAL_ADDRESS v10; // r13
  LARGE_INTEGER v11; // rbx
  KIRQL CurrentIrql; // al
  ULONG_PTR BugCheckParameter4; // r15
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  __int64 v16; // r12
  unsigned int *v17; // r12
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, _QWORD); // r11
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  volatile signed __int64 *v24; // rcx
  int v25; // edx
  LARGE_INTEGER v26; // rax
  ULONG_PTR v27; // r14
  ULONG_PTR v28; // r14
  __int64 v29; // [rsp+30h] [rbp-38h]

  v5 = *((_QWORD *)MiniportAdapterHandle + 63);
  v7 = Length;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x1Cu,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  _InterlockedIncrement64(&qword_14011EEE0);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = PhysicalAddress;
  v11 = PerformanceCounter;
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 4) != 0 )
  {
    *VirtualAddress = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v7;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x1Du,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (char)MiniportAdapterHandle,
        v29);
    }
    if ( v11.QuadPart )
    {
      PhysicalAddress = 0LL;
LABEL_32:
      v26 = KeQueryPerformanceCounter((PLARGE_INTEGER)&PhysicalAddress);
      _InterlockedAdd64(&qword_14011EEE8, 1000000 * (v26.QuadPart - v11.QuadPart) / (unsigned __int64)PhysicalAddress);
      return;
    }
    return;
  }
  if ( !v5 )
    goto LABEL_9;
  PhysicalAddress = *(PNDIS_PHYSICAL_ADDRESS *)(v5 + 40);
  CurrentIrql = KeGetCurrentIrql();
  BugCheckParameter4 = CurrentIrql;
  if ( CurrentIrql >= 2u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Allocating Shared Memory at raised IRQL");
    KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v7, BugCheckParameter4);
  }
  v14 = 72;
  if ( (unsigned int)v7 >= 0x48 )
    v14 = v7;
  if ( v14 + ndisDmaAlignment + 8 < v14 )
  {
LABEL_9:
    *VirtualAddress = 0LL;
    if ( !v11.QuadPart )
      return;
    PhysicalAddress = 0LL;
    goto LABEL_32;
  }
  v15 = (v14 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
  v16 = 120LL;
  if ( Cached )
    v16 = 124LL;
  v17 = (unsigned int *)(v5 + v16);
  v18 = 128LL;
  v19 = *(__int64 (__fastcall **)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, _QWORD))(PhysicalAddress[1].QuadPart
                                                                                                  + 16);
  v20 = 104LL;
  if ( *v17 < v15 )
  {
    if ( (unsigned __int64)v15 + 8 >= 0x1000 )
    {
      *VirtualAddress = (PVOID)v19(PhysicalAddress, v15, v10, Cached);
      goto LABEL_42;
    }
    v21 = 128LL;
    if ( Cached )
      v21 = 136LL;
    v22 = v19(PhysicalAddress, 4096LL, (PNDIS_PHYSICAL_ADDRESS)(v5 + v21), Cached);
    v23 = 104LL;
    if ( Cached )
      v23 = 112LL;
    *(_QWORD *)(v23 + v5) = v22;
    if ( !v22 )
    {
      *v17 = 0;
      *VirtualAddress = 0LL;
LABEL_27:
      v24 = (volatile signed __int64 *)&unk_14011EEF8;
      goto LABEL_28;
    }
    *(_QWORD *)(v22 + 4088) = 1752384590LL;
    v18 = 128LL;
    *v17 = 4088;
    v20 = 104LL;
  }
  if ( Cached )
    v20 = 112LL;
  v27 = *(_QWORD *)(v20 + v5);
  if ( *(_DWORD *)(v27 + 4088) != 1752384590 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Overwrote past allocated shared memory");
    KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v27, v5);
  }
  ++*(_DWORD *)(v27 + 4092);
  v28 = v27 - *v17;
  if ( Cached )
    v18 = 136LL;
  *VirtualAddress = (PVOID)(v28 + 4088);
  v10->QuadPart = *(_QWORD *)(v18 + v5) + (((_DWORD)v28 + 4088) & 0xFFF);
  *v17 -= v15;
LABEL_42:
  if ( !*VirtualAddress )
    goto LABEL_27;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 88));
  v24 = (volatile signed __int64 *)&unk_14011EEF0;
LABEL_28:
  _InterlockedAdd64(v24, v15);
  ExReleaseResourceLite(&SharedMemoryResource);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v25,
      0x15u,
      0x1Fu,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle,
      v15,
      *VirtualAddress);
  KeLeaveCriticalRegion();
  if ( v11.QuadPart )
  {
    PhysicalAddress = 0LL;
    goto LABEL_32;
  }
}
