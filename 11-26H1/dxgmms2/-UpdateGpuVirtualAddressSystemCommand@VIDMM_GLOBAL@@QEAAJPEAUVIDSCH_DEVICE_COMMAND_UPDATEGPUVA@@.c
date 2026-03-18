/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1400046F4 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140037998 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038394 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     FlushTlbFromContext @ 0x140038EC8 (FlushTlbFromContext.c)
 *     ?IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3I@Z @ 0x14003D744 (-IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEA.c)
 *     AccumulateTlbFlushRange @ 0x140041E58 (AccumulateTlbFlushRange.c)
 *     VidSchGetPagingContext @ 0x140045288 (VidSchGetPagingContext.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400CB248 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1401084D4 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14010864C (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x140111F40 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v3; // r13d
  struct VIDMM_ALLOC **v4; // rsi
  VIDMM_GLOBAL *v6; // r14
  __int64 v7; // rax
  int v8; // edi
  struct VIDMM_PROCESS **v9; // r15
  struct _KTHREAD **v10; // rdx
  struct VIDMM_PROCESS *v11; // r12
  VIDMM_GLOBAL *v12; // rcx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rsi
  int v17; // eax
  struct _VIDSCH_CONTEXT *v18; // r8
  __int64 v19; // rax
  unsigned int v20; // r12d
  char *v21; // r14
  _QWORD *v22; // r13
  _QWORD *v23; // rsi
  __int64 *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct VIDMM_ALLOC *v33; // rax
  char *v34; // r14
  _QWORD *v35; // r12
  _QWORD *v36; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v37; // rdx
  int v38; // eax
  __int64 v39; // r10
  __int64 *v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  char *v43; // r14
  unsigned __int64 *v44; // r12
  unsigned __int64 *v45; // rsi
  unsigned __int64 v46; // r8
  __int64 v47; // rdx
  VIDMM_PHYSICAL_ADAPTER *v48; // rcx
  int v49; // eax
  bool v50; // zf
  struct VIDMM_MAPPED_VA_RANGE *v51; // rdx
  int v52; // eax
  unsigned __int64 *v53; // rax
  unsigned __int64 v54; // rcx
  int v55; // eax
  unsigned __int64 *v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v60; // [rsp+20h] [rbp-E0h]
  char v61; // [rsp+60h] [rbp-A0h]
  struct VIDMM_PROCESS *PagingContext; // [rsp+68h] [rbp-98h] BYREF
  __int64 v63; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+80h] [rbp-80h]
  char v66; // [rsp+88h] [rbp-78h]
  struct VIDMM_PROCESS **v67; // [rsp+90h] [rbp-70h] BYREF
  struct VIDMM_ALLOC *v68[2]; // [rsp+98h] [rbp-68h] BYREF
  char v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+B0h] [rbp-50h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-48h]
  struct VIDMM_ALLOC *v72; // [rsp+C8h] [rbp-38h]
  __int64 v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  _BYTE v75[96]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v77; // [rsp+158h] [rbp+58h] BYREF
  struct VIDMM_ALLOC **v78; // [rsp+160h] [rbp+60h]
  struct _VIDSCH_SYNC_OBJECT *v79; // [rsp+168h] [rbp+68h] BYREF

  v78 = a3;
  v3 = 0;
  v64 = -1;
  v4 = a3;
  v65 = 0LL;
  v6 = this;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v66 = 1;
    v64 = 8011;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 8011);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v7 = *((_QWORD *)a2 + 11);
  v61 = 0;
  v8 = 0;
  v9 = *(struct VIDMM_PROCESS ***)v7;
  v10 = (struct _KTHREAD **)(*(_QWORD *)v7 + 64LL);
  v11 = *(struct VIDMM_PROCESS **)(*(_QWORD *)(v7 + 16) + 8LL);
  *(_OWORD *)v68 = 0LL;
  PagingContext = v11;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v69 = 0;
  v70 = 0;
  v67 = v9;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v75, v10);
  v12 = 0LL;
  if ( !*((_QWORD *)a2 + 14) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 24776;
    v8 = -1073741823;
    v61 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 24786;
      v8 = -1073741823;
      v61 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v14 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 208), 0, 0) )
  {
    v8 = -1073741823;
    goto LABEL_24;
  }
  if ( v8 < 0 )
    goto LABEL_24;
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
    v6,
    0,
    v9[13],
    *(struct _VIDSCH_CONTEXT **)a2,
    *((_DWORD *)a2 + 5),
    *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
    *((_QWORD *)a2 + 10));
  v3 = *((_DWORD *)a2 + 9);
  LODWORD(v15) = 0;
  while ( 1 )
  {
    LODWORD(v79) = v3;
    if ( v3 >= *((_DWORD *)a2 + 5) )
      goto LABEL_23;
    v16 = *((_QWORD *)a2 + 3) + ((unsigned __int64)v3 << 6);
    v17 = *(_DWORD *)v16;
    if ( !*(_DWORD *)v16 || v17 == 3 )
      break;
    if ( v17 != 1 )
    {
      if ( v17 != 2 )
        goto LABEL_41;
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        v6,
        v11,
        *(struct _VIDSCH_CONTEXT **)a2,
        0LL,
        (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v3 << 6)));
      v43 = (char *)a2 + 48;
      if ( *(char **)v43 == v43 )
        v8 = CVirtualAddressAllocator::BuildVaRangeList(
               (CVirtualAddressAllocator *)v9,
               *((struct VIDMM_VAD **)a2 + 15),
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               (struct _LIST_ENTRY *)a2 + 3,
               *(_QWORD *)(v16 + 8),
               *(_QWORD *)(v16 + 8) + *(_QWORD *)(v16 + 16),
               *(_QWORD *)(v16 + 24));
      v15 = 0LL;
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          v44 = *(unsigned __int64 **)v43;
          if ( *(char **)v43 == v43 || v8 < 0 )
            goto LABEL_87;
          v45 = v44 - 1;
          v46 = v44[7];
          if ( v46 )
          {
            v47 = ***(_QWORD ***)v46;
            v48 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v47 + 52) >> 2) & 0x3F));
            if ( (*(_DWORD *)(v46 + 28) & 3) == 2 )
            {
              v68[0] = (struct VIDMM_ALLOC *)(v44 - 1);
              v49 = VIDMM_PHYSICAL_ADAPTER::IterateAllPhysicalMemoryRangesEx(
                      v48,
                      (struct VIDMM_PHYSICAL_ALLOC *)v47,
                      (int (*)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *))CommitAllocationVirtualAddressCb,
                      &v67,
                      2u);
              v15 = 0LL;
              v8 = v49;
              if ( v49 < 0 )
              {
                WdLogSingleEntry2(3LL, v45[13], v45[14]);
                WdLogGlobalForLineNumber = 25011;
LABEL_86:
                v15 = 0LL;
                continue;
              }
            }
            goto LABEL_82;
          }
          v50 = (v45[12] & 8) == 0;
          v51 = (struct VIDMM_MAPPED_VA_RANGE *)(v44 - 1);
          LOBYTE(v79) = v15;
          if ( !v50 )
            break;
          v52 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  (__int64)v9,
                  (__int64)v51,
                  0,
                  -2,
                  v15,
                  (struct _DXGK_ADL *)&xmmword_140060B68,
                  2,
                  &v68[1],
                  &v79,
                  v15,
                  v15);
          v15 = 0LL;
          v8 = v52;
          if ( v52 < 0 )
          {
            WdLogSingleEntry2(3LL, v45[13], v45[14]);
            v15 = 0LL;
            WdLogGlobalForLineNumber = 25048;
          }
          if ( (_BYTE)v79 )
            goto LABEL_80;
