/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1400EAB34
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x140037824 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x14004CB28 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiAllocateDmaPacket @ 0x1400E9AF0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiDiscardQueuePacket @ 0x1400EA710 (VidSchiDiscardQueuePacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400EA9F0 (VidSchiSendToExecutionQueueWithWait.c)
 *     ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400EBC00 (-VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmIsDmaBufferPrepatched@@YA_NPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400ECB0C (-VidMmIsDmaBufferPrepatched@@YA_NPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140128230 (-VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1)
{
  union _LARGE_INTEGER v1; // r15
  union _LARGE_INTEGER v2; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int HighPart; // r8d
  int v8; // eax
  int v9; // r12d
  union _LARGE_INTEGER *DmaPacket; // r13
  __int64 v11; // rax
  union _LARGE_INTEGER **v12; // rbx
  __int64 v13; // rax
  union _LARGE_INTEGER *v14; // rbx
  union _LARGE_INTEGER v15; // rbx
  __int64 v16; // rcx
  union _LARGE_INTEGER v17; // r8
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  bool v22; // cf
  int v23; // edx
  DWORD v24; // ecx
  UINT LowPart; // ecx
  __int64 v27; // rax
  UINT v28; // ecx
  UINT v29; // ecx
  UINT v30; // ecx
  UINT v31; // eax
  DWORD v32; // edx
  int v33; // eax
  ADAPTER_RENDER *v34; // rcx
  __int64 v35; // rax
  void (__fastcall *v36)(_QWORD); // rax
  struct _DXGKARG_PATCH v37; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v38; // [rsp+100h] [rbp+67h] BYREF
  __int64 v39; // [rsp+108h] [rbp+6Fh]
  union _LARGE_INTEGER v40; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER *v41; // [rsp+118h] [rbp+7Fh]

  v1 = a1[11];
  v2 = a1[36];
  v40.QuadPart = 0LL;
  v4 = *(_QWORD *)(v1.QuadPart + 104);
  v39 = *(_QWORD *)(v1.QuadPart + 96);
  v5 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(v5 + 3284) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v4 + 40))
    || *(_BYTE *)(v4 + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 208), 0, 0) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
      4LL,
      v5,
      (union _LARGE_INTEGER)v1.QuadPart,
      a1);
    WdLogGlobalForLineNumber = 2392;
    v9 = -1073741823;
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(v5 + 8);
  HighPart = a1[42].HighPart;
  v38 = 0;
  v8 = VidMmPrepareDmaBuffer(
         *(const struct VIDMM_GLOBAL **)(v6 + 768),
         (const struct VIDMM_DMA_BUFFER *)v2.QuadPart,
         HighPart,
         &v38,
         &v40);
  v9 = v8;
  if ( v8 < 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
      3LL,
      v5,
      (union _LARGE_INTEGER)v1.QuadPart,
      a1,
      v8);
    WdLogGlobalForLineNumber = 2424;
    VidSchMarkDeviceAsError(v4, 18);
