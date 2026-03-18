/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590
 * Callers:
 *     ?MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0514 (-MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1400A2228 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1400A25F0 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CDBD4 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEBU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400D5DA0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z @ 0x1400D76D0 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z @ 0x1400D80D8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8B94 (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z @ 0x1400D9190 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E6514 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1401267F0 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     LogPagingOperation @ 0x1400D6B20 (LogPagingOperation.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        unsigned __int64 *a7,
        void *a8)
{
  __int64 *v8; // r12
  unsigned __int64 *v9; // r11
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned int v15; // ebp
  __int64 v16; // r13
  void *pDmaBuffer; // rdx
  void *v18; // r8
  void *pDmaBufferPrivateData; // rdx
  unsigned __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER *v27; // rax
  _OWORD *v28; // rdx
  __int128 v29; // xmm1
  unsigned __int64 v31; // r8
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned __int64 *v40; // [rsp+A0h] [rbp+38h]

  v9 = a7;
  v10 = 0LL;
  v11 = a2;
  v15 = 0;
  *a7 = -1LL;
  v16 = 2LL;
  if ( a3 && (**((_DWORD **)a3 + 46) & 0x10000000) != 0 )
    goto LABEL_9;
  pDmaBuffer = a4->pDmaBuffer;
  v18 = (void *)*((_QWORD *)this + v11 + 336);
  if ( a4->pDmaBuffer < v18 )
  {
    v35 = *((_QWORD *)this + v11 + 144);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 83LL, v35, v18, pDmaBuffer);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_37;
  }
  pDmaBufferPrivateData = a4->pDmaBufferPrivateData;
  v20 = *((_QWORD *)this + v11 + 400);
  if ( (unsigned __int64)pDmaBufferPrivateData < v20 )
  {
LABEL_37:
    v36 = *((_QWORD *)this + v11 + 144);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 84LL, v36, v20, pDmaBufferPrivateData);
    WdLogGlobalForLineNumber = 213;
LABEL_38:
    v37 = *((_QWORD *)this + v11 + 144);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 18LL, v37, v22, v15);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_39;
  }
  v21 = (_DWORD)pDmaBufferPrivateData - v20;
  v15 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * v11 + 672);
  if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * v11 + 672) || v21 )
  {
    if ( !*((_DWORD *)this + v11 + 1161) )
    {
      *((_DWORD *)this + v11 + 1161) = 1;
      ++*((_QWORD *)this + v11 + 613);
    }
    v31 = *((_QWORD *)this + v11 + 613);
    *a7 = v31;
    if ( a3 )
    {
      if ( *((_QWORD *)a3 + 11) > v31 )
      {
        v33 = (*(_DWORD *)(*(_QWORD *)a3 + 52LL) >> 2) & 0x3F;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v33, v31);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_28;
      }
      *((_QWORD *)a3 + 11) = v31;
      if ( *((_DWORD *)this + 2) == 206 )
      {
        if ( *((_QWORD *)a3 + 10) > v31 )
        {
          v34 = (*(_DWORD *)(*(_QWORD *)a3 + 52LL) >> 2) & 0x3F;
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 31LL, a3, v34, v31);
          WdLogGlobalForLineNumber = 213;
        }
        *((_QWORD *)a3 + 10) = v31;
      }
    }
    v32 = *((_BYTE *)this + 41066);
    if ( (v32 & 2) != 0 )
      *((_BYTE *)this + 41066) = v32 & 0xFD;
  }
  v22 = *((unsigned int *)this + v11 + 416);
  *((_DWORD *)this + v11 + 416) = v22 + v15;
  if ( (unsigned int)v22 + v15 > *((_DWORD *)this + v11 + 31) )
    goto LABEL_38;
  v23 = *((unsigned int *)this + v11 + 544);
  *((_DWORD *)this + v11 + 544) = v23 + v21;
  if ( (unsigned int)v23 + v21 > *((_DWORD *)this + v11 + 95) )
  {
LABEL_39:
    v38 = *((_QWORD *)this + v11 + 144);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 19LL, v38, v23, v21);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_40;
  }
  *((_QWORD *)this + v11 + 336) = 0LL;
  *((_QWORD *)this + v11 + 400) = 0LL;
LABEL_9:
  v8 = (__int64 *)((char *)this + 24);
  v10 = a5;
  v40 = (unsigned __int64 *)*v9;
  LogPagingOperation(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + v11 + 144),
    (_DWORD)a3,
    (_DWORD)a4,
    a5 == -1071775743,
    a6 != 0,
    (__int64)a8);
  v25 = *((_QWORD *)this + 979);
  if ( v25 )
  {
    v26 = 360LL * *((unsigned int *)this + 1960);
    if ( a3 )
    {
      *(_QWORD *)(v26 + v25 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1960) + *((_QWORD *)this + 979) + 16) = *((_QWORD *)a3 + 1);
    }
    else
    {
      *(_QWORD *)(v26 + v25 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1960) + *((_QWORD *)this + 979) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 1960) + *((_QWORD *)this + 979)) = v11;
    v27 = a4;
    v28 = (_OWORD *)(360LL * *((unsigned int *)this + 1960) + *((_QWORD *)this + 979) + 24LL);
    do
    {
      *v28 = *(_OWORD *)&v27->pDmaBuffer;
      v28[1] = *(_OWORD *)&v27->pDmaBufferPrivateData;
      v28[2] = *(_OWORD *)&v27->MultipassOffset;
      v28[3] = *(_OWORD *)&v27->SpecialLockTransfer.TransferOffset;
      v28[4] = *(_OWORD *)&v27->Reserved.Reserved[6];
      v28[5] = *(_OWORD *)&v27->Reserved.Reserved[10];
      v28[6] = *(_OWORD *)&v27->Reserved.Reserved[14];
      v28 += 8;
      v29 = *(_OWORD *)&v27->Reserved.Reserved[18];
      v27 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v27 + 128);
      *(v28 - 1) = v29;
      --v16;
    }
    while ( v16 );
    *v28 = *(_OWORD *)&v27->pDmaBuffer;
    v28[1] = *(_OWORD *)&v27->pDmaBufferPrivateData;
    v28[2] = *(_OWORD *)&v27->MultipassOffset;
    v28[3] = *(_OWORD *)&v27->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 1960) + *((_QWORD *)this + 979) + 344) = a5;
    v24 = 360LL * *((unsigned int *)this + 1960);
    *(_QWORD *)(v24 + *((_QWORD *)this + 979) + 352) = v40;
    if ( ++*((_DWORD *)this + 1960) >= *((_DWORD *)this + 1956) )
    {
      ++*((_DWORD *)this + 1961);
      v8 = (__int64 *)((char *)this + 24);
      *((_DWORD *)this + 1960) = 0;
    }
  }
  if ( a5 < 0 )
  {
LABEL_28:
    if ( (_DWORD)v10 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v24);
        WdLogGlobalForLineNumber = 19243;
      }
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v11, 1u, 0LL, 0LL, 1u, 0);
      return v15 != 0;
    }
LABEL_40:
    v39 = *v8;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 11LL, a4, v10, v39);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400D6B15LL);
  }
  return v15 != 0;
}
