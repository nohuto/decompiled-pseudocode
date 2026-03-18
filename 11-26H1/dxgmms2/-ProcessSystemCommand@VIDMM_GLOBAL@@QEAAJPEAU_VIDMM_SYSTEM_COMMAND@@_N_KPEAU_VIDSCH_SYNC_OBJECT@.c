/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8
 * Callers:
 *     ExecutePagingCommand @ 0x1400B8780 (ExecutePagingCommand.c)
 *     VidMmSubmitPacket @ 0x1400CF830 (VidMmSubmitPacket.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromCpu @ 0x1400069F0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     NeedsApertureForLock @ 0x1400399DC (NeedsApertureForLock.c)
 *     ?SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z @ 0x14004CC40 (-SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x140099728 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009B7C8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009D78C (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009D838 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1400A1660 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1400A2228 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1400A351C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE52C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400CF348 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D9E38 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E2070 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400E7230 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1401026D8 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x140104C9C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x140105CBC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x140105F78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010B81C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010DC98 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x140112488 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x14011677C (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x14011C720 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1401231F0 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14012500C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        bool a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  bool v5; // r12
  unsigned int v7; // eax
  unsigned int v9; // ebx
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // rcx
  struct VIDMM_ALLOC *v13; // rbx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  int *v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // r9
  char v23; // al
  __int64 *v24; // r13
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 *v27; // r12
  __int64 v28; // rbx
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r8d
  __int64 *v34; // r9
  _QWORD *v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rax
  CVirtualAddressAllocator *v39; // rbx
  __int64 v40; // rcx
  unsigned int v41; // r12d
  unsigned int i; // ebx
  __int64 v43; // rcx
  int inited; // eax
  __int64 v45; // rcx
  VIDMM_DEVICE *v46; // rbx
  __int64 v47; // rdx
  char v48; // r9
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rcx
  int updated; // eax
  struct VIDMM_DEVICE *v53; // rdx
  __int64 v54; // rcx
  VIDMM_GLOBAL *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v62; // rdx
  VIDMM_ALLOC *v63; // r10
  __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // r9
  __int64 v67; // r10
  struct VIDMM_ALLOC **v68; // [rsp+20h] [rbp-71h]
  int v69; // [rsp+20h] [rbp-71h]
  bool v70[8]; // [rsp+50h] [rbp-41h] BYREF
  struct VIDMM_ALLOC *v71; // [rsp+58h] [rbp-39h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v72; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int64 v73; // [rsp+68h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-21h] BYREF

  v5 = a3;
  v72 = a5;
  v7 = *(_DWORD *)a2;
  v70[0] = a3;
  v73 = a4;
  v9 = 0;
  v10 = 0;
  VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, v7);
  v12 = *(int *)a2;
  if ( (int)v12 <= 200 )
  {
    if ( (_DWORD)v12 == 200 )
    {
      VIDMM_GLOBAL::VidMmOpCloseAllocationCommand(this, *((struct VIDMM_ALLOC **)a2 + 2), (unsigned __int8 *)a2 + 48);
      goto LABEL_10;
    }
    if ( (int)v12 <= 118 )
    {
      if ( (_DWORD)v12 == 118 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
        v10 = inited;
        if ( inited < 0 )
        {
          WdLogSingleEntry1(1LL, inited);
          WdLogGlobalForLineNumber = 10134;
          DxgkLogInternalTriageEvent(v45, 0x40000LL);
        }
        goto LABEL_10;
      }
      if ( (int)v12 > 110 )
      {
        if ( (_DWORD)v12 != 112 )
        {
          switch ( (_DWORD)v12 )
          {
            case 'q':
              v71 = 0LL;
              v32 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                      this,
                      (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                      &v71);
              goto LABEL_41;
            case 'r':
              v54 = *((_QWORD *)this + 5064);
              memset(&ApcState, 0, sizeof(ApcState));
              KeStackAttachProcess(*(PRKPROCESS *)(v54 + 16), &ApcState);
              *((_QWORD *)a2 + 5) = *((_QWORD *)this + 5064);
              updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v55, a2);
              break;
            case 's':
              v38 = *((_QWORD *)a2 + 6);
              v39 = *(CVirtualAddressAllocator **)(v38 + 24);
              if ( v39 )
              {
                if ( *((_QWORD *)a2 + 5) )
                {
                  v40 = *((_QWORD *)this + 5064);
                  memset(&ApcState, 0, sizeof(ApcState));
                  KeStackAttachProcess(*(PRKPROCESS *)(v40 + 16), &ApcState);
                  CVirtualAddressAllocator::DestroyVaAllocator(v39);
                  KeUnstackDetachProcess(&ApcState);
                }
                else
                {
                  CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v38 + 24));
                }
                *(_QWORD *)(*((_QWORD *)a2 + 6) + 24LL) = 0LL;
              }
              goto LABEL_9;
            case 't':
              v53 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
              v70[0] = 0;
              v71 = 0LL;
              v32 = VIDMM_GLOBAL::PageInDeviceInternal(this, v53, 0, v70, &v71);
              goto LABEL_41;
            case 'u':
              v51 = *((_QWORD *)this + 5064);
              memset(&ApcState, 0, sizeof(ApcState));
              KeStackAttachProcess(*(PRKPROCESS *)(v51 + 16), &ApcState);
              updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                          this,
                          *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                          1);
              break;
            default:
LABEL_123:
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 23LL, -1073741811LL, this, v12);
              WdLogGlobalForLineNumber = 213;
              goto LABEL_124;
          }
          v10 = updated;
          KeUnstackDetachProcess(&ApcState);
          goto LABEL_10;
        }
        v24 = (__int64 *)*((_QWORD *)a2 + 5);
        v25 = *v24;
        v26 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(*v24 + 52) >> 2) & 0x3F));
        if ( (*(_DWORD *)(*v24 + 56) & 1) != 0 )
        {
          VIDMM_GLOBAL::xWaitForAllPagingEngines(
            this,
            (struct _VIDSCH_SYNC_OBJECT **)this + 741,
            (const unsigned __int64 *)this + 677,
            *((_DWORD *)this + 1738),
            0LL,
            0xFFFFFFFF);
          LOBYTE(v69) = 0;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v26 + 240LL))(
            v26,
            v25,
            0LL,
            0LL,
            v69,
            0LL);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, (*(_DWORD *)(*v24 + 52) >> 2) & 0x3F, 0, 0LL, 0LL, 0, 0);
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 216LL))(v26, v25);
        v9 = 0;
      }
      else
      {
        if ( (_DWORD)v12 == 110 )
        {
          if ( *((_DWORD *)this + 1738) )
          {
            do
            {
              v50 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v9);
              v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 128LL))(v50);
              if ( v10 < 0 )
                break;
              ++v9;
            }
            while ( v9 < *((_DWORD *)this + 1738) );
            goto LABEL_9;
          }
          goto LABEL_10;
        }
        v17 = (unsigned int)(v12 - 101);
        if ( (_DWORD)v12 == 101 )
        {
          if ( *((_DWORD *)this + 11342) && KeCancelTimer((PKTIMER)((char *)this + 45304)) )
            VIDMM_GLOBAL::SetDelayedEvictionTimerScheduled(this);
          if ( *((_DWORD *)this + 1738) )
          {
            do
            {
              v18 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v9);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 120LL))(v18, v17);
              v19 = *((_DWORD *)this + 1738);
              ++v9;
            }
            while ( v9 < v19 );
            v20 = 0LL;
            v21 = 0;
            if ( v19 )
            {
              do
              {
                v22 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v21);
                v23 = *(_BYTE *)(v22 + 557);
                if ( (v23 & 2) != 0 )
                {
                  v20 |= 1LL << v21;
                  *(_BYTE *)(v22 + 557) = v23 & 0xFD;
                }
                ++v21;
              }
              while ( v21 < *((_DWORD *)this + 1738) );
            }
          }
          else
          {
            v20 = 0LL;
          }
          VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, v20);
          goto LABEL_9;
        }
        if ( (_DWORD)v12 != 102 )
        {
          switch ( (_DWORD)v12 )
          {
            case 'g':
              VIDMM_GLOBAL::CleanupPrimaryAllocation(this, *((struct VIDMM_GLOBAL_ALLOC **)a2 + 5));
              goto LABEL_10;
            case 'h':
              v47 = *((_QWORD *)a2 + 2);
              v48 = 0;
              v49 = 4;
LABEL_131:
              v70[0] = 0;
              v71 = 0LL;
              v32 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, v47, v49, v48, v70, (__int64 *)&v71, 0, -1LL);
              goto LABEL_41;
            case 'i':
              VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 0);
              goto LABEL_10;
            case 'j':
              VIDMM_GLOBAL::ReportVidMmStateWorker(this);
              goto LABEL_10;
          }
          goto LABEL_123;
        }
        v41 = 0;
        for ( i = *((_DWORD *)a2 + 10); v41 < *((_DWORD *)this + 1738); ++v41 )
        {
          v43 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v41);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v43 + 112LL))(
            v43,
            i,
            *((_QWORD *)a2 + 7),
            *((_QWORD *)a2 + 6));
        }
        if ( (i & 8) != 0 )
        {
          v9 = 0;
        }
        else
        {
          VIDMM_GLOBAL::PurgePageTables(this, i);
          v9 = 1;
          VIDMM_GLOBAL::DoDeferredUnlock(this);
        }
      }
    }
    else
    {
      if ( (int)v12 <= 128 )
      {
        if ( (_DWORD)v12 == 128 )
        {
          v57 = *((_QWORD *)a2 + 5);
          if ( *((_DWORD *)a2 + 12) )
            VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v57);
          else
            VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
              *(VIDMM_LINEAR_POOL **)(v57 + 256),
              *(void **)(v57 + 464),
              *(_QWORD *)(v57 + 432) - *(_QWORD *)(v57 + 472),
              *(_QWORD *)(v57 + 432));
          goto LABEL_10;
        }
        if ( (_DWORD)v12 != 120 )
        {
          switch ( (_DWORD)v12 )
          {
            case 'y':
              v13 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 2);
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          *(VIDMM_PROCESS **)(*(_QWORD *)v13 + 8LL),
                                          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                          (*(_DWORD *)(***(_QWORD ***)v13 + 52LL) >> 2) & 0x3F);
              CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v13);
