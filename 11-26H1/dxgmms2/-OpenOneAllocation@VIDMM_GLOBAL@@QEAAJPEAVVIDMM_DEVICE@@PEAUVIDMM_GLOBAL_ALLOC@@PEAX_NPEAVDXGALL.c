/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210
 * Callers:
 *     ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70 (-OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400DCDB8 (-TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKW4_DXGK_PAGESIZE@@5KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DD45C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1400DE18C (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDX.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DEBD8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x14003949C (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     ??0VIDMM_ALLOC_DEBUG@@QEAA@XZ @ 0x1400395D4 (--0VIDMM_ALLOC_DEBUG@@QEAA@XZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003DCC4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400E41A0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5CF0 (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010F3AC (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010F7B0 (-NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140119940 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_A.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS **a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        bool a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v7; // rsi
  VIDMM_GLOBAL *v10; // rbx
  unsigned int v11; // r12d
  __int64 v12; // rax
  VIDMM_ALLOC_DEBUG *v13; // rax
  VIDMM_ALLOC *v14; // rax
  VIDMM_ALLOC *v15; // r14
  VIDMM_ALLOC *v16; // rax
  struct _KTHREAD **v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  struct VIDMM_LOCAL_ALLOC *v21; // rax
  struct VIDMM_MULTI_ALLOC *v22; // rcx
  int v23; // edx
  struct DXGALLOCATION *v24; // r8
  bool v25; // al
  struct VIDMM_LOCAL_ALLOC *v26; // rax
  struct VIDMM_LOCAL_ALLOC **v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  struct VIDMM_LOCAL_ALLOC *v30; // rdx
  VIDMM_GLOBAL *v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct VIDMM_PROCESS **v40; // r8
  struct VIDMM_PROCESS *v41; // rax
  int Resident; // eax
  struct VIDMM_ALLOC **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // ecx
  struct VIDMM_ALLOC **v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  struct VIDMM_PROCESS *v50; // rdi
  HANDLE CurrentProcessId; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  char v54; // r15
  int v55; // eax
  char *v56; // rcx
  __int64 v57; // rax
  char **v58; // rdx
  struct VIDMM_LOCAL_ALLOC *v60; // [rsp+80h] [rbp-80h]
  unsigned int v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  struct VIDMM_PROCESS_ADAPTER_INFO *v63; // [rsp+98h] [rbp-68h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v64; // [rsp+A0h] [rbp-60h] BYREF
  struct VIDMM_MULTI_ALLOC *v65; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-48h]
  _BYTE v68[32]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v69[20]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v72; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v73; // [rsp+1A8h] [rbp+A8h] BYREF

  v73 = a4;
  v7 = 0LL;
  v62 = *(_QWORD *)a3;
  v10 = this;
  v60 = 0LL;
  LOBYTE(v73) = 0;
  v11 = 0;
  v61 = 0;
  v72 = 0;
  v67 = 0LL;
  v63 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v12 + 24) = a3;
    *(_QWORD *)(v12 + 32) = a2;
    WdLogGlobalForLineNumber = 4607;
  }
  *a7 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (VIDMM_ALLOC_DEBUG *)operator new(824LL, 0x33306956u, 64LL);
    if ( !v13 )
    {
      v15 = 0LL;
      goto LABEL_10;
    }
    v14 = VIDMM_ALLOC_DEBUG::VIDMM_ALLOC_DEBUG(v13);
  }
  else
  {
    v16 = (VIDMM_ALLOC *)operator new(776LL, 0x33306956u, 64LL);
    if ( !v16 )
    {
      v15 = 0LL;
      goto LABEL_88;
    }
    v14 = VIDMM_ALLOC::VIDMM_ALLOC(v16);
  }
  v15 = v14;
LABEL_10:
  if ( !v15 )
  {
LABEL_88:
    _InterlockedAdd(&dword_14008A6E8, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4630;
    DxgkLogInternalTriageEvent(v53, 262145LL);
    v11 = -1073741801;
    v17 = (struct _KTHREAD **)((char *)a3 + 136);
    goto LABEL_89;
  }
  *((_BYTE *)v15 + 36) = *((_BYTE *)v15 + 36) & 0xFE | ((*((_DWORD *)v10 + 1746) & 0x2000) != 0);
  VIDMM_DEVICE::NotifyAllocationOpened((VIDMM_DEVICE *)a2, v15);
  v17 = (struct _KTHREAD **)((char *)a3 + 136);
  *((_DWORD *)v15 + 8) ^= (*(_DWORD *)(v62 + 52) ^ *((_DWORD *)v15 + 8)) & 0xFC;
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
  LOBYTE(v73) = 1;
  if ( *((_BYTE *)a3 + 41) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a3;
      WdLogGlobalForLineNumber = 4656;
    }
LABEL_14:
    v11 = -1071775482;
LABEL_89:
    if ( !v60 )
    {
LABEL_101:
      if ( v15 )
      {
        VIDMM_DEVICE::NotifyAllocationClosed((VIDMM_DEVICE *)a2, v15);
        operator delete(v15);
      }
      if ( (_BYTE)v73 )
        DXGFASTMUTEX::Release(v17);
      return v11;
    }
    v54 = v73;
    if ( (_BYTE)v73 )
    {
      DXGFASTMUTEX::Release(v17);
      v54 = 0;
      LOBYTE(v73) = 0;
    }
    memset(v69, 0, 0x58uLL);
    LODWORD(v69[0]) = 200;
    v69[2] = v15;
    v55 = VIDMM_GLOBAL::QueueDeferredCommand(
            v10,
            *(struct VIDMM_PAGING_QUEUE **)(32LL * ((*(_DWORD *)(v62 + 52) >> 2) & 0x3F)
                                          + *(_QWORD *)(*((_QWORD *)v15 + 1) + 72LL)),
            (struct _VIDMM_DEFERRED_COMMAND *)v69,
            1,
            0LL);
    if ( v55 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 5LL, 200LL, v55, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    KeWaitForSingleObject((char *)v15 + 72, Executive, 0, 0, 0LL);
    if ( !v54 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v17);
      LOBYTE(v73) = 1;
    }
    v56 = (char *)v15 + 40;
    v57 = *((_QWORD *)v15 + 5);
    if ( !v57 )
    {
LABEL_100:
      VIDMM_GLOBAL::CloseLocalAllocation(v10, v60, 1);
      goto LABEL_101;
    }
    if ( *(char **)(v57 + 8) == v56 )
    {
      v58 = (char **)*((_QWORD *)v15 + 6);
      if ( *v58 == v56 )
      {
        *v58 = (char *)v57;
        *(_QWORD *)(v57 + 8) = v58;
        goto LABEL_100;
      }
    }
LABEL_106:
    __fastfail(3u);
  }
  v19 = *((unsigned int *)a3 + 8);
  if ( (*((_BYTE *)a3 + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = a3;
      WdLogGlobalForLineNumber = 4669;
    }
LABEL_18:
    v11 = -1071775470;
    goto LABEL_89;
  }
  v20 = *((_QWORD *)a3 + 6);
  v66 = v20;
  if ( (v19 & 4) != 0 )
    v63 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 32LL)
                                                + 8LL * *(unsigned int *)(*((_QWORD *)v10 + 3) + 240LL));
  v21 = VIDMM_GLOBAL::OpenLocalAllocation(v10, a3, a2[1], a5);
  v60 = v21;
  if ( !v21 )
  {
    v11 = -1071775488;
    goto LABEL_89;
  }
  v22 = (struct VIDMM_MULTI_ALLOC *)*((_QWORD *)a3 + 6);
  v23 = *((_DWORD *)v15 + 7);
  v24 = a6;
  *(_QWORD *)v15 = v21;
  v65 = v22;
  *((_QWORD *)v15 + 1) = a2;
  *((_QWORD *)v15 + 2) = v24;
  *((_QWORD *)v15 + 12) = *((_QWORD *)a3 + 46);
  LODWORD(v22) = **((_DWORD **)a3 + 46);
  v25 = a5;
  *((_BYTE *)v15 + 24) = a5;
  *((_DWORD *)v15 + 7) = v23 ^ ((unsigned __int8)v23 ^ ((unsigned int)v22 >> 26)) & 8;
  if ( v25
    && (**((_DWORD **)a3 + 46) & 0x200000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 1) + 40LL) + 408LL) & 4) != 0
    && *((_DWORD *)v10 + 1738) > 1u )
  {
    *((_BYTE *)v15 + 24) = 0;
  }
  *((_QWORD *)v15 + 85) = 0LL;
  *((_QWORD *)v15 + 82) = (char *)v15 + 648;
  *((_QWORD *)v15 + 81) = (char *)v15 + 648;
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
  {
    *((_QWORD *)v15 + 84) = (char *)v15 + 664;
    *((_QWORD *)v15 + 83) = (char *)v15 + 664;
  }
  v26 = (VIDMM_ALLOC *)((char *)v15 + 40);
  v27 = (struct VIDMM_LOCAL_ALLOC **)*((_QWORD *)v60 + 5);
  if ( *v27 != (struct VIDMM_LOCAL_ALLOC *)((char *)v60 + 32) )
    goto LABEL_106;
  *(_QWORD *)v26 = (char *)v60 + 32;
  *((_QWORD *)v15 + 6) = v27;
  *v27 = v26;
  *((_QWORD *)v60 + 5) = v26;
  if ( (*((_BYTE *)v10 + 41064) & 0x20) != 0 )
  {
    if ( (**((_DWORD **)a3 + 46) & 0x10000008) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 3) + 444LL) & 0x10) != 0 )
      {
        v28 = *((_QWORD *)a3 + 26);
      }
      else
      {
        v29 = *((_QWORD *)a3 + 27);
        v73 = 0LL;
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, bool, unsigned __int64 *))(*(_QWORD *)v29 + 56LL))(
                v29,
                *((_QWORD *)a3 + 28),
                0LL,
                *(_QWORD *)(v62 + 16),
                1,
                a5,
                &v73);
      }
    }
    else
    {
      v28 = *((_QWORD *)v60 + 2);
    }
    *((_QWORD *)v15 + 85) = v28;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
  v30 = v60;
  LOBYTE(v73) = 0;
  if ( (struct VIDMM_MULTI_ALLOC *)v66 != v65 )
  {
    if ( v60 != *((struct VIDMM_LOCAL_ALLOC **)a3 + 6) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 46) + 8LL) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v68,
        (struct _KTHREAD **)v10 + 5031);
      v32 = (_QWORD *)((char *)a3 + 272);
      if ( *((_QWORD *)a3 + 34) )
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v31, a3, v63);
        v32 = (_QWORD *)((char *)a3 + 272);
      }
      if ( (*((_BYTE *)a3 + 32) & 0x60) == 0x60 )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 1) + 32LL)
                        + 8LL * *(unsigned int *)(*((_QWORD *)v10 + 3) + 240LL));
        v34 = *(_QWORD **)(v33 + 96);
        v35 = v33 + 88;
        if ( *v34 != v35 )
          goto LABEL_106;
        *v32 = v35;
        v32[1] = v34;
        *v34 = v32;
        *(_QWORD *)(v35 + 8) = v32;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
      v30 = v60;
    }
  }
  if ( (**((_DWORD **)a3 + 46) & 0x40000000) != 0 )
  {
    if ( (*((_DWORD *)v10 + 1746) & 2) != 0 )
    {
      v36 = *(_QWORD *)v30;
      if ( (**(_DWORD **)(v36 + 368) & 0x20000000) != 0 && v60 == *(struct VIDMM_LOCAL_ALLOC **)(v36 + 48) )
      {
        v11 = -1071775487;
        goto LABEL_89;
      }
    }
    v37 = VIDMM_GLOBAL::PinOneAllocation(v10, v15, 0LL, 0, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
    v11 = v37;
    if ( v37 < 0 )
    {
      _InterlockedAdd(&dword_14008A770, 1u);
      WdLogSingleEntry2(6LL, v15, v37);
      WdLogGlobalForLineNumber = 4897;
      DxgkLogInternalTriageEvent(v38, 262145LL);
      v10 = this;
      goto LABEL_89;
    }
    DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
    LOBYTE(v73) = 1;
    if ( *((_BYTE *)a3 + 41) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v39) + 24) = a3;
        WdLogGlobalForLineNumber = 4916;
      }
      goto LABEL_14;
    }
    if ( (*((_BYTE *)a3 + 32) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v39) + 24) = a3;
        WdLogGlobalForLineNumber = 4925;
      }
      goto LABEL_18;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
  }
  else
  {
    v40 = a2;
    v41 = a2[3];
    if ( !v41
      || (*((_BYTE *)v41 + 1919)
       || *((_DWORD *)v41 + 116) == 2 && *(int *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 3044LL) >= 2000)
      && (*((_DWORD *)a3 + 6) & 0x2000000) == 0 )
    {
      goto LABEL_72;
    }
    v63 = 0LL;
    v66 = 0LL;
    v65 = v15;
    v64 = *(struct _VIDSCH_SYNC_OBJECT **)(32LL * ((*(_DWORD *)(v62 + 52) >> 2) & 0x3F)
                                         + *(_QWORD *)(*((_QWORD *)v15 + 1) + 72LL));
    Resident = VIDMM_GLOBAL::MakeResident(v10, v64, &v65, 1uLL, 0, (unsigned __int64 *)&v63, &v66);
    v11 = Resident;
    if ( Resident == 259 )
    {
      v64 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v64 + 11);
      v73 = (unsigned __int64)v63;
      VIDMM_GLOBAL::WaitForFences(v10, &v64, &v73, 1u, 0LL, 0LL);
      v11 = 0;
    }
    else if ( Resident < 0 )
    {
      goto LABEL_89;
    }
  }
  v40 = a2;
