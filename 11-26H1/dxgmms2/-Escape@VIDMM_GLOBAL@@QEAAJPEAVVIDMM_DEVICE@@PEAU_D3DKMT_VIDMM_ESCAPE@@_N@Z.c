/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94
 * Callers:
 *     VidMmEscape @ 0x14004D540 (VidMmEscape.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z @ 0x140046CDC (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1400A1DBC (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z @ 0x1400A2820 (-VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z.c)
 *     ?VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x1400A83A0 (-VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1400AA548 (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E5588 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        char a4)
{
  unsigned int v7; // esi
  unsigned int v8; // r8d
  unsigned __int64 *v9; // r9
  D3DKMT_VIDMMESCAPETYPE Type; // edx
  __int32 v11; // edx
  __int32 v12; // edx
  __int32 v13; // edx
  int v14; // edx
  ULONG v15; // ecx
  D3DKMT_HANDLE v16; // edx
  UINT v17; // r8d
  PRKEVENT *v18; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int32 v22; // edx
  __int32 v23; // edx
  __int32 v24; // edx
  int v25; // edx
  UINT64 v26; // rdx
  struct DXGPROCESS *Current; // rax
  int v28; // ecx
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  HANDLE hProcess; // r9
  UINT64 NtHandle; // r10
  VIDMM_GLOBAL **v36; // rdx
  VIDMM_GLOBAL *v37; // rcx
  unsigned int i; // r8d
  __int64 v39; // rax
  __int64 v40; // rcx
  VIDMM_GLOBAL *v41; // rax
  D3DKMT_VAD_ESCAPE_COMMAND Command; // eax
  __int64 Value; // rax
  __int64 v44; // r10
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // r10
  __int64 v56; // r11
  unsigned __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  VIDMM_PROCESS *v60; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v62; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v63; // [rsp+28h] [rbp-C0h]
  unsigned __int64 *v64; // [rsp+30h] [rbp-B8h]
  _BYTE v65[24]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v66[24]; // [rsp+68h] [rbp-80h] BYREF
  _DWORD v67[24]; // [rsp+80h] [rbp-68h] BYREF

  v7 = -1073741811;
  memset(v67, 0, 0x58uLL);
  Type = a3->Type;
  if ( a3->Type > D3DKMT_VIDMMESCAPETYPE_WAKE )
  {
    v22 = Type - 15;
    if ( !v22 )
    {
      VIDMM_GLOBAL::PerformDefragmentationEscape((VIDMM_GLOBAL *)this, a3->Defrag.Operation, v8, v9, v62, v63, v64);
      v7 = 0;
LABEL_33:
      if ( v7 != -1073741811 )
        return v7;
      goto LABEL_34;
    }
    v23 = v22 - 2;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        v26 = qword_14008A688 / 10000000;
        qword_14008A688 = 10000000 * a3->EvictByNtHandle.NtHandle;
        a3->EvictByNtHandle.NtHandle = v26;
        return 0;
      }
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          v7 = 0;
          *(_BYTE *)(*((_QWORD *)this[2] + 93) + 7082LL) = 1;
          return v7;
        }
        goto LABEL_34;
      }
      if ( !g_IsInternalReleaseOrDbg )
        goto LABEL_34;
      v20 = VidMmCopyContentEscape(
              a3->GetVads.GetVadRange.VaRangeIndex,
              a3->EvictByNtHandle.NtHandle,
              a3->GetVads.GetVadRange.PhysicalAdapterIndex,
              a3->GetVads.GetVadRange.StartAddress,
              a3->GetVads.GetVad.StartAddress);
    }
    else
    {
      Current = DXGPROCESS::GetCurrent();
      if ( !Current || (*((_DWORD *)Current + 102) & 0x1000) == 0 )
        goto LABEL_34;
      v67[10] = a3->SetFault.0;
      v67[0] = 132;
      v20 = VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)this, (struct _VIDMM_SYSTEM_COMMAND *)v67, 1);
    }
