/*
 * XREFs of NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     NvmeAdapterAllocateContiguousIoResources @ 0x1400D30CC (NvmeAdapterAllocateContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400D51D4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400DBD38 (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     McTemplateK0qjzssshhdqsq_EtwWriteTransfer @ 0x1400E42F0 (McTemplateK0qjzssshhdqsq_EtwWriteTransfer.c)
 *     McTemplateK0qjzssshhq_EtwWriteTransfer @ 0x1400E44D4 (McTemplateK0qjzssshhq_EtwWriteTransfer.c)
 *     GetQueueCompletionAffinity @ 0x14011F158 (GetQueueCompletionAffinity.c)
 */

__int64 __fastcall NvmeAdapterCreateFabricControllerQueue(__int64 a1)
{
  __int64 v2; // rsi
  LARGE_INTEGER v3; // rax
  __int64 v4; // r14
  LARGE_INTEGER v5; // rbx
  __int64 v6; // r15
  __int64 NvmeSrb; // rax
  __int64 v8; // rbp
  int v9; // edi
  unsigned int v10; // r8d
  unsigned int i; // ecx
  __int64 v12; // rdx
  _DWORD *v13; // rdx
  __int64 Pool; // rax
  __int64 v15; // rax
  void *ContiguousIoResources; // rax
  __int64 v17; // rdx
  void *v18; // r12
  __int64 v19; // rdi
  void *v20; // r12
  int v21; // eax
  int v22; // eax
  bool v23; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r10
  int v27; // r11d
  const char *v28; // r12
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r10
  union _LARGE_INTEGER v32; // [rsp+C0h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+10h]

  v2 = 0LL;
  v32.QuadPart = 0LL;
  BaseAddress = 0LL;
  if ( UseQPCTime )
    v3 = KeQueryPerformanceCounter(&v32);
  else
    v3.QuadPart = KeQueryUnbiasedInterruptTime();
  v4 = *(_QWORD *)(a1 + 88);
  v5 = v3;
  v6 = *(_QWORD *)(v4 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(v4, 1);
  v8 = NvmeSrb;
  if ( !NvmeSrb )
    goto LABEL_5;
  if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
  {
    v10 = *(_DWORD *)(NvmeSrb + 56);
    if ( v10 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v12 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
        if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(NvmeSrb + 16) )
        {
          v13 = (_DWORD *)(NvmeSrb + v12);
          if ( *v13 == 68 )
            goto LABEL_15;
        }
      }
    }
  }
  v13 = 0LL;
