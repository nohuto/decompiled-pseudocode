/*
 * XREFs of NdisFreeSharedMemory @ 0x1400653E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??1NdisStatisticalStopwatch@@QEAA@XZ @ 0x140022300 (--1NdisStatisticalStopwatch@@QEAA@XZ.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140022550 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z @ 0x1400656C0 (--0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x140065800 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeSharedMemory(NDIS_HANDLE NdisHandle, NDIS_HANDLE AllocationHandle)
{
  struct _NDIS_SHARED_MEMORY_BLOCK *v2; // rbx
  NDIS_HANDLE v4; // rsi
  int v5; // edx
  char v6; // al
  unsigned int Flags; // ecx
  KIRQL v8; // r9
  _LIST_ENTRY *Flink; // rdx
  NDIS_HANDLE *p_Flink; // rcx
  _LIST_ENTRY *v11; // r8
  NDIS_HANDLE *v12; // rdx
  struct _NDIS_SG_DMA_BLOCK *v13; // rbp
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  struct _NDIS_SHARED_MEMORY_BLOCK **v15; // rdx
  NDIS_HANDLE *v16; // rcx
  int v17; // [rsp+20h] [rbp-128h]
  char v18; // [rsp+28h] [rbp-120h]
  int v19; // [rsp+30h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-110h]
  _BYTE v21[208]; // [rsp+40h] [rbp-108h] BYREF

  v2 = (struct _NDIS_SHARED_MEMORY_BLOCK *)AllocationHandle;
  v4 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (char)AllocationHandle;
    LOBYTE(AllocationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)AllocationHandle,
      21,
      71,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      v18);
  }
  _InterlockedIncrement64(&qword_14011EEC8);
  v19 = 6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  NdisFreeSharedMemoryTelemetry::NdisFreeSharedMemoryTelemetry((NdisFreeSharedMemoryTelemetry *)v21, v2);
  if ( NdisHandle )
  {
    v6 = *(_BYTE *)NdisHandle;
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      v4 = NdisHandle;
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( v6 != 17 )
    {
      if ( v6 != 1 )
        goto LABEL_4;
      NdisHandle = 0LL;
    }
    if ( v2 && NdisHandle )
    {
      Flags = v2->Flags;
      if ( (Flags & 0x3F) == 1 )
      {
        v13 = (struct _NDIS_SG_DMA_BLOCK *)*((_QWORD *)NdisHandle + 63);
        if ( v13 )
        {
          DmaAdapterObject = v13->DmaAdapterObject;
          if ( DmaAdapterObject )
          {
            LOBYTE(v17) = 1;
            ((void (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD, _DWORD))DmaAdapterObject->DmaOperations->FreeCommonBuffer)(
              DmaAdapterObject,
              v2->SharedMemoryParameters.Length,
              (_LARGE_INTEGER)v2->PhysicalAddress.QuadPart,
              v2->SharedMemoryParameters.VirtualAddress,
              v17);
            ndisDereferenceDmaAdapter(v13);
            goto LABEL_14;
          }
        }
      }
      else
      {
        if ( (Flags & 0x3F) == 2 )
        {
          MmFreeContiguousMemorySpecifyCache(
            v2->SharedMemoryParameters.VirtualAddress,
            v2->SharedMemoryParameters.Length,
            MmCached);
LABEL_14:
          _InterlockedAdd64(&qword_14011EED8, v2->SharedMemoryParameters.Length);
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisHandle + 12);
          *((_QWORD *)NdisHandle + 65) = KeGetCurrentThread();
          Flink = v2->MiniportLink.Flink;
          if ( (struct _NDIS_SHARED_MEMORY_BLOCK *)v2->MiniportLink.Flink->Blink == v2 )
          {
            p_Flink = (NDIS_HANDLE *)&v2->MiniportLink.Blink->Flink;
            if ( *p_Flink == v2 )
            {
              *p_Flink = Flink;
              Flink->Blink = (_LIST_ENTRY *)p_Flink;
              if ( v4 )
              {
                v15 = (struct _NDIS_SHARED_MEMORY_BLOCK **)v2->OpenLink.Flink;
                if ( v15[1] != (struct _NDIS_SHARED_MEMORY_BLOCK *)&v2->OpenLink )
                  goto LABEL_20;
                v16 = (NDIS_HANDLE *)&v2->OpenLink.Blink->Flink;
                if ( *v16 != &v2->OpenLink )
                  goto LABEL_20;
                *v16 = v15;
                v15[1] = (struct _NDIS_SHARED_MEMORY_BLOCK *)v16;
              }
              v11 = v2->QueueLink.Flink;
              if ( v11->Blink == &v2->QueueLink )
              {
                v12 = (NDIS_HANDLE *)&v2->QueueLink.Blink->Flink;
                if ( *v12 == &v2->QueueLink )
                {
                  *v12 = v11;
                  v11->Blink = (_LIST_ENTRY *)v12;
                  *((_QWORD *)NdisHandle + 65) = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)NdisHandle + 12, v8);
                  ExFreePoolWithTag(v2, 0);
                  goto LABEL_4;
                }
              }
            }
          }
LABEL_20:
          __fastfail(3u);
        }
        if ( (Flags & 4) != 0 )
        {
          if ( v4 )
            goto LABEL_14;
LABEL_34:
          v2->FreeSharedMemoryHandler(v2->SharedMemoryHandlerContext, v2->ProviderAllocationContext);
          goto LABEL_14;
        }
        if ( (Flags & 8) != 0 )
          goto LABEL_34;
      }
    }
  }
LABEL_4:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      21,
      72,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
  }
  NdisFreeSharedMemoryTelemetry::~NdisFreeSharedMemoryTelemetry((NdisFreeSharedMemoryTelemetry *)v21);
  NdisStatisticalStopwatch::~NdisStatisticalStopwatch((NdisStatisticalStopwatch *)&v19);
}