LABEL_16:
    v7 = v20;
    goto LABEL_33;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_WAKE )
  {
    v18 = (PRKEVENT *)*this;
    if ( a3->SetFault.Value )
    {
      VidMmFlushWorkerThread((struct VIDMM_WORKER_THREAD *)v18);
      return 0;
    }
LABEL_10:
    KeSetEvent(v18[3], 0, 0);
    return 0;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 18344;
    DxgkLogInternalTriageEvent(v21, 0x40000LL);
    return (unsigned int)-1073741823;
  }
  v11 = Type - 1;
  if ( !v11 )
    return 0;
  v12 = v11 - 1;
  if ( !v12 )
    return 0;
  v13 = v12 - 1;
  if ( !v13 )
  {
    v20 = VIDMM_GLOBAL::ApertureCorruptionCheck((VIDMM_GLOBAL *)this, 0LL);
    goto LABEL_16;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 8 )
    {
      v15 = dword_14008A560;
      v16 = dword_14008A55C;
      v17 = dword_14008A554;
      dword_14008A560 = a3->Wake.bFlush;
      dword_14008A55C = a3->Evict.AllocationHandle;
      dword_14008A554 = a3->SuspendProcess.bAllowWakeOnSubmission;
      a3->SetFault.Value = v15;
      a3->Evict.AllocationHandle = v16;
      a3->GetVads.GetVadRange.VaRangeIndex = v17;
      v18 = (PRKEVENT *)*this;
      goto LABEL_10;
    }