LABEL_72:
  v43 = a7;
  *((_DWORD *)v15 + 7) |= 0x40u;
  *v43 = v15;
  LOBYTE(a7) = byte_14008A201 & 0x10;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v44 = *((_QWORD *)v15 + 2);
    if ( v44 )
    {
      v61 = *(_DWORD *)(v44 + 16);
      v45 = *(_QWORD *)(v44 + 40);
      if ( v45 )
      {
        v46 = *(_DWORD *)(v45 + 16);
        v67 = *(_QWORD *)(v45 + 48);
        v72 = v46;
      }
    }
    v64 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a3 + 28);
    if ( (**((_DWORD **)a3 + 46) & 8) != 0 )
      v47 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 26);
    else
      v47 = (struct VIDMM_ALLOC **)*((_QWORD *)v60 + 2);
    a7 = v47;
    if ( v44 )
    {
      v48 = *(_QWORD *)(v44 + 40);
      if ( v48 )
        v7 = *(_QWORD *)(v48 + 56);
      v73 = *(_QWORD *)(v44 + 40);
    }
    else
    {
      v73 = 0LL;
    }
    v49 = *((_QWORD *)v10 + 3);
    v50 = v40[3];
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      v73,
      &EventCreateDeviceAllocation,
      v67,
      CurrentProcessId,
      v50,
      v49,
      v15,
      a3,
      v73,
      v7,
      v61,
      v72,
      v67,
      a7,
      v64);
    v10 = this;
  }
  v52 = *(_QWORD *)(v62 + 16);
  _InterlockedAdd((volatile signed __int32 *)v10 + 1908, 1u);
  _InterlockedAdd64((volatile signed __int64 *)v10 + 955, v52);
  return v11;
}