LABEL_9:
              v9 = 0;
              goto LABEL_10;
            case '{':
              v46 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
              if ( *((_BYTE *)a2 + 48) )
              {
                VIDMM_DEVICE::IndefinitelySuspend(v46, *((_BYTE *)a2 + 49));
                VIDMM_DEVICE::FaultAllAllocations(v46);
              }
              else
              {
                VIDMM_DEVICE::EnsureSchedulable(v46, 0);
              }
              goto LABEL_9;
            case '|':
              VIDMM_GLOBAL::TrimOfferCommitmentInternal(
                this,
                *((struct VIDMM_PROCESS **)a2 + 5),
                *((struct DXGDECOMMITITERATOR **)a2 + 6),
                *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
                *((_QWORD *)a2 + 8),
                *((unsigned __int64 **)a2 + 9));
              goto LABEL_10;
            case '~':
              VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
                (__int64)this,
                *((_DWORD *)a2 + 1),
                *((unsigned int *)a2 + 10),
                *((unsigned __int16 *)a2 + 22),
                (unsigned __int64)v68,
                *((_DWORD *)a2 + 14),
                *((_QWORD *)a2 + 8),
                *((_QWORD *)a2 + 9),
                *((_DWORD *)a2 + 20));
              goto LABEL_10;
            case '\x7F':
              if ( *((_DWORD *)this + 1738) )
              {
                do
                {
                  v56 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * (unsigned __int16)v9);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 136LL))(v56);
                  LOWORD(v9) = v9 + 1;
                }
                while ( (unsigned int)(unsigned __int16)v9 < *((_DWORD *)this + 1738) );
              }
              goto LABEL_9;
          }
          goto LABEL_123;
        }
        v32 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                this,
                *((struct VIDMM_PROCESS **)a2 + 5),
                *((struct CVirtualAddressAllocator **)a2 + 6),
                *((_QWORD *)a2 + 7),
                (unsigned __int64)v68,
                *((_BYTE *)a2 + 72));
