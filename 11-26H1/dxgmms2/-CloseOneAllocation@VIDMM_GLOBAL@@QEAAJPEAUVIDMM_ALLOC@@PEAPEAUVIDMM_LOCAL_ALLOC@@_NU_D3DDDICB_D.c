/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18
 * Callers:
 *     ?CloseFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A4F90 (-CloseFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENC.c)
 *     ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70 (-OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4AA8 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDIC.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKW4_DXGK_PAGESIZE@@5KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DD45C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x140105120 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x140116600 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x14002FE80 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003DCC4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline @ 0x14004DD14 (Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400CF348 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5CF0 (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14010F3AC (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14011D298 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  __int64 v6; // r15
  __int64 v10; // rsi
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  VIDMM_DEVICE *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rcx
  struct CVirtualAddressAllocator *v21; // rax
  CVirtualAddressAllocator *v22; // r15
  char v23; // r14
  bool v24; // r8
  struct VIDMM_ALLOC **v25; // r8
  struct VIDMM_ALLOC **v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // r14
  char **v30; // rax
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  bool v32; // r8
  __int64 v33; // r12
  __int64 v34; // r13
  HANDLE CurrentProcessId; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  _QWORD v40[12]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v41[80]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v42; // [rsp+158h] [rbp+58h]
  __int64 v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+160h] [rbp+60h]
  unsigned int v45; // [rsp+168h] [rbp+68h]

  v6 = *((_QWORD *)a2 + 1);
  v43 = v6;
  v42 = 0;
  v10 = **(_QWORD **)a2;
  v45 = 0;
  v39 = 0LL;
  v38 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 5370;
  }
  if ( a3 )
    *a3 = *(struct VIDMM_LOCAL_ALLOC **)a2;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v12 = *((_QWORD *)a2 + 2);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 16);
      v14 = *(_QWORD *)(v12 + 40);
      v42 = v13;
      if ( v14 )
      {
        v39 = *(_QWORD *)(v14 + 48);
        v45 = *(_DWORD *)(v14 + 16);
      }
    }
    if ( (**(_DWORD **)(v10 + 368) & 8) != 0 )
      v15 = *(_QWORD *)(v10 + 208);
    else
      v15 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    v38 = v15;
  }
  v16 = (VIDMM_DEVICE *)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)v16 & 1) == 0 )
  {
    v17 = *((_QWORD *)a2 + 1);
    if ( v17 && *(_QWORD *)(v17 + 24) || (*(_DWORD *)(v10 + 32) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 32) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, a2, (unsigned int)a3, a5, 0LL);
        goto LABEL_27;
      }
      *((_DWORD *)a2 + 7) |= 4u;
      *((_DWORD *)a2 + 8) = (unsigned int)v16 | 1;
    }
    else
    {
      *((_DWORD *)a2 + 7) |= 4u;
      if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(v16, a2);
      if ( (*(_DWORD *)(v10 + 24) & 4) != 0 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)this + 16LL);
        if ( v18 )
        {
          if ( *(struct VIDMM_ALLOC **)(v18 + 248) == a2 )
            *(_QWORD *)(v18 + 248) = 0LL;
        }
      }
    }
    KeSetEvent((PRKEVENT)a2 + 3, 0, 0);
  }