LABEL_81:
          if ( v8 < 0 )
            continue;
LABEL_82:
          v53 = *(unsigned __int64 **)v43;
          if ( *(char **)(*(_QWORD *)v43 + 8LL) != v43 )
            goto LABEL_43;
          v54 = *v53;
          if ( *(unsigned __int64 **)(*v53 + 8) != v53 )
            goto LABEL_43;
          *(_QWORD *)v43 = v54;
          *(_QWORD *)(v54 + 8) = v43;
          *v44 = v15;
          v44[1] = v15;
          v55 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                  v9,
                  *((struct VIDMM_VAD **)a2 + 14),
                  *((_DWORD *)a2 + 4),
                  (struct VIDMM_MAPPED_VA_RANGE *)(v44 - 1));
          v15 = 0LL;
          v8 = v55;
          if ( v55 < 0 )
          {
            WdLogSingleEntry2(3LL, v45[13], v45[14]);
            WdLogGlobalForLineNumber = 25067;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)(v44 - 1), v9);
            goto LABEL_86;
          }
        }
        v8 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v9, v51, &v68[1], 0, v15);
        if ( v8 < 0 )
        {
          WdLogSingleEntry2(3LL, v45[13], v45[14]);
          WdLogGlobalForLineNumber = 25028;
        }
        LOBYTE(v79) = 1;
