/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8
 * Callers:
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400CDAE8 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400CE330 (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400CEA6C (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CEC00 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140030100 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     FlushTlbFromContext @ 0x140038EC8 (FlushTlbFromContext.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x14009A394 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     CommitVirtualAddressRangesInList @ 0x14009D288 (CommitVirtualAddressRangesInList.c)
 *     MergeAllocationPendingVaRangeList @ 0x1400A13CC (MergeAllocationPendingVaRangeList.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1401138E8 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14011D298 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        _BYTE *a5,
        __int64 *a6,
        int a7,
        __int64 a8)
{
  _BYTE *v10; // r12
  __int64 *v12; // r9
  _QWORD *v14; // r15
  __int64 *v15; // rdi
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 **v19; // rax
  void *v20; // r14
  __int64 v21; // rcx
  struct _KTHREAD *Blink; // rcx
  _QWORD *i; // r14
  _DWORD *v24; // r9
  int v25; // ecx
  char v26; // al
  unsigned int v27; // r8d
  __int64 (__fastcall *v28)(_QWORD *, __int64, __int64 (__fastcall *)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, _QWORD *), struct _LIST_ENTRY **, int, unsigned int, unsigned int); // rax
  CVirtualAddressAllocator *v29; // r14
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // [rsp+28h] [rbp-B9h]
  unsigned int v34; // [rsp+30h] [rbp-B1h]
  CVirtualAddressAllocator *v35; // [rsp+50h] [rbp-91h]
  __int64 v36; // [rsp+58h] [rbp-89h]
  struct _LIST_ENTRY *VirtualAddressAllocator; // [rsp+70h] [rbp-71h] BYREF
  __int128 v38; // [rsp+78h] [rbp-69h]
  char v39; // [rsp+88h] [rbp-59h]
  int v40; // [rsp+90h] [rbp-51h] BYREF
  __m128i si128; // [rsp+98h] [rbp-49h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-39h] BYREF

  v10 = a5;
  v12 = a6;
  v14 = *(_QWORD **)(*(_QWORD *)(a1 + 40320) + 8LL * ((*(_DWORD *)(a2 + 32) >> 2) & 0x3F));
  v15 = **(__int64 ***)a2;
  v16 = *v15;
  v36 = *v15;
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = WdLogNewEntry5_WdTrace(a1);
    v16 = v36;
    v12 = a6;
    *(_QWORD *)(v17 + 24) = a2;
    WdLogGlobalForLineNumber = 17168;
  }
  if ( (*(_DWORD *)(a2 + 28) & 3) == 1 )
    VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)a1, (struct VIDMM_ALLOC *)a2);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 152LL) & 8) != 0 && (v15[3] & 0x11) == 1 )
    a3 = 2;
  v33 = v12;
  LOBYTE(v12) = a4;
  LODWORD(v18) = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64 *, _BYTE *, __int64 *, int, __int64))(*v14 + 192LL))(
                   v14,
                   v16,
                   a3,
                   v12,
                   a5,
                   v33,
                   a7,
                   a8);
  if ( (int)v18 < 0 )
  {
    if ( *a5 )
      *a6 = a2;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(a2 + 26) && (*((_DWORD *)v15 + 7) & 2) == 0 )
  {
    if ( *(_QWORD *)(a2 + 680)
      && (*(_BYTE *)(a1 + 41064) & 0x40) != 0
      && ((v15[3] & 0x8000000) == 0 || (*(_DWORD *)v15[46] & 0x20000008) != 0) )
    {
      v19 = *(__int64 ***)a2;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess((PRKPROCESS)v19[1][2], &ApcState);
      v20 = *(void **)(a2 + 680);
      v18 = (int)VidMmiEnsureVirtualAddressRangeValid(v20, *(_QWORD *)(v36 + 16));
      KeUnstackDetachProcess(&ApcState);
      if ( (int)v18 < 0 )
      {
        WdLogSingleEntry2(1LL, v20, v18);
        WdLogGlobalForLineNumber = 17217;
        DxgkLogInternalTriageEvent(v21, 0x40000LL);
        *a5 = 0;
LABEL_40:
        if ( *((_DWORD *)v15 + 18) == 2 && !*((_DWORD *)v15 + 19) )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 256LL))(v14, *v15);
        return (unsigned int)v18;
      }
    }
    *(_BYTE *)(a2 + 26) = 1;
  }
  if ( (*(_BYTE *)(a1 + 41064) & 0x10) != 0
    && (!*(_BYTE *)(a1 + 41068) || (v15[3] & 4) == 0)
    && (*((_DWORD *)v15 + 7) & 2) == 0 )
  {
    VirtualAddressAllocator = (struct _LIST_ENTRY *)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                      *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                                      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 240LL),
                                                      (*(_DWORD *)(v36 + 52) >> 2) & 0x3F);
    v38 = 0LL;
    v39 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v40 = 0;
    Blink = (struct _KTHREAD *)VirtualAddressAllocator[4].Blink;
    v35 = (CVirtualAddressAllocator *)VirtualAddressAllocator;
    ApcState.ApcListHead[0].Blink = VirtualAddressAllocator + 4;
    LODWORD(ApcState.ApcListHead[1].Flink) = 0;
    if ( Blink != KeGetCurrentThread() )
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)&ApcState);
    if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v18) = CommitVirtualAddressRangesInList((_QWORD **)(a2 + 648), v14, (__int64)&VirtualAddressAllocator);
      if ( (int)v18 >= 0 )
      {
        LODWORD(v18) = CommitVirtualAddressRangesInList((_QWORD **)(a2 + 664), v14, (__int64)&VirtualAddressAllocator);
        if ( (int)v18 >= 0 )
        {
          v29 = v35;
          LODWORD(v18) = MergeAllocationPendingVaRangeList(v35, a2);
LABEL_38:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState);
          FlushTlbFromContext(v29, (__int64)&v40);
          if ( (int)v18 < 0 )
          {
            *a6 = *((_QWORD *)&v38 + 1);
            *v10 = v39;
            goto LABEL_40;
          }
          goto LABEL_47;
        }
      }
    }
    else
    {
      for ( i = *(_QWORD **)(a2 + 648); i != (_QWORD *)(a2 + 648); i = (_QWORD *)*i )
      {
        v24 = i - 4;
        v25 = *((_DWORD *)i + 10);
        if ( (v25 & 0x400) != 0 || (*(_BYTE *)(a1 + 41064) & 2) == 0 )
        {
          if ( (v25 & 0x800) != 0 )
            continue;
          v26 = *(_BYTE *)(a1 + 41064);
          if ( (v26 & 4) == 0 && (v26 & 8) == 0 )
            continue;
        }
        v27 = v24[20];
        v34 = (v27 + v24[28] - v24[26]) >> 12;
        v28 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 (__fastcall *)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, _QWORD *), struct _LIST_ENTRY **, int, unsigned int, unsigned int))(*v14 + 104LL);
        *(_QWORD *)&v38 = i - 4;
        LODWORD(v18) = v28(v14, v36, CommitAllocationVirtualAddressCb, &VirtualAddressAllocator, 2, v27 >> 12, v34);
        if ( (int)v18 < 0 )
          break;
      }
      v10 = a5;
    }
    v29 = v35;
    goto LABEL_38;
  }
LABEL_47:
  if ( (*(_DWORD *)(a2 + 28) & 3) != 2 )
  {
    VIDMM_DEVICE::AddCommitment(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v31, &EventPageInAllocation2, v32, a2);
  }
  if ( (*(_DWORD *)(v36 + 56) & 0x10) != 0 )
    *((_BYTE *)v15 + 43) = 1;
  return 0LL;
}
