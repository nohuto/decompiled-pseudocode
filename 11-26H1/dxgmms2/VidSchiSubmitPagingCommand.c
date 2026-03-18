/*
 * XREFs of VidSchiSubmitPagingCommand @ 0x1400E8924
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x14004CB28 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiAllocateDmaPacket @ 0x1400E9AF0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiDiscardQueuePacket @ 0x1400EA710 (VidSchiDiscardQueuePacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400EA9F0 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchGetDriverPagingContext @ 0x14010A7F0 (VidSchGetDriverPagingContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSubmitPagingCommand(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 DmaPacket; // rax
  __int64 v7; // rcx
  LARGE_INTEGER *v8; // rbx
  LARGE_INTEGER **v9; // rax
  LARGE_INTEGER *v10; // rax
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // r14
  void *v13; // r12
  ADAPTER_RENDER *v14; // r13
  LARGE_INTEGER v15; // rcx
  LONG v16; // eax
  void (__fastcall *v18)(_QWORD); // rax
  unsigned int HighPart; // edx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rcx
  void *DriverPagingContext; // rax
  UINT v24; // edx
  UINT v25; // ecx
  void *v26; // rax
  UINT v27; // ecx
  __int64 v28; // r11
  UINT v29; // r10d
  int v30; // eax
  _DXGKARG_PATCH v31; // [rsp+38h] [rbp-49h] BYREF

  v1 = a1[11];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v3 + 40);
  if ( (*(_BYTE *)(v5 + 3284) & 1) == 0
    && !VidSchIsTDRPending(*(_QWORD *)(v3 + 40))
    && !*(_BYTE *)(v3 + 212)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 208), 0, 0) )
  {
    DmaPacket = VidSchiAllocateDmaPacket(v4);
    v7 = *(unsigned __int16 *)(v4 + 4);
    v8 = (LARGE_INTEGER *)DmaPacket;
    v9 = *(LARGE_INTEGER ***)(v5 + 696);
    if ( (unsigned int)v7 < *(_DWORD *)(v5 + 768) )
      v9 += v7;
    v10 = *v9;
    ++v10[6].QuadPart;
    v11 = v10[6];
    v8[13] = v11;
    a1[15] = v11;
    v8->LowPart = 912353622;
    v8[11].LowPart = 1;
    v8[10].QuadPart = MEMORY[0xFFFFF78000000320];
    v8[11].HighPart = 0;
    v8[9].LowPart = 7;
    v8[7].QuadPart = (LONGLONG)a1;
    v8[6] = v1;
    v8[11].HighPart = a1[16].LowPart != 0 ? 0x4000 : 0;
    *(_BYTE *)(v5 + 62) = 1;
    if ( *(_DWORD *)(v4 + 16520) != -1 )
    {
      v18 = *(void (__fastcall **)(_QWORD))(v5 + 3304);
      if ( v18 )
        v18(*(_QWORD *)(v5 + 3368));
    }
    *(_BYTE *)(v5 + 62) = 0;
    v8[11].HighPart |= 0x400u;
    v12 = a1[36];
    v8[8] = v12;
    if ( *(_DWORD *)(*(_QWORD *)(v12.QuadPart + 128) + 40LL) )
      v13 = *(void **)(*(_QWORD *)(v12.QuadPart + 48) + 208LL);
    else
      v13 = *(void **)(v12.QuadPart + 64);
    v14 = *(ADAPTER_RENDER **)(v5 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 3032LL) + 352LL * *(unsigned __int16 *)(v4 + 6) + 48) )
      goto LABEL_11;
    HighPart = a1[43].HighPart;
    *(&v31.DmaBufferSegmentId + 1) = 0;
    *(&v31.DmaBufferSubmissionEndOffset + 1) = 0;
    *(&v31.DmaBufferPrivateDataSubmissionEndOffset + 1) = 0;
    *(&v31.AllocationListSize + 1) = 0;
    v20 = VidSchiSchedulerNodeToDriverEngine(v5, HighPart);
    LOBYTE(v21) = a1[44].LowPart;
    DriverPagingContext = (void *)VidSchGetDriverPagingContext(v22, v20, v21);
    v24 = a1[42].HighPart;
    v31.DmaBufferSegmentId = a1[41].LowPart;
    v31.DmaBufferPhysicalAddress = a1[40];
    v31.DmaBufferSize = *(_DWORD *)(v12.QuadPart + 36);
    v25 = a1[41].HighPart;
    v31.hDevice = DriverPagingContext;
    v26 = *(void **)(v12.QuadPart + 120);
    v31.DmaBufferSubmissionStartOffset = v25;
    v27 = a1[42].LowPart + v25;
    v31.pDmaBufferPrivateData = v26;
    v31.DmaBufferSubmissionEndOffset = v27;
    v31.pDmaBuffer = v13;
    v31.DmaBufferPrivateDataSize = *(_DWORD *)(v28 + 80);
    v31.DmaBufferPrivateDataSubmissionStartOffset = v24;
    v31.DmaBufferPrivateDataSubmissionEndOffset = a1[43].LowPart + v24;
    v31.pAllocationList = 0LL;
    v31.AllocationListSize = 0;
    memset(&v31.pPatchLocationList, 0, 20);
    v31.SubmissionFenceId = v8[13].LowPart;
    v31.EngineOrdinal = v29;
    v31.Flags.Value = 1;
    v30 = ADAPTER_RENDER::DdiPatch(v14, &v31);
    if ( v30 >= 0 )
    {
LABEL_11:
      v8[15].QuadPart = (LONGLONG)v13;
      if ( *(_BYTE *)(352LL * *(unsigned __int16 *)(v4 + 6)
                    + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 3032LL)
                    + 48) )
      {
        v8[11].HighPart |= 0x2000u;
        v15 = *(LARGE_INTEGER *)(a1[36].QuadPart + 88);
        v8[22] = v15;
        v8[22].QuadPart = v15.QuadPart + (unsigned int)a1[41].HighPart;
        v8[18].HighPart = a1[42].LowPart;
        v8[24] = *(LARGE_INTEGER *)(a1[36].QuadPart + 120);
LABEL_13:
        v8[19].LowPart = a1[42].HighPart;
        v8[19].HighPart = a1[42].HighPart + a1[43].LowPart;
        v8[14] = *(LARGE_INTEGER *)(v12.QuadPart + 152);
        v8[12].LowPart = a1[14].LowPart;
        v16 = v8[11].HighPart;
        v8[25].QuadPart = 0LL;
        v8[11].HighPart = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)BYTE1(a1[35].LowPart)) & 1;
        return VidSchiSendToExecutionQueueWithWait(v8, 0LL);
      }
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        281LL,
        259LL,
        (LARGE_INTEGER)v12.QuadPart,
        &v31,
        v30);
      WdLogGlobalForLineNumber = 916;
    }
    v8[16].LowPart = a1[41].LowPart;
    v8[17] = a1[40];
    v8[18].LowPart = a1[41].HighPart;
    v8[18].HighPart = a1[42].LowPart + a1[41].HighPart;
    goto LABEL_13;
  }
  return VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
}
