/*
 * XREFs of NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400EB6A0
 * Callers:
 *     NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E7C84 (NvmeAdapterDisconnectDeleteFabricControllerQueue.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhdq_EtwWriteTransfer @ 0x1400E374C (McTemplateK0qjzshhdq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400E3B48 (McTemplateK0qjzshhq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F9698 (NvmeControllerQueueIncrementProcessingCount.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void __fastcall NvmeAdapterNvmeDisconnectFabricControllerQueue(__int64 a1)
{
  LARGE_INTEGER v2; // rax
  __int64 v3; // r13
  LARGE_INTEGER v4; // rbx
  __int64 v5; // r15
  __int64 NvmeSrb; // rax
  char *v7; // rsi
  int v8; // edi
  unsigned int v9; // r8d
  unsigned int i; // ecx
  __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  const char *v16; // r10
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r10
  int v22; // [rsp+C8h] [rbp-70h]
  int v23; // [rsp+D8h] [rbp-60h]
  int v24; // [rsp+E8h] [rbp-50h]
  char v25; // [rsp+108h] [rbp-30h]
  union _LARGE_INTEGER v26; // [rsp+140h] [rbp+8h] BYREF

  v26.QuadPart = 0LL;
  if ( UseQPCTime )
    v2 = KeQueryPerformanceCounter(&v26);
  else
    v2.QuadPart = KeQueryUnbiasedInterruptTime();
  v3 = *(_QWORD *)(a1 + 88);
  v4 = v2;
  v5 = *(_QWORD *)(v3 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(v3, 0);
  v7 = (char *)NvmeSrb;
  if ( NvmeSrb )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
    {
      v9 = *(_DWORD *)(NvmeSrb + 56);
      if ( v9 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v11 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
          if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 < *(_DWORD *)(NvmeSrb + 16) )
          {
            v12 = NvmeSrb + v11;
            if ( *(_DWORD *)(NvmeSrb + v11) == 67 )
              goto LABEL_15;
          }
        }
      }
    }
    v12 = 0LL;
LABEL_15:
    memset_0((void *)(v12 + 16), 0, 0x40uLL);
    *(_BYTE *)(v12 + 16) = 127;
    *(_BYTE *)(v12 + 20) = 8;
    *(_BYTE *)(v12 + 80) = 2;
    *(_WORD *)(v12 + 106) = *(_WORD *)(a1 + 136);
    *(_DWORD *)(a1 + 120) = 6;
    if ( *(_WORD *)(a1 + 136) )
      NvmeControllerQueueIncrementProcessingCount(a1);
    v8 = NvmeAdapterProcessControllerQueueRequestSync(a1, (_DWORD)v7, v13, v14, 1, 0LL, 0LL, 0);
    if ( v8 < 0 || v7[3] != 1 || (*(_WORD *)(v12 + 86) & 0xFFE) != 0 )
    {
      if ( (byte_14017344A & 1) != 0 )
      {
        v15 = *(unsigned __int16 *)(v12 + 86);
        v16 = (const char *)&dword_140154ADC;
        if ( *(_QWORD *)(v3 + 752) )
          v16 = *(const char **)(v3 + 752);
        v25 = (unsigned __int16)v15 >> 1;
        LOWORD(v15) = (unsigned __int16)v15 >> 9;
        LOBYTE(v15) = v15 & 7;
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          v15,
          v3 + 841,
          v3 + 800,
          *(_DWORD *)(v5 + 56),
          v5 + 1048,
          *(const wchar_t **)(v5 + 1032),
          *(const char **)(v3 + 792),
          *(_WORD *)(v3 + 4),
          *(_WORD *)(a1 + 136),
          *(_BYTE *)(v3 + 744),
          v16,
          (const char *)(v3 + 800),
          (const char *)(v3 + 841),
          "Disconnect Command",
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          v22,
          byte_14015304C,
          v23,
          byte_14015304C,
          v24,
          v8,
          v7[3],
          v15,
          v25);
      }
      v8 = -1073741823;
    }
  }
  else
  {
    v8 = -1073741801;
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v8 < 0 )
  {
    if ( (byte_14017344A & 8) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
        v20 = PerformanceCounter.QuadPart - v4.QuadPart;
      else
        v20 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
      if ( UseQPCTime )
      {
        v21 = 0LL;
        if ( v26.QuadPart && v20 )
          v21 = 10000 * (1000 * (v20 % v26.QuadPart) % v26.QuadPart) / v26.QuadPart
              + 10000 * (1000 * (v20 % v26.QuadPart) / v26.QuadPart + 1000 * (v20 / v26.QuadPart));
      }
      else
      {
        v21 = v20;
      }
      McTemplateK0qjzshhdq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 88),
        v21 / 0xA,
        v5 + 1048,
        *(_DWORD *)(v5 + 56),
        v5 + 1048,
        *(const wchar_t **)(v5 + 1032),
        *(const char **)(v3 + 792),
        *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
        *(_WORD *)(a1 + 136),
        v8,
        v21 / 0xA);
    }
  }
  else if ( (byte_14017344A & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
      v18 = PerformanceCounter.QuadPart - v4.QuadPart;
    else
      v18 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      v19 = 0LL;
      if ( v26.QuadPart && v18 )
        v19 = 10000 * (1000 * (v18 % v26.QuadPart) % v26.QuadPart) / v26.QuadPart
            + 10000 * (1000 * (v18 % v26.QuadPart) / v26.QuadPart + 1000 * (v18 / v26.QuadPart));
    }
    else
    {
      v19 = v18;
    }
    McTemplateK0qjzshhq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 88),
      &EventNVMeoFDisconnectControllerQueueSuccess,
      v5 + 1048,
      *(_DWORD *)(v5 + 56),
      v5 + 1048,
      *(const wchar_t **)(v5 + 1032),
      *(const char **)(v3 + 792),
      *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
      *(_WORD *)(a1 + 136),
      v19 / 0xA);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
}
