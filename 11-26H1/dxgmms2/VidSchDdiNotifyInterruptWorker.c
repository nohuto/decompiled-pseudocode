/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1400297B0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x140028AB0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x14004B920 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x14002A3F4 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x14002A6D0 (VidSchiProcessIsrVSync.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x14002B22C (VidSchiProcessIsrMonitoredFenceSignaled.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x14002B738 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrSchedulingLogFull @ 0x14002E920 (VidSchiProcessIsrSchedulingLogFull.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiProcessIsrSuspendContextCompleted @ 0x14002F6E4 (VidSchiProcessIsrSuspendContextCompleted.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x140037E38 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1400397D8 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     VidSchiProcessIsrGpuEngineTimeout @ 0x14004C1D8 (VidSchiProcessIsrGpuEngineTimeout.c)
 *     LogPageFaultInformation @ 0x140054580 (LogPageFaultInformation.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x140054F34 (VidSchiProcessIsrFaultedPacket.c)
 *     ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x14005785C (-VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z.c)
 *     VidSchiProcessIsrHwQueuePageFaulted @ 0x14005846C (VidSchiProcessIsrHwQueuePageFaulted.c)
 *     VidSchiProcessIsrNativeFenceSignaled @ 0x14005861C (VidSchiProcessIsrNativeFenceSignaled.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v5; // edx
  int v8; // eax
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 *v29; // r14
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r9
  int v47; // r8d
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // ebp
  PSLIST_ENTRY v53; // rbx
  unsigned int v54; // eax
  int v55; // r8d
  _QWORD *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 *v61; // r15
  __int64 v62; // r15
  unsigned int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  PSLIST_ENTRY v71; // rax
  int v72; // ecx
  int v73; // r8d
  int v74; // ebx
  int v75; // eax
  int v76; // ecx
  int v77; // r8d
  int v78; // ecx
  int v79; // r8d
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // [rsp+20h] [rbp-58h]
  __int64 v83; // [rsp+20h] [rbp-58h]
  __int64 v84; // [rsp+28h] [rbp-50h]
  __int64 v85; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 744);
  LODWORD(v85) = 0;
  v5 = *(_DWORD *)a2;
  if ( v5 == 3 || v5 <= 0x12 && (v8 = 263296, _bittest(&v8, v5)) )
  {
    if ( (*(_DWORD *)(v3 + 44) & 0x10) != 0 && (*(_BYTE *)(v3 + 3284) & 8) == 0 )
    {
      if ( *(_DWORD *)(v3 + 88) <= 1u || (*(_DWORD *)(a2 + 72) & 1) == 0 )
      {
LABEL_25:
        v17 = MEMORY[0xFFFFF78000000320];
        v18 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)v3, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a2);
        if ( v18 == -1 || v18 >= *(_DWORD *)(v3 + 48) )
        {
          v25 = *(unsigned int *)(v3 + 6304);
          *(_QWORD *)(v3 + 8 * v25 + 6312) = v17;
          v26 = 10 * v25;
          *(_OWORD *)(v3 + 8 * v26 + 6344) = *(_OWORD *)a2;
          *(_OWORD *)(v3 + 8 * v26 + 6360) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(v3 + 8 * v26 + 6376) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(v3 + 8 * v26 + 6392) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(v3 + 8 * v26 + 6408) = *(_OWORD *)(a2 + 64);
          *(_DWORD *)(v3 + 6304) = ((unsigned __int8)*(_DWORD *)(v3 + 6304) + 1) & 3;
        }
        else
        {
          _mm_lfence();
          v19 = *(_QWORD *)(v3 + 8LL * v18 + 3448);
          v20 = *(unsigned int *)(v19 + 44492);
          *(_QWORD *)(v19 + 8 * v20 + 44496) = v17;
          v21 = 10 * v20;
          *(_OWORD *)(v19 + 8 * v21 + 44528) = *(_OWORD *)a2;
          *(_OWORD *)(v19 + 8 * v21 + 44544) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(v19 + 8 * v21 + 44560) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(v19 + 8 * v21 + 44576) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(v19 + 8 * v21 + 44592) = *(_OWORD *)(a2 + 64);
          *(_DWORD *)(v19 + 44492) = ((unsigned __int8)*(_DWORD *)(v19 + 44492) + 1) & 3;
        }
        return;
      }
      goto LABEL_86;
    }
  }
  switch ( v5 )
  {
    case 1u:
      if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
        return;
      v9 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v3 + 96);
      if ( a3 )
      {
        if ( _bittest64(
               *(const signed __int64 **)(v3 + 656),
               *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v3 + 96)) )
        {
          return;
        }
      }
      v10 = *(__int64 **)(v3 + 696);
      if ( (unsigned int)v9 < *(_DWORD *)(v3 + 768) )
        v10 += v9;
      v11 = *v10;
      if ( *(_DWORD *)(v11 + 16) == 1 )
        return;
      if ( a3 && *(_DWORD *)(v11 + 16) == 2 )
      {
        v12 = *(unsigned __int16 *)(v11 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v12, 0LL);
        WdLogGlobalForLineNumber = 916;
      }
      v13 = *(unsigned int *)(a2 + 8);
      v14 = *(unsigned int *)(v11 + 64);
      v15 = *(_QWORD *)(v11 + 24);
      if ( (_DWORD)v13 == (_DWORD)v14 || (_DWORD)v13 == *(_DWORD *)(v11 + 72) )
        goto LABEL_19;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 152), 0, 0);
      if ( v16 < (unsigned int)v14 )
      {
        if ( (unsigned int)v13 <= v16 || (unsigned int)v13 >= (unsigned int)v14 )
          goto LABEL_19;
      }
      else if ( (unsigned int)v13 <= v16 && (unsigned int)v13 >= (unsigned int)v14 )
      {
LABEL_19:
        VidSchiProcessIsrCompletedPacket(v11, v13, a3, a2);
        return;
      }
      if ( *(_BYTE *)(v15 + 61) )
      {
        *(_DWORD *)(v11 + 2152) = 1;
        *(_BYTE *)(v11 + 2145) = 1;
        return;
      }
      v27 = *(_QWORD *)(v15 + 16);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 1LL, v13, v14, v27);
      WdLogGlobalForLineNumber = 916;
      break;
    case 0xBu:
      if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
        return;
      v22 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 96);
      if ( a3 )
      {
        if ( _bittest64(*(const signed __int64 **)(v3 + 656), v22) )
          return;
      }
      v23 = *(__int64 **)(v3 + 696);
      if ( (unsigned int)v22 < *(_DWORD *)(v3 + 768) )
        v23 += v22;
      v24 = *v23;
      if ( *(_DWORD *)(v24 + 16) == 1 )
        return;
      if ( !a3 || *(_DWORD *)(v24 + 16) != 2 )
      {
        VidSchiProcessIsrMonitoredFenceSignaled(v24, v22);
        return;
      }
      v58 = *(unsigned __int16 *)(v24 + 4);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v58, 0LL);
      WdLogGlobalForLineNumber = 916;
      goto LABEL_112;
    case 0x13u:
      v40 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 96);
      if ( a3
        && _bittest64(
             *(const signed __int64 **)(v3 + 656),
             *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 96)) )
      {
        return;
      }
      v41 = *(__int64 **)(v3 + 696);
      if ( (unsigned int)v40 < *(_DWORD *)(v3 + 768) )
        v41 += v40;
      v42 = *v41;
      if ( *(_DWORD *)(*v41 + 16) == 1 )
        return;
      if ( a3 && *(_DWORD *)(v42 + 16) == 2 )
      {
        v43 = *(unsigned __int16 *)(v42 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v43, 0LL);
        WdLogGlobalForLineNumber = 916;
        goto LABEL_85;
      }
