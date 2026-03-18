/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0
 * Callers:
 *     ?Execute@VIDMM_TASK_PROCESS_TERMINATIONS@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B85D0 (-Execute@VIDMM_TASK_PROCESS_TERMINATIONS@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@.c)
 *     ExecutePagingCommand @ 0x1400B8780 (ExecutePagingCommand.c)
 *     VidMmSubmitPacket @ 0x1400CF830 (VidMmSubmitPacket.c)
 *     VidMmProcessPendingTerminations @ 0x1400CFDF0 (VidMmProcessPendingTerminations.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1400383B8 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 *     NeedsApertureForLock @ 0x1400399DC (NeedsApertureForLock.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x14003FAB4 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x14009AFF0 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x14009B954 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400CDAE8 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400E8234 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x140101B04 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1401022D0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x140116DE4 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140119910 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x14011A16C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x14011A5B4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011C0EC (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14011E6E0 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x140126F0C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        char a7,
        struct VIDMM_ALLOC **a8)
{
  __int64 v8; // rbx
  bool *v10; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  _DWORD **v15; // r13
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // eax
  _DWORD *v22; // rcx
  __int64 v23; // r8
  bool *v24; // rbx
  unsigned int *v25; // rax
  unsigned int inited; // eax
  unsigned int updated; // eax
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v31; // eax
  int v32; // ecx
  __int64 v33; // rcx
  unsigned int v34; // r8d
  int v35; // ecx
  int v36; // eax
  __int64 v37; // r15
  char v38; // r9
  VIDMM_PROCESS *v39; // rcx
  unsigned __int16 v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rcx
  VIDMM_GLOBAL *v43; // rcx
  char v44; // r15
  struct VIDMM_GLOBAL_ALLOC *v45; // rbx
  __int64 v46; // r8
  char v47; // r15
  VIDMM_GLOBAL *v48; // rcx
  _QWORD *QuadPart; // rax
  _QWORD *i; // rbx
  _QWORD *v51; // r15
  int v52; // [rsp+20h] [rbp-C9h]
  unsigned int v53; // [rsp+20h] [rbp-C9h]
  void **v54; // [rsp+28h] [rbp-C1h]
  int v55; // [rsp+30h] [rbp-B9h]
  int v56; // [rsp+30h] [rbp-B9h]
  bool v58; // [rsp+48h] [rbp-A1h]
  unsigned __int8 v59[7]; // [rsp+49h] [rbp-A0h] BYREF
  struct VIDMM_ALLOC **v60; // [rsp+50h] [rbp-99h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-91h] BYREF
  int v62; // [rsp+60h] [rbp-89h]
  __int64 v63; // [rsp+68h] [rbp-81h]
  __int64 v64; // [rsp+70h] [rbp-79h]
  __int64 v65; // [rsp+78h] [rbp-71h] BYREF
  char v66; // [rsp+80h] [rbp-69h]
  struct _VIDSCH_SYNC_OBJECT *v67; // [rsp+90h] [rbp-59h]
  char v68; // [rsp+A0h] [rbp-49h]
  struct _KAPC_STATE v69; // [rsp+A8h] [rbp-41h] BYREF
  VIDMM_PROCESS *v70; // [rsp+D8h] [rbp-11h]

  v8 = 0LL;
  v58 = a4;
  Interval.QuadPart = 0LL;
  v10 = a3;
  v67 = a6;
  v12 = 0LL;
  v60 = a8;
  v64 = 0LL;
  *a8 = 0LL;
  v13 = *((_QWORD *)a2 + 2);
  v63 = 0LL;
  if ( v13 )
  {
    v14 = *((_QWORD *)this + 5040);
    Interval = *(union _LARGE_INTEGER *)v13;
    v12 = *(_QWORD *)Interval.QuadPart;
    v64 = **(_QWORD **)Interval.QuadPart;
    v63 = *(_QWORD *)(v14 + 8LL * ((*(_DWORD *)(v64 + 52) >> 2) & 0x3F));
    v10 = a3;
  }
  v15 = (_DWORD **)*((_QWORD *)a2 + 1);
  v16 = 0;
  v59[0] = 0;
  if ( !v15 )
    v15 = *(_DWORD ***)(v13 + 8);
  *v10 = 0;
  v17 = *((int *)this + 2);
  v18 = *(int *)a2;
  if ( (_DWORD)v17 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 64LL, this, v17, v18);
    WdLogGlobalForLineNumber = 213;
LABEL_107:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)&v65,
      (struct _KTHREAD **)(*((_QWORD *)a2 + 4) + 64LL));
    VIDMM_GLOBAL::CleanupVadReference(v43, (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 32));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v65);
    v8 = 0LL;
    goto LABEL_51;
  }
  ++*((_QWORD *)this + 570);
  v19 = 0LL;
  *((_DWORD *)this + 2) = v18;
  *((_DWORD *)this + 14) = -1;
  *((_QWORD *)this + 870) = v15;
  *((_QWORD *)this + 871) = v13;
  v62 = 0;
  if ( *((_DWORD *)this + 1738) )
  {
    while ( 1 )
    {
      v8 = (unsigned int)v19;
      if ( (byte_14008A201 & 1) != 0 )
      {
        McTemplateK0x_EtwWriteTransfer(
          v19,
          &EventPagingStartPreparation,
          (__int64)a3,
          *((_QWORD *)this + (unsigned int)v19 + 144));
        LODWORD(v19) = v62;
      }
      v20 = *((_DWORD *)this + v8 + 416);
      if ( v20 != *((_DWORD *)this + v8 + 480) )
        break;
      v21 = *((_DWORD *)this + v8 + 544);
      if ( v21 != *((_DWORD *)this + v8 + 608) )
        break;
      v19 = (unsigned int)(v19 + 1);
      *((_DWORD *)this + v8 + 948) = 0;
      *((_DWORD *)this + v8 + 1012) = v20;
      *((_DWORD *)this + v8 + 1076) = v21;
      v62 = v19;
      if ( (unsigned int)v19 >= *((_DWORD *)this + 1738) )
      {
        v8 = 0LL;
        goto LABEL_13;
      }
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_62;
  }
LABEL_13:
  v22 = v15[4];
  if ( v22 && (*((_BYTE *)v22 + 212) || _InterlockedCompareExchange(v22 + 52, 0, 0)) || VIDMM_GLOBAL::IsTdrPending(this) )
  {
    *((_DWORD *)a2 + 21) = -1071775232;
    *((_BYTE *)a2 + 80) = 1;
  }
  if ( !*((_BYTE *)a2 + 80) )
    goto LABEL_18;
  if ( *(_DWORD *)a2 == 113 )
    goto LABEL_107;
LABEL_51:
  v30 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 206 || v30 == 113 || (v31 = v30 - 203, v31 <= 0xB) && (v32 = 2273, _bittest(&v32, v31)) )
  {
    v16 = *((_DWORD *)a2 + 21);
    goto LABEL_24;
  }