LABEL_17:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
    return (unsigned int)v9;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v2.QuadPart + 128) + 40LL) )
    DmaPacket = *(union _LARGE_INTEGER **)(*(_QWORD *)(v2.QuadPart + 48) + 208LL);
  else
    DmaPacket = *(union _LARGE_INTEGER **)(v2.QuadPart + 64);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  v11 = v39;
  a1[6].HighPart = 7;
  v12 = *(union _LARGE_INTEGER ***)(v5 + 696);
  v41 = DmaPacket;
  v13 = *(unsigned __int16 *)(v11 + 4);
  if ( (unsigned int)v13 < *(_DWORD *)(v5 + 768) )
    v12 += v13;
  v14 = *v12;
  ++v14[6].QuadPart;
  v15 = v14[6];
  a1[15] = v15;
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v16 = *(_QWORD *)(v1.QuadPart + 56);
  if ( ((*(_DWORD *)(v16 + 224) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL) + 3072LL) & 1) == 0)
    && !VidMmIsDmaBufferPrepatched((const struct VIDMM_DMA_BUFFER *)v2.QuadPart)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 768LL) + 6984LL) & 1) != 0 )
  {
    LowPart = a1[41].LowPart;
    *(&v37.DmaBufferSegmentId + 1) = 0;
    *(&v37.DmaBufferSubmissionEndOffset + 1) = 0;
    *(&v37.DmaBufferPrivateDataSubmissionEndOffset + 1) = 0;
    *(&v37.AllocationListSize + 1) = 0;
    v37.hDevice = *(HANDLE *)(v1.QuadPart + 64);
    v37.DmaBufferSegmentId = v38;
    v37.DmaBufferPhysicalAddress = v40;
    v37.DmaBufferSize = *(_DWORD *)(v2.QuadPart + 36);
    v37.pDmaBufferPrivateData = *(void **)(v2.QuadPart + 120);
    v27 = *(_QWORD *)(v2.QuadPart + 128);
    v37.DmaBufferSubmissionStartOffset = LowPart;
    v37.DmaBufferSubmissionEndOffset = a1[41].HighPart + LowPart;
    v37.pDmaBuffer = DmaPacket;
    v28 = *(_DWORD *)(v27 + 80);
    v37.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v2.QuadPart + 104);
    v37.AllocationListSize = a1[42].HighPart;
    v37.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v2.QuadPart + 112);
    v37.PatchLocationListSize = *(_DWORD *)(v2.QuadPart + 44);
    LODWORD(v27) = a1[43].LowPart;
    v37.DmaBufferPrivateDataSize = v28;
    v29 = a1[44].LowPart;
    v37.PatchLocationListSubmissionStart = v27;
    LODWORD(v27) = a1[43].HighPart;
    v37.DmaBufferPrivateDataSubmissionStartOffset = v29;
    v30 = a1[44].HighPart + v29;
    v37.PatchLocationListSubmissionLength = v27;
    v37.DmaBufferPrivateDataSubmissionEndOffset = v30;
    v37.SubmissionFenceId = v15.LowPart;
    v31 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(v39 + 4));
    v32 = a1[9].LowPart;
    v37.EngineOrdinal = v31;
    if ( (*(_DWORD *)(v1.QuadPart + 112) & 2) != 0 || (v32 & 0x8000) != 0 )
      v33 = 8;
    else
      v33 = 0;
    v34 = *(ADAPTER_RENDER **)(v5 + 8);
    v37.Flags.Value = ((v32 & 0x20 | (v32 >> 1) & 0x40) >> 4) | v33;
    v9 = ADAPTER_RENDER::DdiPatch(v34, &v37);
    if ( v9 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        281LL,
        3LL,
        v5,
        (union _LARGE_INTEGER)v1.QuadPart,
        a1);
      WdLogGlobalForLineNumber = 916;
      goto LABEL_29;
    }
    VidMmFlushDmaBufferPendingCPUAccess((struct VIDMM_DMA_BUFFER *)v2.QuadPart);
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v39);
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 912353622;
  DmaPacket[6] = v1;
  DmaPacket[8] = v2;
  v17 = DmaPacket[7];
  DmaPacket[10].QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  DmaPacket[9].LowPart = 7;
  v18 = (*(_DWORD *)(v17.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v18;
  v19 = v18 | (*(_DWORD *)(v17.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v19;
  v20 = v19 | (*(_DWORD *)(v17.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v20;
  v21 = v20 | (4 * (*(_DWORD *)(v17.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v21;
  v22 = a1[16].LowPart != 0;
  DmaPacket[13] = v15;
  DmaPacket[11].LowPart = 0;
  v23 = v21 | (v22 ? 0x4000 : 0);
  DmaPacket[11].HighPart = v23;
  DmaPacket[12].LowPart = a1[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v41;
  DmaPacket[16].LowPart = v38;
  DmaPacket[17] = v40;
  DmaPacket[18].LowPart = a1[41].LowPart;
  DmaPacket[18].HighPart = a1[41].LowPart + a1[41].HighPart;
  DmaPacket[19].LowPart = a1[44].LowPart;
  DmaPacket[19].HighPart = a1[44].HighPart + a1[44].LowPart;
  DmaPacket[20].LowPart = a1[42].LowPart;
  DmaPacket[20].HighPart = a1[42].HighPart;
  DmaPacket[21].LowPart = a1[43].LowPart;
  DmaPacket[21].HighPart = a1[43].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v2.QuadPart + 152);
  DmaPacket[11].HighPart = v23 | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  v24 = a1[9].LowPart;
  if ( (v24 & 1) != 0 )
  {
LABEL_29:
    v35 = (unsigned int)a1[49].HighPart;
    if ( (_DWORD)v35 != -1 && (v24 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 8 * v35 + 3448) + 44488LL) != -1 )
      {
        v36 = *(void (__fastcall **)(_QWORD))(v5 + 3304);
        if ( v36 )
          v36(*(_QWORD *)(v5 + 3368));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v9;
}