LABEL_27:
  if ( a4 && (*((_DWORD *)a2 + 8) & 1) != 0 && !KeReadStateEvent((PRKEVENT)a2 + 3) )
  {
    WdLogSingleEntry2(4LL, a2, -1071775486LL);
    result = 3223191810LL;
    WdLogGlobalForLineNumber = 5486;
    *a6 = (struct _KEVENT *)((char *)a2 + 72);
    return result;
  }
  KeWaitForSingleObject((char *)a2 + 72, Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct VIDMM_GLOBAL_ALLOC *)v10);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = a2;
    WdLogGlobalForLineNumber = 5528;
  }
  if ( *((_QWORD *)a2 + 85) )
  {
    if ( (**(_DWORD **)(v10 + 368) & 0x10000008) != 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x10) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 216) + 64LL))(
        *(_QWORD *)(v10 + 216),
        *(_QWORD *)(v10 + 224));
    *((_QWORD *)a2 + 85) = 0LL;
  }
  if ( !(unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
  {
    v30 = (char **)((char *)a2 + 648);
    goto LABEL_59;
  }
  if ( !(unsigned int)Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((struct VIDMM_ALLOC **)a2 + 81) != (struct VIDMM_ALLOC *)((char *)a2 + 648) )
    {
LABEL_60:
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      {
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                    *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                    *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                    (*(_DWORD *)(*(_QWORD *)v10 + 52LL) >> 2) & 0x3F);
        CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, a2);
      }
      else
      {
        memset(v40, 0, 0x58uLL);
        v40[0] = -4294967175LL;
        v40[2] = a2;
        VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v40, v32);
      }
      goto LABEL_48;
    }
    v30 = (char **)((char *)a2 + 664);
LABEL_59:
    if ( *v30 == (char *)v30 )
      goto LABEL_48;
    goto LABEL_60;
  }
  v21 = VIDMM_PROCESS::GetVirtualAddressAllocator(
          *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          (*(_DWORD *)(*(_QWORD *)v10 + 52LL) >> 2) & 0x3F);
  v22 = v21;
  v23 = 0;
  if ( v21 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v41,
      (struct CVirtualAddressAllocator *)((char *)v21 + 64),
      *((_QWORD *)v21 + 9) != (_QWORD)KeGetCurrentThread());
    if ( *((struct VIDMM_ALLOC **)a2 + 81) != (struct VIDMM_ALLOC *)((char *)a2 + 648)
      || *((struct VIDMM_ALLOC **)a2 + 83) != (struct VIDMM_ALLOC *)((char *)a2 + 664) )
    {
      v23 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
    if ( v23 )
    {
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      {
        CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v22, a2);
      }
      else
      {
        memset(v40, 0, 0x58uLL);
        v40[0] = -4294967175LL;
        v40[2] = a2;
        VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v40, v24);
      }
    }
  }
  v6 = v43;
LABEL_48:
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v10 + 136));
  v25 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 5);
  if ( v25[1] != (struct VIDMM_ALLOC *)((char *)a2 + 40)
    || (v26 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 6), *v26 != (struct VIDMM_ALLOC *)((char *)a2 + 40)) )
  {
    __fastfail(3u);
  }
  *v26 = (struct VIDMM_ALLOC *)v25;
  v25[1] = (struct VIDMM_ALLOC *)v26;
  v44 = *(_QWORD *)(v10 + 224);
  VIDMM_GLOBAL::CloseLocalAllocation(this, *(struct VIDMM_LOCAL_ALLOC **)a2, a3 == 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v10 + 136));
  if ( (byte_14008A201 & 0x10) == 0 )
    goto LABEL_67;
  v27 = *((_QWORD *)a2 + 2);
  if ( v27 )
  {
    v28 = *(_QWORD *)(v27 + 40);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 56);
LABEL_63:
      v33 = *(_QWORD *)(v27 + 40);
      goto LABEL_64;
    }
  }
  v29 = 0LL;
  v33 = 0LL;
  if ( v27 )
    goto LABEL_63;
LABEL_64:
  v34 = *((_QWORD *)this + 3);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 24);
  CurrentProcessId = PsGetCurrentProcessId();
  McTemplateK0ppppppppppppq_EtwWriteTransfer(
    v45,
    &EventDestroyDeviceAllocation,
    v39,
    CurrentProcessId,
    v6,
    v34,
    a2,
    v10,
    v33,
    v29,
    v42,
    v45,
    v39,
    v38,
    v44);
LABEL_67:
  v36 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 1912);
  _InterlockedAdd64((volatile signed __int64 *)this + 957, v36);
  VIDMM_DEVICE::NotifyAllocationClosed(*((VIDMM_DEVICE **)a2 + 1), a2);
  if ( *((_DWORD *)a2 + 174) )
  {
    v37 = *((int *)a2 + 174);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 56LL, a2, v37, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  operator delete(a2);
  return 0LL;
}