LABEL_18:
  v23 = *(int *)a2;
  if ( (int)v23 <= 209 )
  {
    switch ( (_DWORD)v23 )
    {
      case 0xD1:
        v24 = a3;
        inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)v13, 1, a3, v60);
LABEL_42:
        v16 = inited;
        goto LABEL_25;
      case 0x71:
        updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                    this,
                    (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 32),
                    v60);
        break;
      case 0x77:
        updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                    this,
                    *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)a2 + 4),
                    v60);
        break;
      default:
        switch ( (_DWORD)v23 )
        {
          case 0xC8:
            VIDMM_GLOBAL::VidMmOpCloseAllocationCommand(this, (struct VIDMM_ALLOC *)v13, v59);
            break;
          case 0xCB:
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace((unsigned int)(v23 - 203)) + 24) = v13;
              WdLogGlobalForLineNumber = 11159;
            }
            if ( *(_BYTE *)(v12 + 41) )
            {
              v16 = -1071775482;
              break;
            }
            v33 = *(unsigned int *)(*(_QWORD *)(v12 + 368) + 16LL);
            if ( !(_DWORD)v33 && !_bittest(*(const signed __int32 **)(v12 + 368), 0x11u) )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(v33);
                WdLogGlobalForLineNumber = 11182;
              }
              if ( (*(_DWORD *)(v64 + 56) & 1) != 0 )
              {
                v42 = **(unsigned int **)(v12 + 368);
                if ( (v42 & 0x40000000) == 0 && ((v42 & 0x20000000) == 0 || (int)v42 >= 0) && (v42 & 0x80000) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                  {
                    WdLogNewEntry5_WdTrace(v42);
                    WdLogGlobalForLineNumber = 11195;
                  }
                  VidMmSuspendAccessToAllocation(*(struct VIDMM_WORKER_THREAD **)this, (struct VIDMM_GLOBAL_ALLOC *)v12);
                  VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)v12);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 200LL))(v63);
                }
              }
            }
            v34 = 4;
            v35 = **(_DWORD **)(v12 + 368);
            if ( (v35 & 0x20000) != 0 )
            {
              v34 = *((_DWORD *)a2 + 8);
            }
            else if ( (v35 & 0x40000000) != 0 || v35 < 0 )
            {
              v34 = 3;
            }
            if ( *((_QWORD *)a2 + 5) != -1LL )
              *(_DWORD *)(v12 + 28) |= 4u;
            v24 = a3;
            v36 = VIDMM_GLOBAL::PageInOneAllocation(
                    (__int64)this,
                    v13,
                    v34,
                    a7,
                    a3,
                    (__int64 *)v60,
                    *((_DWORD *)a2 + 9),
                    *((_QWORD *)a2 + 5));
            *(_DWORD *)(v12 + 28) &= ~4u;
            v16 = v36;
            if ( v36 >= 0 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 368) + 16LL));
            VIDMM_GLOBAL::RecommitTrimmedList(this);
            goto LABEL_25;
          case 0xCE:
            if ( *(int *)(v12 + 184) <= 0
              || !NeedsApertureForLock((__int64)this, (_DWORD *)v12)
              || (*(_DWORD *)(v12 + 24) & 1) != 0 )
            {
LABEL_39:
              if ( !VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)v13)
                || *(_WORD *)(*(_QWORD *)(v12 + 368) + 8LL) >= 2u )
              {
                break;
              }
              v55 = v8;
              v24 = a3;
              inited = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, v13, 0, a7, a3, (__int64 *)v60, v55, -1LL);
              goto LABEL_42;
            }
            WdLogSingleEntry1(3LL, v29);
            WdLogGlobalForLineNumber = 11254;
            v16 = -1073741823;
            break;
          case 0xCF:
            if ( !*(_DWORD *)(v13 + 688) && (*(_BYTE *)(v13 + 25) & 1) == 0 )
              VIDMM_GLOBAL::EvictOneAllocation(this, (struct VIDMM_ALLOC *)v13, *((_BYTE *)a2 + 32) & 1);
            _InterlockedDecrement((volatile signed __int32 *)(v13 + 700));
            break;
          case 0xD0:
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace((unsigned int)(v23 - 207)) + 24) = v12;
              WdLogGlobalForLineNumber = 11347;
            }
            v37 = v12 + 304;
            v65 = v37;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v37, 0LL);
            *(_QWORD *)(v37 + 8) = KeGetCurrentThread();
            v66 = 1;
            if ( *((_BYTE *)a2 + 45) )
              goto LABEL_95;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 216LL))(v63, v64);
            v68 = 0;
            v70 = *(VIDMM_PROCESS **)(Interval.QuadPart + 8);
            VIDMM_PROCESS::SafeAttach(v70, &v69);
            v38 = *((_BYTE *)a2 + 44);
            v54 = (void **)*((_QWORD *)a2 + 4);
            v53 = *((_DWORD *)a2 + 10);
            v68 = 1;
            v16 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_ALLOC *)v13, 1, v38, v53, v54, (bool *)a2 + 45);
            if ( v68 )
            {
              VIDMM_PROCESS::SafeDetach(v39, &v69);
              v68 = 0;
            }
            if ( *((_BYTE *)a2 + 45) )
            {
LABEL_95:
              DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v65);
              v24 = a3;
              v16 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, v13, 2u, 0, a3, (__int64 *)v60, 0, -1LL);
              KeEnterCriticalRegion();
              v37 = v65;
              ExAcquirePushLockExclusiveEx(v65, 0LL);
              *(_QWORD *)(v37 + 8) = KeGetCurrentThread();
            }
            else
            {
              v24 = a3;
            }
            *(_QWORD *)(v37 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v37, 0LL);
            KeLeaveCriticalRegion();
            goto LABEL_25;
          default:
            goto LABEL_114;
        }