LABEL_112:
      VidSchiProcessIsrNativeFenceSignaled(a2);
      return;
    case 2u:
      if ( (*(_DWORD *)(v3 + 44) & 1) != 0 )
      {
        v28 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v3 + 96);
        if ( !a3
          || !_bittest64(
                *(const signed __int64 **)(v3 + 656),
                *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v3 + 96)) )
        {
          v29 = *(__int64 **)(v3 + 696);
          if ( (unsigned int)v28 < *(_DWORD *)(v3 + 768) )
            v29 += v28;
          v30 = *v29;
          if ( *(_DWORD *)(v30 + 16) != 1 )
          {
            if ( a3 && *(_DWORD *)(v30 + 16) == 2 )
            {
              v59 = *(unsigned __int16 *)(v30 + 4);
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v59, 0LL);
              WdLogGlobalForLineNumber = 916;
              goto LABEL_114;
            }
            v31 = *(unsigned int *)(a2 + 8);
            v32 = *(_QWORD *)(v30 + 24);
            v33 = *(unsigned int *)(v30 + 112);
            v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 160), 0, 0);
            if ( v34 < (unsigned int)v33 )
            {
              if ( (unsigned int)v31 <= v34 || (unsigned int)v31 >= (unsigned int)v33 )
              {
LABEL_56:
                v3 = *(unsigned int *)(a2 + 12);
                v35 = *(unsigned int *)(v30 + 64);
                v36 = *(_QWORD *)(v30 + 24);
                if ( (_DWORD)v3 == (_DWORD)v35 || (_DWORD)v3 == *(_DWORD *)(v30 + 72) )
                  goto LABEL_150;
                v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 152), 0, 0);
                if ( v37 < (unsigned int)v35 )
                  goto LABEL_63;
                if ( (unsigned int)v3 <= v37 && (unsigned int)v3 >= (unsigned int)v35 )
                {
LABEL_150:
                  do
                  {
LABEL_64:
                    v39 = VidSchiProcessIsrCompletedPacket(v30, (unsigned int)v3, a3, a2);
                    VidSchiProcessIsrPreemptedPacket(v30, *(unsigned int *)(a2 + 8), a3, a2);
                  }
                  while ( v39 );
                  return;
                }
                while ( !*(_BYTE *)(v36 + 61) )
                {
                  v38 = *(_QWORD *)(v36 + 16);
                  g_DxgMmsBugcheckExportIndex = 1;
                  v37 = WdLogSingleEntry5(0LL, 281LL, 1LL, v3, v35, v38);
                  WdLogGlobalForLineNumber = 916;
LABEL_63:
                  if ( (unsigned int)v3 <= v37 )
                    goto LABEL_64;
LABEL_114:
                  if ( (unsigned int)v3 >= (unsigned int)v35 )
                    goto LABEL_64;
                }