LABEL_80:
        AccumulateTlbFlushRange((__int64)&v70, (__int64)(v44 - 1));
        goto LABEL_81;
      }
LABEL_87:
      if ( v8 != -1073741267 )
      {
        while ( 1 )
        {
          v56 = *(unsigned __int64 **)v43;
          if ( *(char **)v43 == v43 )
            break;
          if ( (char *)v56[1] != v43 )
            goto LABEL_43;
          v57 = *v56;
          if ( *(unsigned __int64 **)(*v56 + 8) != v56 )
            goto LABEL_43;
          *(_QWORD *)v43 = v57;
          *(_QWORD *)(v57 + 8) = v43;
          *v56 = v15;
          v56[1] = v15;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)(v56 - 1), v9);
          v15 = 0LL;
        }
      }
LABEL_41:
      if ( v8 < 0 )
        goto LABEL_23;
      goto LABEL_42;
    }
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      v6,
      v11,
      *(struct _VIDSCH_CONTEXT **)a2,
      0LL,
      (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v3 << 6)));
    v34 = (char *)a2 + 96;
    v35 = (_QWORD *)*((_QWORD *)a2 + 12);
    LOBYTE(v77) = 0;
    v36 = v35 - 1;
    v37 = (struct VIDMM_MAPPED_VA_RANGE *)(v35 - 1);
    if ( (v35[11] & 8) != 0 )
    {
      v8 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v9, v37, &v68[1], 0, 0);
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(3LL, v36[13], v36[14]);
        WdLogGlobalForLineNumber = 24919;
      }
      LOBYTE(v77) = 1;
LABEL_57:
      AccumulateTlbFlushRange((__int64)&v70, (__int64)(v35 - 1));
      goto LABEL_58;
    }
    v38 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            (__int64)v9,
            (__int64)v37,
            0,
            -2,
            0LL,
            (struct _DXGK_ADL *)&xmmword_140060B68,
            2,
            &v68[1],
            &v77,
            0,
            0LL);
    v39 = 0LL;
    v8 = v38;
    if ( v38 < 0 )
    {
      WdLogSingleEntry2(3LL, v36[13], v36[14]);
      v39 = 0LL;
      WdLogGlobalForLineNumber = 24937;
    }
    if ( (_BYTE)v77 )
      goto LABEL_57;
LABEL_58:
    if ( v8 < 0 )
      goto LABEL_63;
    v40 = *(__int64 **)v34;
    if ( *(char **)(*(_QWORD *)v34 + 8LL) != v34 || (v41 = *v40, *(__int64 **)(*v40 + 8) != v40) )
LABEL_43:
      __fastfail(3u);
    *(_QWORD *)v34 = v41;
    *(_QWORD *)(v41 + 8) = v34;
    *v35 = v39;
    v35[1] = v39;
    v42 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
            v9,
            *((struct VIDMM_VAD **)a2 + 14),
            *((_DWORD *)a2 + 4),
            (struct VIDMM_MAPPED_VA_RANGE *)(v35 - 1));
    LODWORD(v15) = 0;
    v8 = v42;
    if ( v42 < 0 )
    {
      WdLogSingleEntry1(3LL, v9);
      WdLogGlobalForLineNumber = 24958;
LABEL_63:
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)(v35 - 1), v9);
      goto LABEL_23;
    }