LABEL_24:
        v24 = a3;
        goto LABEL_25;
    }
    v24 = a3;
    v16 = updated;
    if ( updated == -1073741267 )
      *a3 = 1;
    goto LABEL_25;
  }
LABEL_62:
  if ( (_DWORD)v23 != 210 )
  {
    switch ( (_DWORD)v23 )
    {
      case 0xD3:
        QuadPart = (_QWORD *)(*((_QWORD *)a2 + 4) + 112LL);
        Interval.QuadPart = (LONGLONG)QuadPart;
        for ( i = (_QWORD *)*QuadPart; i != QuadPart; i = (_QWORD *)*i )
        {
          v51 = (_QWORD *)*(i - 2);
          if ( v51 != i - 2 )
          {
            do
            {
              VIDMM_GLOBAL::EvictOneAllocation(this, (struct VIDMM_ALLOC *)(v51 - 5), 0);
              v51 = (_QWORD *)*v51;
            }
            while ( v51 != i - 2 );
            QuadPart = (_QWORD *)Interval.QuadPart;
          }
        }
        goto LABEL_24;
      case 0xD4:
        VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v13, *((_DWORD *)a2 + 8));
        goto LABEL_24;
      case 0xD5:
        VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v15);
        VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v15);
        v47 = v8;
        if ( !v15[23] )
        {
          v47 = 1;
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)&v65,
            (struct _KTHREAD **)*v15 + 5625);
          VIDMM_GLOBAL::InsertToPenaltyBox(*v15, (__int64)v15, 4u);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v65);
        }
        if ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 28) & 3) == 2 )
            VIDMM_GLOBAL::FaultOneAllocation((VIDMM_GLOBAL *)*v15, (struct VIDMM_ALLOC *)v13);
        }
        else
        {
          VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v15);
        }
        VIDMM_GLOBAL::EvictFromFaultedList(this, (struct VIDMM_DEVICE *)v15, v46);
        v16 = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v15);
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v15);
        VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v15);
        if ( v47 )
        {
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)&v65,
            (struct _KTHREAD **)*v15 + 5625);
          VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v48, (struct _LIST_ENTRY *)(v15 + 23));
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v65);
        }
        goto LABEL_24;
    }
    if ( (_DWORD)v23 != 214 )
    {
      if ( (_DWORD)v23 == 215 )
      {
LABEL_115:
        v44 = v8;
        v45 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 4);
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)&v65,
          (struct _KTHREAD **)this + 5031);
        if ( *((_QWORD *)v45 + 34) )
        {
          VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v45);
          v44 = 1;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v65);
        if ( v44 )
          VIDMM_GLOBAL::DecommitGlobalAllocation(this, v45);
        goto LABEL_24;
      }
      if ( (_DWORD)v23 == 217 )
      {
        Interval.QuadPart = -10000LL * *((unsigned int *)a2 + 8);
        KeDelayExecutionThread(0, 0, &Interval);
        goto LABEL_24;
      }