LABEL_15:
  v13[4] = 2;
  Pool = RaidAllocatePool(64LL, 128LL, 1179541842LL, *(_QWORD *)(v6 + 8));
  v2 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 8388609;
    *(_QWORD *)(Pool + 8) = *(_QWORD *)(v4 + 560);
    *(_WORD *)(Pool + 4) = *(_WORD *)(a1 + 136);
    *(_WORD *)(Pool + 16) = *(_WORD *)(a1 + 124);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL) + 4LL) == 1 )
    {
      GetQueueCompletionAffinity(*(unsigned int *)(v4 + 32), Pool + 24);
      GetQueueCompletionAffinity(*(unsigned int *)(v4 + 32), v2 + 40);
    }
    v15 = 316LL;
    if ( *(_DWORD *)v6 != 1314275652 )
      v15 = 524LL;
    ContiguousIoResources = (void *)NvmeAdapterAllocateContiguousIoResources(
                                      524LL,
                                      ((*(_DWORD *)(v15 + v6) + 7) & 0xFFFFFFF8) + 1200);
    BaseAddress = ContiguousIoResources;
    v18 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v19 = (__int64)ContiguousIoResources + 48;
      RaidZeroXrb((__int64)ContiguousIoResources + 48, v17, 0, 0LL);
      *(_BYTE *)(v19 + 17) |= 0x20u;
      *(_QWORD *)(v19 + 184) = v2;
      *(_QWORD *)(v19 + 168) = v8;
      *(_QWORD *)(v19 + 216) = v6;
      *(_QWORD *)(v19 + 784) = v4;
      *(_QWORD *)(v8 + 96) = v19;
      *(_QWORD *)(v8 + 64) = v2;
      *(_DWORD *)(v8 + 60) = 128;
      *(_DWORD *)(v8 + 24) = 256;
      *(_DWORD *)(v8 + 40) = 10;
      RaSrbSetMiniportContext((int *)v6, v8, (__int64)v18 + 1200);
      v20 = (void *)(v19 + 664);
      KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
      *(_QWORD *)(v19 + 656) = RaidXrbSignalCompletion;
      *(_DWORD *)(a1 + 120) = 1;
      if ( (*(_DWORD *)(v6 + 144) & 0x1000LL) != 0 )
        v21 = NvmeAdapterRaiseIrqlAndExecuteXrb(v6, v19);
      else
        v21 = NvmeAdapterExecuteXrb(v6, v19);
      v9 = v21;
      if ( v21 >= 0
        && (KeWaitForSingleObject(v20, Executive, 0, 0, 0LL), v9 = RaidSrbStatusToNtStatus(*(_BYTE *)(v8 + 3)), v9 >= 0)
        && (v22 = *(unsigned __int16 *)(v2 + 16), (_WORD)v22) )
      {
        *(_DWORD *)(a1 + 124) = v22;
        *(_DWORD *)(a1 + 120) = 2;
      }
      else
      {
        v23 = *(_WORD *)(v2 + 16) == 0;
        *(_DWORD *)(a1 + 120) = 0;
        if ( v23 )
          v9 = -1073741670;
      }
    }
    else
    {
      v9 = -1073741801;
    }
  }
  else
  {
LABEL_5:
    v9 = -1073741801;
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v9 < 0 )
  {
    if ( (byte_14017344A & 8) != 0 )
    {
      if ( v2 )
      {
        v27 = *(_DWORD *)(v2 + 56);
        v28 = (const char *)(v2 + 60);
      }
      else
      {
        v28 = byte_14015304C;
        LOBYTE(v27) = 0;
      }
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v5.QuadPart )
        v29 = PerformanceCounter.QuadPart - v5.QuadPart;
      else
        v29 = PerformanceCounter.QuadPart - v5.QuadPart - 1;
      if ( UseQPCTime )
      {
        v30 = 0LL;
        if ( v32.QuadPart && v29 )
          v30 = 10000 * (1000 * (v29 % v32.QuadPart) % v32.QuadPart) / v32.QuadPart
              + 10000 * (1000 * (v29 % v32.QuadPart) / v32.QuadPart + 1000 * (v29 / v32.QuadPart));
      }
      else
      {
        v30 = v29;
      }
      McTemplateK0qjzssshhdqsq_EtwWriteTransfer(
        v4 + 760,
        v30 / 0xA,
        v6 + 1048,
        *(_DWORD *)(v6 + 56),
        v6 + 1048,
        *(const wchar_t **)(v6 + 1032),
        *(const char **)(v4 + 792),
        *(const char **)(v4 + 752),
        (const char *)(v4 + 760),
        *(_WORD *)(v4 + 4),
        *(_WORD *)(a1 + 136),
        v9,
        v27,
        v28,
        v30 / 0xA);
    }
  }
  else if ( (byte_14017344A & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v5.QuadPart )
      v25 = PerformanceCounter.QuadPart - v5.QuadPart;
    else
      v25 = PerformanceCounter.QuadPart - v5.QuadPart - 1;
    if ( UseQPCTime )
    {
      v26 = 0LL;
      if ( v32.QuadPart && v25 )
        v26 = 10000 * (1000 * (v25 % v32.QuadPart) % v32.QuadPart) / v32.QuadPart
            + 10000 * (1000 * (v25 % v32.QuadPart) / v32.QuadPart + 1000 * (v25 / v32.QuadPart));
    }
    else
    {
      v26 = v25;
    }
    McTemplateK0qjzssshhq_EtwWriteTransfer(
      v4 + 760,
      &EventNVMeoFCreateControllerQueueSuccess,
      v6 + 1048,
      *(_DWORD *)(v6 + 56),
      v6 + 1048,
      *(const wchar_t **)(v6 + 1032),
      *(const char **)(v4 + 792),
      *(const char **)(v4 + 752),
      (const char *)(v4 + 760),
      *(_WORD *)(v4 + 4),
      *(_WORD *)(a1 + 136),
      v26 / 0xA);
  }
  if ( BaseAddress )
    MmFreeContiguousMemory(BaseAddress);
  if ( v2 )
    ExFreePoolWithTag((PVOID)v2, 0x464E6152u);
  if ( v8 )
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  return (unsigned int)v9;
}