LABEL_42:
    v6 = this;
    ++v3;
    v11 = PagingContext;
    *((_DWORD *)a2 + 10) = v15;
  }
  v18 = *(struct _VIDSCH_CONTEXT **)a2;
  v60 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v3 << 6));
  v72 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * *(unsigned int *)(v16 + 24));
  v73 = ***(_QWORD ***)v72;
  v74 = *(_QWORD *)(*((_QWORD *)v6 + 5040) + 8LL * ((*(_DWORD *)(v73 + 52) >> 2) & 0x3F));
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v6, v11, v18, v72, v60);
  if ( (*((_BYTE *)v6 + 41065) & 2) != 0 )
    v19 = 1LL;
  else
    v19 = *(_QWORD *)(v16 + 16) / *(_QWORD *)(v16 + 40);
  v20 = *((_DWORD *)a2 + 10);
  LODWORD(v15) = 0;
  v63 = v19;
  while ( 1 )
  {
    if ( v20 >= (unsigned int)v19 )
    {
      v3 = (unsigned int)v79;
      goto LABEL_41;
    }
    v21 = (char *)a2 + 96;
    v22 = (_QWORD *)*((_QWORD *)a2 + 12);
    v23 = v22 - 1;
    if ( (*((_DWORD *)v72 + 7) & 3) != 2 )
      break;
    v68[0] = (struct VIDMM_ALLOC *)(v22 - 1);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, _QWORD *), struct VIDMM_PROCESS ***, int, _DWORD, _DWORD))(*(_QWORD *)v74 + 104LL))(
           v74,
           v73,
           CommitAllocationVirtualAddressCb,
           &v67,
           2,
           0,
           *(_QWORD *)(v73 + 16) >> 12);
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(3LL, v23[13], v23[14]);
      WdLogGlobalForLineNumber = 24875;
      goto LABEL_22;
    }
LABEL_18:
    v24 = *(__int64 **)v21;
    if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
      goto LABEL_43;
    v25 = *v24;
    if ( *(__int64 **)(*v24 + 8) != v24 )
      goto LABEL_43;
    *(_QWORD *)v21 = v25;
    *(_QWORD *)(v25 + 8) = v21;
    *v22 = 0LL;
    v22[1] = 0LL;
    v26 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
            v9,
            *((struct VIDMM_VAD **)a2 + 14),
            *((_DWORD *)a2 + 4),
            (struct VIDMM_MAPPED_VA_RANGE *)(v22 - 1));
    LODWORD(v15) = 0;
    v8 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(3LL, v9);
      WdLogGlobalForLineNumber = 24888;
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)(v22 - 1), v9);
      goto LABEL_22;
    }
    LODWORD(v19) = v63;
    ++v20;
  }
  v8 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
         (CVirtualAddressAllocator *)v9,
         (struct VIDMM_MAPPED_VA_RANGE *)(v22 - 1),
         &v68[1],
         0,
         0);
  AccumulateTlbFlushRange((__int64)&v70, (__int64)(v22 - 1));
  if ( v8 >= 0 )
    goto LABEL_18;
  WdLogSingleEntry2(3LL, v23[13], v23[14]);
  WdLogGlobalForLineNumber = 24857;
LABEL_22:
  v3 = (unsigned int)v79;
LABEL_23:
  FlushTlbFromContext((CVirtualAddressAllocator *)v9, (__int64)&v70);
  v6 = this;
  v4 = v78;
LABEL_24:
  if ( v8 == -1073741267 )
  {
    v33 = v68[1];
    *((_DWORD *)a2 + 9) = v3;
    *v4 = v33;
  }
  else
  {
    if ( !*((_QWORD *)a2 + 9) )
      goto LABEL_28;
    VIDMM_GLOBAL::FlushPagingBufferInternal(v6, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v27 = *((unsigned int *)a2 + 4);
    v28 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 744LL);
    PagingContext = *(struct VIDMM_PROCESS **)(*(_QWORD *)(v28 + 344) + 8 * v27);
    if ( PagingContext )
    {
      v79 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 9);
      v77 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&PagingContext, 1u, &v79, 0x80000000, (__int64)&v77) < 0 )
      {
        WdLogSingleEntry0(1LL);
        v59 = 25160;
        goto LABEL_99;
      }
    }
    else
    {
      PagingContext = (struct VIDMM_PROCESS *)VidSchGetPagingContext(v28, v27);
      v79 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 9);
      v77 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(
                  0,
                  0LL,
                  1,
                  (__int64 *)&PagingContext,
                  1u,
                  (__int64)&v79,
                  0x80000000,
                  &v77,
                  0) >= 0 )
        goto LABEL_28;
      WdLogSingleEntry0(1LL);
      v59 = 25197;
LABEL_99:
      WdLogGlobalForLineNumber = v59;
      DxgkLogInternalTriageEvent(v58, 0x40000LL);
    }
LABEL_28:
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
  }
  v29 = 0;
  if ( !v61 )
    v29 = v8;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v64);
  return v29;
}