LABEL_114:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 5LL, v23, -1073741811LL, v8);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_115;
    }
    LOBYTE(a4) = *((_BYTE *)a2 + 52);
    LOBYTE(v52) = *((_BYTE *)a2 + 53);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, char *))(*(_QWORD *)v63 + 336LL))(
      v63,
      v13,
      *((unsigned int *)a2 + 8),
      a4,
      v52,
      (char *)a2 + 36);
    goto LABEL_39;
  }
  if ( !VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)v13) || v40 >= 2u )
    goto LABEL_24;
  v56 = v8;
  v24 = a3;
  v41 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, v13, 0, a7, a3, (__int64 *)v60, v56, -1LL);
  *(_DWORD *)(v12 + 24) &= ~0x4000000u;
  v16 = v41;
LABEL_25:
  if ( *v24 )
  {
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  }
  else
  {
    v25 = (unsigned int *)*((_QWORD *)a2 + 3);
    if ( v25 )
      *v25 = v16;
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, v58, a5, v67);
  }
  if ( *(_DWORD *)a2 == 200 )
  {
    KeSetEvent((PRKEVENT)(*((_QWORD *)a2 + 2) + 72LL), 0, 0);
  }
  else if ( !*v24 && v13 )
  {
    VIDMM_ALLOC::DecrementPagingPacketReferenceCount((VIDMM_ALLOC *)v13);
  }
  *((_DWORD *)a2 + 21) = v16;
  return v16;
}