LABEL_76:
                *(_DWORD *)(v30 + 2152) = 1;
                *(_BYTE *)(v30 + 2145) = 1;
                return;
              }
            }
            else if ( (unsigned int)v31 <= v34 && (unsigned int)v31 >= (unsigned int)v33 )
            {
              goto LABEL_56;
            }
            if ( *(_BYTE *)(v32 + 61) )
              goto LABEL_76;
            v50 = *(_QWORD *)(v32 + 16);
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 1LL, v31, v33, v50);
            WdLogGlobalForLineNumber = 916;
            goto LABEL_97;
          }
        }
      }
      return;
    case 4u:
LABEL_85:
      v44 = *(unsigned int *)(a2 + 8);
      v45 = *(unsigned int *)(a2 + 20);
      v46 = *(unsigned int *)(a2 + 16);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 13LL, v46, v45, v44);
      WdLogGlobalForLineNumber = 916;
LABEL_86:
      switch ( v5 )
      {
        case 7u:
          v47 = *(_DWORD *)(a2 + 12);
          break;
        case 0xAu:
          v47 = *(_DWORD *)(a2 + 12);
          break;
        case 0x12u:
          v47 = *(_DWORD *)(a2 + 12);
          break;
        default:
          v47 = *(_DWORD *)(a2 + 24);
          break;
      }
      if ( v47 )
        goto LABEL_25;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 6LL, v3, 0LL, 0LL);
      WdLogGlobalForLineNumber = 916;
      goto LABEL_92;
    case 9u:
      if ( (*(_DWORD *)(v3 + 44) & 4) == 0 )
        return;
      VidSchiValidatePageFaultFlags(*(enum _DXGK_PAGE_FAULT_FLAGS *)(a2 + 32));
      v60 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v3 + 96);
      if ( a3
        && _bittest64(
             *(const signed __int64 **)(v3 + 656),
             *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v3 + 96)) )
      {
        LogPageFaultInformation(1LL, a1, a2, 0LL);
        return;
      }
      v61 = *(__int64 **)(v3 + 696);
      if ( (unsigned int)v60 < *(_DWORD *)(v3 + 768) )
        v61 += v60;
      v62 = *v61;
      v63 = (*(_DWORD *)(v62 + 12) >> 1) & 1;
      if ( v63 && (*(_DWORD *)(a2 + 32) & 2) == 0 )
      {
        v64 = *(unsigned int *)(a2 + 44);
        v65 = *(unsigned int *)(a2 + 40);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 13LL, v63, v65, v64);
        WdLogGlobalForLineNumber = 916;
      }
      if ( *(_DWORD *)(v62 + 16) == 1 )
      {
        v66 = 0LL;
        v67 = a2;
        v68 = a1;
        v69 = 2LL;
      }
      else
      {
        if ( a3 && *(_DWORD *)(v62 + 16) == 2 )
        {
          v70 = *(unsigned __int16 *)(v62 + 4);
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v70, 0LL);
          WdLogGlobalForLineNumber = 916;
        }
        if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
        {
          v71 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v62 + 11520));
          if ( v71 )
          {
            v71[2].Next = (struct _SLIST_ENTRY *)v62;
            *((_QWORD *)&v71[2].Next + 1) = *(unsigned int *)(a2 + 8);
            *((_QWORD *)&v71[3].Next + 1) = *(_QWORD *)(a2 + 16);
            LODWORD(v71[5].Next) = *(_DWORD *)(a2 + 24);
            HIDWORD(v71[5].Next) = *(_DWORD *)(a2 + 28);
            *((_DWORD *)&v71[5].Next + 2) = *(_DWORD *)(a2 + 32);
            v71[3].Next = *(struct _SLIST_ENTRY **)(a2 + 40);
            *((_DWORD *)&v71[4].Next + 2) = *(_DWORD *)(a2 + 48);
            *((_DWORD *)&v71[4].Next + 3) = *(_DWORD *)(a2 + 52);
            *((_DWORD *)&v71[5].Next + 3) = *(_DWORD *)(a2 + 56);
            LODWORD(v71[6].Next) = *(_DWORD *)(a2 + 60);
            v71[4].Next = *(struct _SLIST_ENTRY **)(a2 + 64);
            LODWORD(v71->Next) = 12;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 2064), v71 + 1);
          }
          else
          {
            WdLogSingleEntry1(1LL, *(unsigned __int16 *)(v62 + 4));
            v83 = *(unsigned __int16 *)(v62 + 4);
            WdLogGlobalForLineNumber = 8057;
            DxgkLogInternalTriageEvent(
              v72,
              0x40000,
              v73,
              (unsigned int)L"The list of pending HW queue page faulted interrupts is full on node %d. There must be sever"
                             "e contention on the scheduler spin lock. This interrupt will be ignored.",
              v83,
              0LL,
              0LL,
              0LL);
          }
          return;
        }
        if ( !(unsigned int)VidSchiVerifyDriverReportedFenceId(
                              (struct _VIDSCH_NODE *)v62,
                              *(_DWORD *)(a2 + 8),
                              0,
                              (unsigned int *)&v85) )
          return;
        v74 = v85;
        VidSchiProcessIsrCompletedPacket(v62, (unsigned int)v85, a3, a2);
        v85 = 0LL;
        VidSchiProcessIsrFaultedPacket(v62, v74, a3, a2, (__int64)&v85);
        v75 = *(_DWORD *)(a2 + 32);
        v67 = a2;
        v66 = v85;
        v68 = a1;
        if ( (v75 & 4) != 0 )
        {
          v69 = 3LL;
        }
        else if ( (v75 & 8) != 0 )
        {
          v69 = 4LL;
        }
        else
        {
          v69 = 5LL;
        }
      }
      LogPageFaultInformation(v69, v68, v67, v66);
      return;
    case 0xFu:
