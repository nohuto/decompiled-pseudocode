/*
 * XREFs of NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C
 * Callers:
 *     NvmeAdapterCreateFabricControllerIoQueues @ 0x1400E694C (NvmeAdapterCreateFabricControllerIoQueues.c)
 * Callees:
 *     McTemplateK0qjzshhdqq_EtwWriteTransfer @ 0x1400E3880 (McTemplateK0qjzshhdqq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400E3B48 (McTemplateK0qjzshhq_EtwWriteTransfer.c)
 *     NvmeAdapterAllocateControllerQueueResources @ 0x1400E47BC (NvmeAdapterAllocateControllerQueueResources.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E7C84 (NvmeAdapterDisconnectDeleteFabricControllerQueue.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 */

__int64 __fastcall NvmeAdapterCreateConnectFabricControllerIoQueue(__int64 a1)
{
  unsigned __int64 v1; // rdi
  char v3; // r15
  LARGE_INTEGER v4; // rax
  __int64 v5; // r14
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r13
  int FabricControllerQueue; // esi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v10; // rdx
  LARGE_INTEGER v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  union _LARGE_INTEGER v17; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  v17.QuadPart = 0LL;
  if ( UseQPCTime )
    v4 = KeQueryPerformanceCounter(&v17);
  else
    v4.QuadPart = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 128);
  if ( (*(_DWORD *)(v5 + 136) & 0x1000LL) != 0 )
  {
    FabricControllerQueue = NvmeAdapterCreateFabricControllerQueue(a1);
    if ( FabricControllerQueue < 0 )
    {
      v3 = 1;
      goto LABEL_17;
    }
    FabricControllerQueue = NvmeAdapterAllocateControllerQueueResources(a1);
    if ( FabricControllerQueue < 0 )
    {
      v3 = 2;
      goto LABEL_17;
    }
  }
  else
  {
    FabricControllerQueue = NvmeAdapterTransportReconnectFabricControllerQueue(a1);
    if ( FabricControllerQueue < 0 )
    {
      v3 = 6;
      goto LABEL_17;
    }
  }
  FabricControllerQueue = NvmeAdapterNvmeConnectFabricControllerQueue(a1);
  if ( FabricControllerQueue >= 0 )
  {
    if ( (*(_BYTE *)(v5 + 136) & 0x40) != 0
      && (FabricControllerQueue = NvmeFabricControllerQueueAuthenticate(a1), FabricControllerQueue < 0) )
    {
      v3 = 4;
    }
    else
    {
      *(_DWORD *)(a1 + 120) = 5;
    }
  }
  else
  {
    v3 = 3;
  }
LABEL_17:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  v11 = PerformanceCounter;
  if ( FabricControllerQueue < 0 )
  {
    if ( (byte_14017344A & 4) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
        v14 = PerformanceCounter.QuadPart - v6.QuadPart;
      else
        v14 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
      if ( UseQPCTime )
      {
        if ( v17.QuadPart && v14 )
        {
          v15 = 1000 * (v14 % v17.QuadPart);
          v14 = v15 / v17.QuadPart + 1000 * (v14 / v17.QuadPart);
          v1 = 10000 * (v15 % v17.QuadPart) / v17.QuadPart + 10000 * v14;
        }
      }
      else
      {
        v1 = v14;
      }
      McTemplateK0qjzshhdqq_EtwWriteTransfer(
        v7 + 1048,
        &EventNVMeoFCreateConnectIoQueueFailure,
        v14,
        *(_DWORD *)(v7 + 56),
        v7 + 1048,
        *(const wchar_t **)(v7 + 1032),
        *(const char **)(v5 + 792),
        *(_WORD *)(v5 + 4),
        *(_WORD *)(a1 + 136),
        FabricControllerQueue,
        v3,
        v1 / 0xA);
    }
    if ( (*(_DWORD *)(v5 + 136) & 0x1000LL) != 0 )
      NvmeAdapterDisconnectDeleteFabricControllerQueue(a1);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))NvmeAdapterTransportDisconnectFabricControllerQueue)(
        a1,
        (LARGE_INTEGER)v10.QuadPart,
        (LARGE_INTEGER)v11.QuadPart);
  }
  else if ( (byte_14017344A & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
      v12 = PerformanceCounter.QuadPart - v6.QuadPart;
    else
      v12 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( v17.QuadPart && v12 )
      {
        v13 = 1000 * (v12 % v17.QuadPart);
        v12 = v13 / v17.QuadPart + 1000 * (v12 / v17.QuadPart);
        v1 = 10000 * (v13 % v17.QuadPart) / v17.QuadPart + 10000 * v12;
      }
    }
    else
    {
      v1 = v12;
    }
    McTemplateK0qjzshhq_EtwWriteTransfer(
      v7 + 1048,
      &EventNVMeoFCreateConnectIoQueueSuccess,
      v12,
      *(_DWORD *)(v7 + 56),
      v7 + 1048,
      *(const wchar_t **)(v7 + 1032),
      *(const char **)(v5 + 792),
      *(_WORD *)(v5 + 4),
      *(_WORD *)(a1 + 136),
      v1 / 0xA);
  }
  return (unsigned int)FabricControllerQueue;
}