LABEL_41:
        v10 = v32;
        goto LABEL_10;
      }
      if ( (_DWORD)v12 != 129 )
      {
        switch ( (_DWORD)v12 )
        {
          case 0x82:
            v32 = VIDMM_GLOBAL::EnableIoMmuIsolation(this);
            break;
          case 0x83:
            VIDMM_GLOBAL::DisableIoMmuIsolation(this);
            goto LABEL_10;
          case 0x84:
            v58 = *((unsigned __int16 *)a2 + 20);
            v59 = *((_DWORD *)this + 1738);
            if ( (_WORD)v58 == 0xFFFF )
            {
              if ( v59 )
              {
                do
                {
                  v60 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * (unsigned __int16)v9);
                  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v60 + 56LL))(
                          v60,
                          *((unsigned __int16 *)a2 + 21));
                  if ( v10 < 0 )
                    break;
                  LOWORD(v9) = v9 + 1;
                }
                while ( (unsigned int)(unsigned __int16)v9 < *((_DWORD *)this + 1738) );
              }
              goto LABEL_9;
            }
            if ( (unsigned int)v58 >= v59 )
            {
              v10 = -1073741811;
              goto LABEL_10;
            }
            v61 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v58);
            v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v61 + 56LL))(
                    v61,
                    *((unsigned __int16 *)a2 + 21));
            break;
          case 0x85:
            VIDMM_GLOBAL::TransferTransportBufferSystemCommand(
              (__int64)this,
              *((_QWORD *)a2 + 5),
              *((_QWORD **)a2 + 6),
              *((_DWORD *)a2 + 14),
              *((unsigned __int64 **)a2 + 8));
            goto LABEL_10;
          default:
            goto LABEL_123;
        }
        goto LABEL_41;
      }
      v27 = (__int64 *)*((_QWORD *)a2 + 5);
      v28 = *v27;
      v29 = *v27 + 304;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v29, 0LL);
      *(_QWORD *)(v29 + 8) = KeGetCurrentThread();
      v30 = *(_DWORD *)(v28 + 184);
      v9 = 0;
      if ( !v30 )
      {
        v31 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*((_DWORD *)v27 + 13) >> 2) & 0x3F));
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 296LL))(v31, v27);
      }
      *(_QWORD *)(v29 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v29, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = v70[0];
    goto LABEL_10;
  }
  if ( (_DWORD)v12 == 205 )
  {
    VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 1);
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 700LL));
    goto LABEL_10;
  }
  v62 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(unsigned int)(v12 - 206);
  if ( (_DWORD)v12 != 206 )
  {
    if ( (_DWORD)v12 == 216 )
    {
      LODWORD(v62) = *((unsigned __int8 *)a2 + 48);
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(*((_QWORD *)a2 + 5), v62, v11, (__int64)a2 + 56);
      goto LABEL_10;
    }
    goto LABEL_123;
  }