LABEL_92:
      if ( (*(_DWORD *)(v3 + 44) & 1) != 0 )
      {
        v48 = *(_QWORD **)(v3 + 696);
        v49 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 96);
        if ( (unsigned int)v49 < *(_DWORD *)(v3 + 768) )
          v48 += v49;
        VidSchiProcessIsrSchedulingLogFull(*v48);
      }
      return;
    case 0x10u:
      if ( (*(_DWORD *)(v3 + 44) & 1) != 0 )
      {
        v56 = *(_QWORD **)(v3 + 696);
        v57 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 96);
        if ( (unsigned int)v57 < *(_DWORD *)(v3 + 768) )
          v56 += v57;
        VidSchiProcessIsrGpuEngineTimeout(*v56);
      }
      break;
    case 0x11u:
      if ( (*(_DWORD *)(v3 + 44) & 1) != 0 )
        VidSchiProcessIsrSuspendContextCompleted(v3, a2);
      break;
    default:
LABEL_97:
      if ( v5 == 12 )
      {
        if ( (*(_DWORD *)(v3 + 44) & 1) != 0 )
          VidSchiProcessIsrHwQueuePageFaulted(v3, a2);
      }
      else if ( v5 == 14 )
      {
        v51 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                *(ADAPTER_DISPLAY **)(*(_QWORD *)(v3 + 16) + 3160LL),
                *(_DWORD *)(a2 + 8));
        v52 = v51;
        if ( v51 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8150;
          DxgkLogInternalTriageEvent(
            v76,
            0x40000,
            v77,
            (unsigned int)L"Dropping invalid VidPnTargetId for interrupt type DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED",
            8150LL,
            0LL,
            0LL,
            0LL);
        }
        else if ( (unsigned __int8)*(_DWORD *)(a2 + 12) >= 8u )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8157;
          DxgkLogInternalTriageEvent(
            v78,
            0x40000,
            v79,
            (unsigned int)L"Dropping invalid NotificationID for interrupt type DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED",
            8157LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v53 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 8LL * v51 + 3448) + 78976LL));
          v54 = *(_DWORD *)(a2 + 12);
          if ( v53 )
          {
            HIDWORD(v53[2].Next) = v54;
            LODWORD(v53[2].Next) = v52;
            LODWORD(v53->Next) = 14;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 2064), v53 + 1);
            if ( (byte_14008A201 & 4) != 0 )
              McTemplateK0dq_EtwWriteTransfer(
                v80,
                &EventPeriodicFrameNotificationInterrupt,
                v81,
                LODWORD(v53[2].Next),
                HIDWORD(v53[2].Next));
          }
          else
          {
            WdLogSingleEntry2(1LL, *(unsigned int *)(a2 + 8), v54);
            v84 = *(unsigned int *)(a2 + 12);
            v82 = *(unsigned int *)(a2 + 8);
            WdLogGlobalForLineNumber = 8180;
            DxgkLogInternalTriageEvent(
              v82,
              0x40000,
              v55,
              (unsigned int)L"Out of Periodic Cookies, can't process DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED with"
                             " VidPnTargetId:%d NotificationID:%d",
              v82,
              v84,
              0LL,
              0LL);
          }
        }
      }
      return;
  }
}
