/*
 * XREFs of VidMmWorkerThreadProc @ 0x140128480
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140029178 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     McTemplateK0qqtqttp_EtwWriteTransfer @ 0x14003E248 (McTemplateK0qqtqttp_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0iq_EtwWriteTransfer @ 0x14003F5E0 (McTemplateK0iq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140099884 (-DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400C60A4 (-RecalculateBudget@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400C823C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CE160 (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidMmSubmitPacket @ 0x1400CF830 (VidMmSubmitPacket.c)
 *     VidMmProcessPendingTerminations @ 0x1400CFDF0 (VidMmProcessPendingTerminations.c)
 *     VidMmSelectPagingOperation @ 0x1400D1E60 (VidMmSelectPagingOperation.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400FE2D0 (-CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400FEC44 (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 *     ?ProcessReleaseResourceCommands@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400FFB34 (-ProcessReleaseResourceCommands@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x140100468 (-Suspend@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 *     VidMmHandleRecoverablePageInFailure @ 0x14010048C (VidMmHandleRecoverablePageInFailure.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401017C4 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x14010216C (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x140102D54 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140104FA0 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x14010A0F0 (-GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z.c)
 *     VidMmEndOperation @ 0x14010B1C8 (VidMmEndOperation.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x14010C224 (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010D82C (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010E378 (-ProcessOfferLists@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x14010E940 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010EBE0 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     VidMmBeginOperation @ 0x140110260 (VidMmBeginOperation.c)
 *     ?VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x14011BA10 (-VidMmRewindPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAG.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x14011C300 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     VidMmSetWorkerThreadStatus @ 0x14011CE30 (VidMmSetWorkerThreadStatus.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x14011D738 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1401271F8 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x14012A214 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmWorkerThreadProc(char *StartContext)
{
  __int64 v1; // r12
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v4; // si
  union _LARGE_INTEGER *v5; // rdi
  bool v6; // r15
  unsigned __int8 v7; // r13
  char *v8; // r14
  _QWORD *v9; // rax
  NTSTATUS v10; // edi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // r8
  struct VIDMM_DEVICE *v21; // r13
  struct VIDMM_PAGING_QUEUE *v22; // rsi
  struct VIDMM_PAGING_QUEUE_PACKET *v23; // rdi
  unsigned __int8 v24; // r15
  char *v25; // rdx
  int v26; // eax
  int v27; // esi
  __int64 SystemTime; // rax
  VIDMM_COMMIT_TELEMETRY *v29; // rcx
  struct VIDMM_ALLOC **v30; // rcx
  struct VIDMM_DEVICE *v31; // r10
  int v32; // eax
  char *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rsi
  char IsProcessCommitRelinquished; // al
  const CHAR *v37; // r8
  struct VIDMM_DEVICE *v38; // rax
  __int64 v39; // r9
  VIDMM_DEVICE *v40; // rsi
  struct VIDMM_DEVICE *v41; // r14
  struct VIDMM_DEVICE *v42; // r12
  unsigned __int8 v43; // al
  char v44; // dl
  _BYTE *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  char v48; // al
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  VIDMM_GLOBAL *v52; // rcx
  char v53; // dl
  char *v54; // rdi
  char v55; // al
  _QWORD *v56; // rsi
  VIDMM_DEVICE *v57; // rcx
  unsigned __int16 v58; // di
  __int64 v59; // rcx
  char v60; // [rsp+52h] [rbp-47h]
  char v61; // [rsp+53h] [rbp-46h] BYREF
  char v62; // [rsp+54h] [rbp-45h]
  bool v63; // [rsp+55h] [rbp-44h] BYREF
  bool v64; // [rsp+56h] [rbp-43h] BYREF
  int v65; // [rsp+58h] [rbp-41h]
  struct VIDMM_PAGING_QUEUE *v66; // [rsp+60h] [rbp-39h]
  struct VIDMM_PAGING_QUEUE_PACKET *v67; // [rsp+68h] [rbp-31h] BYREF
  struct VIDMM_ALLOC *v68; // [rsp+70h] [rbp-29h] BYREF
  struct VIDMM_DEVICE *v69; // [rsp+78h] [rbp-21h] BYREF
  int ThreadInformation; // [rsp+80h] [rbp-19h] BYREF
  __int64 v71; // [rsp+88h] [rbp-11h]
  union _LARGE_INTEGER v72; // [rsp+90h] [rbp-9h] BYREF
  PVOID Object; // [rsp+98h] [rbp-1h] BYREF
  __int64 v74; // [rsp+A0h] [rbp+7h]
  char v75; // [rsp+100h] [rbp+67h]
  bool v76; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned __int8 v77; // [rsp+110h] [rbp+77h]
  struct VIDMM_PAGING_QUEUE *v78; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)StartContext;
  CurrentThread = KeGetCurrentThread();
  v71 = v1;
  *((_QWORD *)StartContext + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  v4 = 0;
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  v5 = 0LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)StartContext + 3) + 24LL), Executive, 0, 0, 0LL);
  VidMmSetWorkerThreadStatus((__int64 *)StartContext, 1);
  v74 = *((_QWORD *)StartContext + 3);
  v6 = 0;
  v60 = 0;
  v7 = 0;
  v75 = 0;
  v63 = 0;
  Object = (PVOID)(v74 + 24);
  *((_QWORD *)StartContext + 16) = 0x8000000000000000uLL;
  KeEnterCriticalRegion();
  v8 = StartContext + 160;
  ExAcquirePushLockExclusiveEx(StartContext + 160, 0LL);
  *((_QWORD *)StartContext + 21) = KeGetCurrentThread();
  do
  {
LABEL_3:
    *((_QWORD *)StartContext + 2) = 0LL;
    if ( v4 || v6 || v7 )
      *((_QWORD *)StartContext + 16) = 0LL;
    v72 = *(union _LARGE_INTEGER *)(StartContext + 128);
    if ( v72.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdTrace(0x8000000000000000uLL);
        v9[3] = v4;
        v9[4] = v6;
        v9[5] = v7;
        WdLogGlobalForLineNumber = 3024;
      }
    }
    else
    {
      v5 = &v72;
    }
    v6 = 0;
    *((_QWORD *)StartContext + 21) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    ++*((_QWORD *)StartContext + 14);
    v10 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v5, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *((_QWORD *)StartContext + 21) = KeGetCurrentThread();
    *(_QWORD *)(v1 + 4568) = VidMmiQuerySystemTime();
    VIDMM_GLOBAL::ResetCleanupCounters((VIDMM_GLOBAL *)v1, 0);
    v7 = 0;
    v64 = 0;
    v14 = 0;
    v62 = 0;
    v69 = 0LL;
    v78 = 0LL;
    v67 = 0LL;
    v65 = 0;
    v77 = 0;
    if ( v10 )
    {
      if ( v10 == 258 )
      {
        v5 = 0LL;
        if ( g_IsInternalReleaseOrDbg )
        {
          v12 = WdLogNewEntry5_WdTrace(v12);
          *(_QWORD *)(v12 + 24) = *((_QWORD *)StartContext + 16);
          WdLogGlobalForLineNumber = 3093;
        }
        goto LABEL_30;
      }
LABEL_27:
      v5 = 0LL;
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = (unsigned __int8)StartContext[212];
        WdLogGlobalForLineNumber = 3097;
      }
      v12 = 1LL;
      StartContext[214] = 0;
      v4 = 1;
      v75 = 1;
      goto LABEL_30;
    }
    if ( StartContext[213] == StartContext[212] )
      goto LABEL_27;
    v5 = 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      v15 = WdLogNewEntry5_WdTrace(v12);
      v12 = 0LL;
      v4 = 1;
      v11 = (_QWORD *)(v15 + 24);
      do
      {
        v16 = (unsigned __int8)StartContext[v12 + 212];
        ++v12;
        *v11++ = v16;
      }
      while ( v12 < 2 );
      WdLogGlobalForLineNumber = 3067;
    }
    else
    {
      v4 = 1;
    }
    LOBYTE(v12) = StartContext[213];
    StartContext[214] = 1;
    if ( (_BYTE)v12 == 2 || (unsigned __int8)(v12 - 3) <= 2u )
    {
      KeWaitForSingleObject((PVOID)(v1 + 41328), Executive, 0, 0, 0LL);
      VIDMM_GLOBAL::ProcessReleaseResourceCommands((struct _KTHREAD **)v1);
    }
    else if ( (_BYTE)v12 == 1 )
    {
      VidMmSetWorkerThreadStatus((__int64 *)StartContext, 1);
    }
    v75 = 1;
LABEL_30:
    if ( *((_QWORD *)StartContext + 16) && (byte_14008A203 & 4) != 0 )
      McTemplateK0iq_EtwWriteTransfer(v12, (__int64)v11, v13);
    *((_QWORD *)StartContext + 16) = 0x8000000000000000uLL;
    VIDMM_GLOBAL::ProcessReleaseResourceCommands((struct _KTHREAD **)v1);
    if ( !v4 && !v60 && !v63 )
      goto LABEL_163;
    v18 = VidMmSelectPagingOperation((__int64)StartContext, &v78, &v67, (__int64 *)&v69);
    v21 = v69;
    v22 = v78;
    v23 = v67;
    v60 = v18;
    v66 = v78;
    if ( v69 )
    {
      if ( (byte_14008A203 & 4) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v19, &EventVidMmSelectOperation, v20, *((_QWORD *)v69 + 3), v78, v67);
      if ( v22 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = v22;
          WdLogGlobalForLineNumber = 3134;
        }
        if ( *((_BYTE *)v23 + 24) && *((_DWORD *)v23 + 12) == 206 )
          *((_QWORD *)v23 + 18) = VidMmiQuerySystemTime();
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = v21;
        WdLogGlobalForLineNumber = 3144;
      }
      VidMmBeginOperation((LARGE_INTEGER *)StartContext, (LARGE_INTEGER)v21, (LARGE_INTEGER)v22, (LARGE_INTEGER)v23);
    }
LABEL_48:
    while ( 2 )
    {
      while ( 2 )
      {
        *((_QWORD *)StartContext + 27) = 0LL;
        ++*((_DWORD *)StartContext + 88);
        v68 = 0LL;
        v76 = 0;
        *((_QWORD *)StartContext + 28) = 0LL;
        *((_QWORD *)StartContext + 29) = 0LL;
        StartContext[240] = 0;
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v19);
          WdLogGlobalForLineNumber = 3157;
        }
        LOBYTE(v78) = 0;
        v24 = 2;
        v61 = 2;
        if ( !v21
          || (VIDMM_DEVICE::GetBudgetAndVisibilityState(v21, (bool *)&v78, (enum VIDMM_BUDGET_PRIORITY_BAND *)&v61),
              v24 = v61,
              v25 = (char *)&unk_14006430C,
              v61 == 2) )
        {
          v25 = (char *)&unk_140064300;
        }
        v67 = (struct VIDMM_PAGING_QUEUE_PACKET *)&v25[48 * v14 + 24 * (unsigned __int8)v78];
        if ( v22 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(0LL);
            WdLogGlobalForLineNumber = 3173;
          }
          v26 = VidMmSubmitPacket(
                  (VIDMM_GLOBAL **)StartContext,
                  (__int64)v22,
                  (__int64)v23,
                  *((_BYTE *)v67 + 8),
                  &v76,
                  &v68);
          v27 = v26;
          if ( v26 == -1071775232 )
          {
            v27 = 0;
LABEL_65:
            if ( !*((_BYTE *)v23 + 24) )
            {
LABEL_69:
              VidMmReclaimPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v66, v23);
              if ( (*((_BYTE *)v21 + 312) & 7) == 1 )
              {
                v66 = 0LL;
                v22 = 0LL;
                v23 = 0LL;
                VidMmEndOperation((__int64)StartContext, 1u, 0);
                VidMmBeginOperation((LARGE_INTEGER *)StartContext, (LARGE_INTEGER)v21, 0LL, 0LL);
                v77 = 0;
                continue;
              }
              break;
            }
LABEL_66:
            if ( *((_DWORD *)v23 + 12) == 206 )
            {
              SystemTime = VidMmiQuerySystemTime();
              *((_QWORD *)v23 + 19) = SystemTime;
              if ( SystemTime - *((_QWORD *)v23 + 17) > 1000000 )
              {
                VIDMM_COMMIT_TELEMETRY::Init(
                  (VIDMM_COMMIT_TELEMETRY *)(StartContext + 216),
                  (struct VIDMM_GLOBAL *)v1,
                  v21,
                  0LL);
                VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v29, v23);
                *((_QWORD *)StartContext + 28) = 0LL;
                *((_QWORD *)StartContext + 29) = 0LL;
                *((_QWORD *)StartContext + 27) = 0LL;
                StartContext[240] = 0;
              }
            }
            goto LABEL_69;
          }
          if ( v23 && *((_BYTE *)v23 + 24) && (!v76 || *((_BYTE *)v23 + 128)) && *((_QWORD *)v23 + 9) )
          {
            v27 = 0;
            goto LABEL_66;
          }
          if ( v26 >= 0 )
            goto LABEL_65;
        }
        else
        {
          if ( v21 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(0LL);
              WdLogGlobalForLineNumber = 3257;
            }
            v27 = VIDMM_DEVICE::Resume(v21, *((_BYTE *)v67 + 8), &v76, &v68);
            if ( v60 || *((_DWORD *)StartContext + 52) )
            {
              v75 = 1;
              break;
            }
          }
          else
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(0LL);
              WdLogGlobalForLineNumber = 3273;
            }
            v27 = 0;
          }
          v75 = 0;
        }
        break;
      }
      if ( v21 && (byte_14008A203 & 4) != 0 )
        McTemplateK0qqtqttp_EtwWriteTransfer(
          v76,
          *((unsigned __int8 *)v67 + 8),
          v24,
          v27,
          v14,
          (char)v78,
          v24,
          *((_BYTE *)v67 + 8),
          v76,
          (char)v68);
      if ( v27 >= 0 )
        goto LABEL_153;
      if ( v77 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 54LL, v21, v66, v23);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_203;
      }
      WdLogSingleEntry4(3LL, v23, v21, v27, v76);
      WdLogGlobalForLineNumber = 3313;
      v19 = 1LL;
      v62 = 1;
      if ( !v76 )
      {
LABEL_114:
        v22 = v66;
        goto LABEL_115;
      }
      while ( 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v19);
          WdLogGlobalForLineNumber = 3321;
        }
        VIDMM_COMMIT_TELEMETRY::Init(
          (VIDMM_COMMIT_TELEMETRY *)(StartContext + 216),
          (struct VIDMM_GLOBAL *)v1,
          v21,
          v68);
        if ( (_BYTE)v78 == (_BYTE)v31 )
        {
          VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v30, *((_BYTE *)v67 + 8));
          v31 = 0LL;
        }
        v69 = v31;
        v32 = VidMmHandleRecoverablePageInFailure((__int64 *)StartContext, (int)v21, (__int64)v68);
        if ( !v32 )
        {
          if ( !g_IsInternalReleaseOrDbg )
          {
            v14 = v65;
            goto LABEL_129;
          }
          WdLogNewEntry5_WdTrace(v19);
          WdLogGlobalForLineNumber = 3344;
          goto LABEL_144;
        }
        if ( v32 == -1071775484 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v19);
            WdLogGlobalForLineNumber = 3351;
          }
          v40 = v21;
          v41 = v69;
          v42 = v69;
          if ( (*((_BYTE *)v21 + 312) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v21, v69) )
          {
            v41 = v21;
            v40 = v42;
          }
          VIDMM_DEVICE::Yield(v40, v41);
          if ( v41 == v21 )
          {
            v1 = v71;
LABEL_144:
            v14 = v65;
            v22 = v66;
            goto LABEL_48;
          }
          if ( v66 )
            VidMmRewindPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v66, v23);
          v1 = v71;
          VidMmSetWorkerThreadTimeout((__int64)StartContext, *(_QWORD *)(v71 + 4568) - *((_QWORD *)v41 + 28), 8);
          v6 = 0;
          v7 = 0;
LABEL_201:
          v4 = v75;
          v8 = StartContext + 160;
LABEL_2:
          v5 = 0LL;
          goto LABEL_3;
        }
        v19 = (*((_DWORD *)v68 + 8) >> 2) & 0x3F;
        v33 = *(char **)(*(_QWORD *)(v1 + 40320) + 8 * v19);
        if ( (**((_DWORD **)v68 + 12) & 0x20000) != 0
          && *((_BYTE *)v23 + 24)
          && *((_DWORD *)v23 + 12) == 203
          && *((_DWORD *)v23 + 20) == 5
          && v33[557] >= 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v19);
            WdLogGlobalForLineNumber = 3442;
          }
          *((_DWORD *)v23 + 20) = 6;
LABEL_128:
          v65 = v14;
LABEL_129:
          v22 = v66;
          goto LABEL_48;
        }
        VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(
          (VIDMM_COMMIT_TELEMETRY *)(StartContext + 216),
          *((_BYTE *)v67 + 8));
        v19 = 0LL;
        if ( v24 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(0LL);
            WdLogGlobalForLineNumber = 3458;
          }
          --v24;
          goto LABEL_112;
        }
        if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v33 + 176LL))(
               v33,
               *(unsigned int *)(***(_QWORD ***)v68 + 40LL)) )
        {
          goto LABEL_128;
        }
        WdLogSingleEntry2(1LL, v21, v23);
        WdLogGlobalForLineNumber = 3482;
        DxgkLogInternalTriageEvent(v34, 0x40000LL);
        if ( !dword_14008A658 || KdRefreshDebuggerNotPresent() )
          goto LABEL_136;
        v35 = *(_QWORD *)(*(_QWORD *)v68 + 8LL);
        IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*(_QWORD *)(v35 + 16));
        if ( g_UnrecoverablePagingFailureDebugMode )
          break;
        if ( IsProcessCommitRelinquished )
          goto LABEL_132;
        v22 = v66;
        v37 = "\n"
              "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
              "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
              "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%p)\"\n"
              "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
        if ( !v23 )
          v37 = "\n"
                "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                "Paging operation type: Failure to resume device\n";
        DbgPrintEx(0x65u, 0, v37, v21, v23, v66, 0LL, 0LL);
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "\n"
          "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFailure"
          "DebugMode=1\"\n"
          "or \"ed 0x%p 1\"\n"
          "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagin"
          "gFailureDebugMode=2\"\n"
          "or \"ed 0x%p 2\"\n"
          "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDebugMo"
          "de=3\"\n"
          "or \"ed 0x%p 3\"\n"
          "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepping th"
          "rough the code is done.!!!\n"
          "\n",
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode);
        __debugbreak();
        if ( g_UnrecoverablePagingFailureDebugMode == 2 )
        {
          v65 = v14;
          goto LABEL_48;
        }
        if ( g_UnrecoverablePagingFailureDebugMode != 3 )
          goto LABEL_135;
LABEL_112:
        v65 = v14;
        if ( !v76 )
        {
          v19 = 1LL;
          goto LABEL_114;
        }
      }
      if ( IsProcessCommitRelinquished )
      {
LABEL_132:
        v39 = *(_QWORD *)(v35 + 72);
        if ( v39 && !*(_BYTE *)(v39 + 572) )
        {
          DbgPrintEx(
            0x65u,
            0,
            "\n"
            "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
            "virtual address space torn down, yet we do not detect ourselves in the frozen state for that process.\n"
            "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
          __debugbreak();
          v22 = v66;
          goto LABEL_135;
        }
      }
LABEL_136:
      v22 = v66;
LABEL_135:
      v19 = 1LL;
LABEL_115:
      v77 = 1;
      v38 = v21;
      if ( v22 && *((_BYTE *)v23 + 24) )
      {
        *((_BYTE *)v23 + 128) = 1;
        if ( !*((_QWORD *)v23 + 9) )
        {
          v38 = (struct VIDMM_DEVICE *)*((_QWORD *)v23 + 7);
          if ( !v38 )
          {
            v38 = *(struct VIDMM_DEVICE **)(*((_QWORD *)v23 + 8) + 8LL);
            goto LABEL_120;
          }
LABEL_121:
          v19 = *((_QWORD *)v38 + 4);
          if ( v19 )
            VidSchMarkDeviceAsError(v19, 12);
        }
      }
      else
      {
LABEL_120:
        if ( v38 )
          goto LABEL_121;
      }
      if ( v76 )
      {
        v14 = 0;
        v65 = 0;
        continue;
      }
      break;
    }
    if ( v22 )
      VidMmReclaimPagingQueuePacket((struct VIDMM_WORKER_THREAD *)StartContext, v22, v23);
LABEL_153:
    VidMmEndOperation((__int64)StartContext, 1u, v77);
    if ( StartContext[213] == 1 )
    {
      v43 = VIDMM_GLOBAL::CheckForMemoryBudgetThresholdChanges((VIDMM_GLOBAL *)v1);
      if ( (unsigned __int8)v62 | v43 )
        VIDMM_GLOBAL::RequestNewBudget((VIDMM_GLOBAL *)v1, 0);
      VIDMM_GLOBAL::HandlePromotionCandidates((VIDMM_GLOBAL *)v1, &v63);
      v5 = 0LL;
      if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty(v1) )
      {
        v4 = v75;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v17);
          WdLogGlobalForLineNumber = 3682;
        }
        v4 = 1;
        v75 = 1;
      }
      v6 = 0;
      v7 = 0;
    }
    else
    {
      v4 = v75;
      v5 = 0LL;
      v6 = 0;
      v7 = 0;
    }
LABEL_163:
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v17);
      WdLogGlobalForLineNumber = 3688;
    }
    v44 = StartContext[212];
    v45 = StartContext + 212;
    if ( v44 != 4 && v44 != 3 && v44 != 5 )
    {
      if ( dword_14008A548 && !*((_DWORD *)DXGGLOBAL::GetGlobal() + 526) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v45);
          WdLogGlobalForLineNumber = 3696;
        }
        v48 = VIDMM_GLOBAL::RecalculateBudget((VIDMM_GLOBAL *)v1, v46, v47);
        VIDMM_GLOBAL::HandleTrimWnf((struct _KTHREAD ***)v1, v48);
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v45);
        WdLogGlobalForLineNumber = 3707;
      }
      VIDMM_GLOBAL::ProcessPendingOfferList((struct _KTHREAD **)v1);
      if ( VIDMM_GLOBAL::UnderCleanupLimit((VIDMM_GLOBAL *)v1) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v50);
          WdLogGlobalForLineNumber = 3712;
        }
        VIDMM_GLOBAL::ProcessOfferLists((struct _KTHREAD **)v1);
        *(_QWORD *)(v1 + 3728) = v1 + 3720;
        *(_QWORD *)(v1 + 3720) = v1 + 3720;
        VIDMM_GLOBAL::CleanupMarkedForEvictionAllocations((VIDMM_GLOBAL *)v1);
      }
      if ( !v4 )
      {
        if ( g_Feature_Largify64KBPrototype )
          DoUpgrade64KPages((struct VIDMM_WORKER_THREAD *)StartContext, v49, v51);
        if ( !VIDMM_GLOBAL::UnderCleanupLimit((VIDMM_GLOBAL *)v1) )
        {
          VIDMM_GLOBAL::ResetCleanupCounters(v52, 1);
          v7 = 1;
        }
      }
      v53 = 0;
      if ( StartContext[213] == 6 || *(_DWORD *)(*(_QWORD *)StartContext + 6984LL) )
        v53 = 1;
      VidMmProcessPendingTerminations((KSPIN_LOCK **)StartContext, v53, &v64);
      VIDMM_GLOBAL::CheckMemorySegmentsFState((VIDMM_GLOBAL *)v1);
      v6 = v64;
      v45 = StartContext + 212;
    }
    v8 = StartContext + 160;
  }
  while ( v4 );
  v54 = StartContext + 213;
  v55 = StartContext[213];
  if ( v55 == *v45 )
    goto LABEL_199;
  if ( v55 == 5 )
  {
    v56 = *(_QWORD **)(v1 + 45096);
    if ( v56 != (_QWORD *)(v1 + 45096) )
    {
      do
      {
        v57 = (VIDMM_DEVICE *)(v56 - 25);
        if ( !*(v56 - 2) && *((_QWORD *)v57 + 3) )
          VIDMM_DEVICE::Suspend(v57, 1, 0);
        v56 = (_QWORD *)*v56;
      }
      while ( v56 != (_QWORD *)(v1 + 45096) );
      v1 = v71;
      v54 = StartContext + 213;
    }
    v4 = v75;
  }
  VidMmSetWorkerThreadStatus((__int64 *)StartContext, *v54);
  if ( *v54 != 2 )
  {
LABEL_199:
    v8 = StartContext + 160;
    v58 = 0;
    if ( *(_DWORD *)(v1 + 6952) )
    {
      do
      {
        v59 = *(_QWORD *)(*(_QWORD *)(v1 + 40320) + 8LL * v58);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 144LL))(v59);
        ++v58;
      }
      while ( (unsigned int)v58 < *(_DWORD *)(v1 + 6952) );
      goto LABEL_201;
    }
    goto LABEL_2;
  }
LABEL_203:
  *((_QWORD *)StartContext + 21) = 0LL;
  ExReleasePushLockExclusiveEx(StartContext + 160, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)StartContext + 1));
  PsTerminateSystemThread(0);
}