LABEL_124:
  v63 = (VIDMM_ALLOC *)*((_QWORD *)a2 + 2);
  if ( *(int *)(*((_QWORD *)a2 + 5) + 184LL) > 0
    && NeedsApertureForLock((__int64)this, *((_DWORD **)a2 + 5))
    && (*(_DWORD *)(v65 + 24) & 1) == 0 )
  {
    WdLogSingleEntry1(3LL, v64);
    WdLogGlobalForLineNumber = 9912;
    v10 = -1073741823;
    goto LABEL_10;
  }
  if ( VIDMM_ALLOC::HasAnyResidencyReferences(v63) && *(_WORD *)(*(_QWORD *)(v66 + 368) + 8LL) < 2u )
  {
    v48 = 1;
    v49 = 0;
    v47 = v67;
    goto LABEL_131;
  }
LABEL_10:
  v15 = (int *)*((_QWORD *)a2 + 4);
  if ( v15 )
    *v15 = v10;
  if ( !v9 )
  {
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, *((struct _KEVENT **)a2 + 1), v5, v73, v72);
    goto LABEL_14;
  }
  VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  VIDMM_GLOBAL::xWaitForAllPagingEngines(
    this,
    (struct _VIDSCH_SYNC_OBJECT **)this + 741,
    (const unsigned __int64 *)this + 677,
    *((_DWORD *)this + 1738),
    0LL,
    0xFFFFFFFF);
  VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
  if ( v5 )
  {
    v33 = 0;
    v34 = 0LL;
    v35 = 0LL;
    v36 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    v37 = 0;
    if ( !*(_BYTE *)(v36 + 63) )
    {
      v33 = *(_DWORD *)(v36 + 84);
      v34 = *(__int64 **)(v36 + 328);
LABEL_45:
      VidSchSignalSyncObjectsFromGpu(v37, (unsigned __int64)v35, v33, v34, 1u, (__int64)&v72, 0, &v73, 0);
      goto LABEL_14;
    }
    v35 = *(_QWORD **)(v36 + 344);
    if ( *v35 )
    {
      v37 = *(_DWORD *)(v36 + 84);
      goto LABEL_45;
    }
    VidSchSignalSyncObjectsFromCpu(1u, &v72, 0, &v73);
  }
  else
  {
    KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
LABEL_14:
  if ( *(_DWORD *)a2 == 200 )
    KeSetEvent((PRKEVENT)(*((_QWORD *)a2 + 2) + 72LL), 0, 0);
  return (unsigned int)v10;
}