LABEL_34:
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v66, this + 5152);
    if ( a3->Type != D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO )
    {
      if ( a3->Type == D3DKMT_VIDMMESCAPETYPE_SET_BUDGET )
      {
        v32 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
        if ( v32 )
          v33 = *(_QWORD *)(v32 + 8);
        else
          v33 = 0LL;
        hProcess = a3->Evict.hProcess;
        NtHandle = a3->EvictByNtHandle.NtHandle;
        v36 = *(VIDMM_GLOBAL ***)(*(_QWORD *)(v33 + 32) + 8LL * *((unsigned int *)this[3] + 60));
        if ( v36 )
        {
          v37 = *v36;
          for ( i = 0; i < *((_DWORD *)*v36 + 1738); v37 = *v36 )
          {
            v39 = (unsigned __int16)i++;
            v40 = 304 * v39;
            v41 = v36[1];
            *(_QWORD *)((char *)v41 + v40 + 48) = NtHandle;
            *(_QWORD *)((char *)v41 + v40 + 56) = hProcess;
          }
          VIDMM_GLOBAL::RequestNewBudget(v37, 0);
        }
      }
      else
      {
        if ( a3->Type != D3DKMT_VIDMMESCAPETYPE_GET_BUDGET )
        {
          if ( a3->Type == (D3DKMT_VIDMMESCAPETYPE_EVICT|0x10) )
          {
            v28 = *((_DWORD *)this[3] + 111);
            if ( (v28 & 8) != 0 || (v28 & 0x10) != 0 )
              v7 = -1073741811;
          }
          else
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 18614;
          }
          goto LABEL_85;
        }
        v29 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
        if ( v29 )
          v29 = *(_QWORD *)(v29 + 8);
        v30 = *((unsigned int *)this[3] + 60);
        v31 = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 8 * v30);
        if ( v31 )
        {
          DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v65, (struct _KTHREAD **)(v31 + 144));
          VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(
            *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(v29 + 32) + 8 * v30),
            &a3->EvictByNtHandle.NtHandle,
            0,
            1);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v65);
        }
        else
        {
          a3->EvictByNtHandle.NtHandle = 0LL;
        }
      }
      goto LABEL_84;
    }
    Command = a3->GetVads.Command;
    if ( Command == D3DKMT_VAD_ESCAPE_GET_SEGMENT_CAPS )
    {
      Value = a3->SetFault.Value;
      if ( (unsigned int)Value >= *((_DWORD *)this + 1738) )
      {
        a3->GetVads.Status = -1073741811;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 18498;
LABEL_85:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v66);
        return v7;
      }
      v44 = 0LL;
      v45 = *((_QWORD *)this[5040] + Value);
      a3->Evict.AllocationHandle = *(_DWORD *)(v45 + 136);
      while ( 1 )
      {
        v46 = *(unsigned int *)(v45 + 136);
        if ( (unsigned int)v46 > 0x20 )
          v46 = 32LL;
        if ( (unsigned int)v44 >= v46 )
          break;
        v47 = v44;
        v48 = *(_QWORD *)(*(_QWORD *)(v45 + 1752) + 8 * v44);
        v49 = v48 + 108;
        if ( !v48 )
          v49 = 100LL;
        a3->GetVads.GetSegmentCaps.SegmentCaps[v44].bAperture = *(_DWORD *)v49 == 2;
        v50 = v48 + 40;
        if ( !v48 )
          v50 = 32LL;
        *(&a3->GetVads.GetVad.VadAddress + 3 * v44) = *(_QWORD *)v50;
        v51 = v48 + 132;
        if ( !v48 )
          v51 = 124LL;
        *(&a3->GetVads.GetVad.NumMappedRanges + 6 * v44) = *(_DWORD *)v51;
        v52 = v48 + 70;
        if ( !v48 )
          v52 = 62LL;
        *(&a3->GetVads.GetVad.VadType + 6 * v44) = *(unsigned __int16 *)v52;
        v53 = v48 + 104;
        if ( !v48 )
          v53 = 96LL;
        a3->GetVads.GetPte.PageTableIndex[6 * v44 + 5] = *(_DWORD *)v53;
        v44 = (unsigned int)(v44 + 1);
        a3->GetVads.GetSegmentCaps.SegmentCaps[v47].bReservedSysMem = *(_DWORD *)v49 == 0;
      }
    }
    else
    {
      if ( Command != D3DKMT_VAD_ESCAPE_GET_GPUMMU_CAPS )
      {
        v60 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
        if ( v60 )
          v60 = (VIDMM_PROCESS *)*((_QWORD *)v60 + 1);
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v60, *((_DWORD *)this[3] + 60), 0xFFFFFFFF);
        if ( !VirtualAddressAllocator )
          goto LABEL_85;
        CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
        goto LABEL_84;
      }
      if ( a3->SetFault.Value >= *((_DWORD *)this + 1738) )
      {
        a3->GetVads.Status = -1073741811;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 18525;
        goto LABEL_85;
      }
      v54 = *((_QWORD *)this[5040] + a3->SetFault.Value);
      v55 = *(_QWORD *)(v54 + 560);
      if ( !v55 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 18555;
        goto LABEL_85;
      }
      v56 = 0LL;
      a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v55 & 1;
      a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v55 & 2) != 0;
      a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v55 & 4) != 0;
      a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v55 & 0x10) != 0;
      a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v55 & 0x40) != 0;
      a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v55 & 0x80) != 0;
      HIBYTE(a3->Defrag.TotalCommitted) ^= (HIBYTE(a3->Defrag.TotalCommitted) ^ (*(_BYTE *)(v54 + 558) >> 5)) & 1;
      a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v55) & 1;
      a3->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v55 + 8);
      a3->GetVads.GetVad.VadType = *(_DWORD *)(v55 + 16);
      if ( *(_DWORD *)(v55 + 16) )
      {
        do
        {
          v57 = 5 * v56;
          v58 = 6 * v56;
          a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v57 / 5].IndexBitCount = *(_DWORD *)(v54 + 48 * v56 + 212);
          *(&a3->GetVads.GetVad.EndAddress + v57) = *(_QWORD *)(v54 + 48 * v56 + 224);
          a3->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v57 / 5].IndexShift = *(_QWORD *)(v54 + 48 * v56 + 232);
          v59 = 3 * (v56 + 5);
          v56 = (unsigned int)(v56 + 1);
          *(&a3->GetVads.GetVadRange.pOwner + v57) = *(_QWORD *)(v54 + 16 * v59);
          *(&a3->GetVads.GetVadRange.OwnerOffset + v57) = *(_QWORD *)(v54 + 8 * v58 + 248);
        }
        while ( (unsigned int)v56 < *(_DWORD *)(v55 + 16) );
      }
    }
    a3->GetVads.Status = 0;
LABEL_84:
    v7 = 0;
    goto LABEL_85;
  }
  if ( a4 )
    return 0LL;
  return (unsigned int)-1073741790;
}
