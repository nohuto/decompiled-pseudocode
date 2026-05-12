/*
 * XREFs of NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38
 * Callers:
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E7C84 (NvmeAdapterDisconnectDeleteFabricControllerQueue.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     NvmeAdapterAllocateContiguousIoResources @ 0x1400D30CC (NvmeAdapterAllocateContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400D51D4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400DBD38 (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     McTemplateK0qjzshhdqsq_EtwWriteTransfer @ 0x1400E39C4 (McTemplateK0qjzshhdqsq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400E3B48 (McTemplateK0qjzshhq_EtwWriteTransfer.c)
 */

__int64 __fastcall NvmeAdapterTransportDisconnectFabricControllerQueue(__int64 a1)
{
  char *v1; // r14
  void *v2; // r12
  LARGE_INTEGER v4; // rax
  __int64 v5; // r15
  LARGE_INTEGER v6; // rbx
  __int64 v7; // rbp
  __int64 NvmeSrb; // rax
  __int64 v9; // rsi
  int v10; // edi
  unsigned int v11; // r8d
  __int64 i; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rdx
  __int64 Pool; // rax
  __int64 v16; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v22; // r8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  int v26; // r11d
  char *v27; // rax
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r9
  union _LARGE_INTEGER v32; // [rsp+B0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+10h]

  v1 = 0LL;
  v2 = 0LL;
  v32.QuadPart = 0LL;
  if ( UseQPCTime )
    v4 = KeQueryPerformanceCounter(&v32);
  else
    v4.QuadPart = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v4;
  v7 = *(_QWORD *)(v5 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(v5, 1);
  v9 = NvmeSrb;
  if ( !NvmeSrb )
    goto LABEL_5;
  if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
  {
    v11 = *(_DWORD *)(NvmeSrb + 56);
    if ( v11 )
    {
      for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
      {
        v13 = *(unsigned int *)(NvmeSrb + 4 * i + 120);
        if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(NvmeSrb + 16) )
        {
          v14 = (_DWORD *)(NvmeSrb + v13);
          if ( *v14 == 68 )
            goto LABEL_15;
        }
      }
    }
  }
  v14 = 0LL;
LABEL_15:
  v14[4] = 5;
  Pool = RaidAllocatePool(64LL, 88LL, 1179541842LL, *(_QWORD *)(v7 + 8));
  v1 = (char *)Pool;
  if ( !Pool )
    goto LABEL_5;
  *(_DWORD *)Pool = 5767169;
  *(_QWORD *)(Pool + 8) = *(_QWORD *)(v5 + 560);
  *(_WORD *)(Pool + 4) = *(_WORD *)(a1 + 136);
  v16 = 316LL;
  if ( *(_DWORD *)v7 != 1314275652 )
    v16 = 524LL;
  ContiguousIoResources = NvmeAdapterAllocateContiguousIoResources(
                            524LL,
                            ((*(_DWORD *)(v16 + v7) + 7) & 0xFFFFFFF8) + 1200);
  v2 = (void *)ContiguousIoResources;
  if ( ContiguousIoResources )
  {
    v19 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v18, 0, 0LL);
    *(_BYTE *)(v19 + 17) |= 0x20u;
    *(_QWORD *)(v19 + 184) = v1;
    *(_QWORD *)(v19 + 168) = v9;
    *(_QWORD *)(v19 + 216) = v7;
    *(_QWORD *)(v19 + 784) = v5;
    *(_QWORD *)(v9 + 96) = v19;
    *(_QWORD *)(v9 + 64) = v1;
    *(_DWORD *)(v9 + 60) = 88;
    *(_DWORD *)(v9 + 24) = 256;
    *(_DWORD *)(v9 + 40) = 10;
    RaSrbSetMiniportContext((int *)v7, v9, (__int64)v2 + 1200);
    Object = (PVOID)(v19 + 664);
    KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
    *(_QWORD *)(v19 + 656) = RaidXrbSignalCompletion;
    *(_DWORD *)(a1 + 120) = 6;
    if ( (*(_DWORD *)(v7 + 144) & 0x1000LL) != 0 )
      v20 = NvmeAdapterRaiseIrqlAndExecuteXrb(v7, v19);
    else
      v20 = NvmeAdapterExecuteXrb(v7, v19);
    v10 = v20;
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      v10 = RaidSrbStatusToNtStatus(*(_BYTE *)(v9 + 3));
    }
    *(_DWORD *)(a1 + 120) = 2;
  }
  else
  {
LABEL_5:
    v10 = -1073741801;
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  v22 = PerformanceCounter;
  if ( v10 < 0 )
  {
    if ( (byte_14017344A & 8) != 0 )
    {
      if ( v1 )
      {
        v26 = *((_DWORD *)v1 + 4);
        v27 = v1 + 20;
      }
      else
      {
        v27 = byte_14015304C;
        LOBYTE(v26) = 0;
      }
      Object = v27;
      if ( v22.QuadPart <= 0 || v22.QuadPart >= v6.QuadPart )
        v28 = v22.QuadPart - v6.QuadPart;
      else
        v28 = v22.QuadPart - v6.QuadPart - 1;
      if ( UseQPCTime )
      {
        v29 = 0LL;
        if ( v32.QuadPart && v28 )
        {
          v30 = 1000 * (v28 % v32.QuadPart);
          v28 = v30 / v32.QuadPart + 1000 * (v28 / v32.QuadPart);
          v29 = 10000 * (v30 % v32.QuadPart) / v32.QuadPart + 10000 * v28;
        }
      }
      else
      {
        v29 = v28;
      }
      McTemplateK0qjzshhdqsq_EtwWriteTransfer(
        v7 + 1048,
        &EventNVMeoFDisconnectControllerQueueTransportFailure,
        v28,
        *(_DWORD *)(v7 + 56),
        v7 + 1048,
        *(const wchar_t **)(v7 + 1032),
        *(const char **)(v5 + 792),
        *(_WORD *)(v5 + 4),
        *(_WORD *)(a1 + 136),
        v10,
        v26,
        (const char *)Object,
        v29 / 0xA);
    }
  }
  else if ( (byte_14017344A & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v6.QuadPart )
      v23 = PerformanceCounter.QuadPart - v6.QuadPart;
    else
      v23 = PerformanceCounter.QuadPart - v6.QuadPart - 1;
    if ( UseQPCTime )
    {
      v24 = 0LL;
      if ( v32.QuadPart && v23 )
      {
        v25 = 1000 * (v23 % v32.QuadPart);
        v23 = v25 / v32.QuadPart + 1000 * (v23 / v32.QuadPart);
        v24 = 10000 * (v25 % v32.QuadPart) / v32.QuadPart + 10000 * v23;
      }
    }
    else
    {
      v24 = v23;
    }
    McTemplateK0qjzshhq_EtwWriteTransfer(
      v7 + 1048,
      &EventNVMeoFDisconnectControllerQueueTransportSuccess,
      v23,
      *(_DWORD *)(v7 + 56),
      v7 + 1048,
      *(const wchar_t **)(v7 + 1032),
      *(const char **)(v5 + 792),
      *(_WORD *)(v5 + 4),
      *(_WORD *)(a1 + 136),
      v24 / 0xA);
  }
  if ( v2 )
    MmFreeContiguousMemory(v2);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x464E6152u);
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0x72536152u);
  return (unsigned int)v10;
}
