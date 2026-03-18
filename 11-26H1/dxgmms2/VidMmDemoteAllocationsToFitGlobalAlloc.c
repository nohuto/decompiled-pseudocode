/*
 * XREFs of VidMmDemoteAllocationsToFitGlobalAlloc @ 0x140100748
 * Callers:
 *     VidMmHandleRecoverablePageInFailure @ 0x14010048C (VidMmHandleRecoverablePageInFailure.c)
 * Callees:
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400FFC9C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x140100430 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x140100F78 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x14010131C (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x14010FC50 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 */

char VidMmDemoteAllocationsToFitGlobalAlloc(__int64 *a1, _DWORD *a2, __int64 a3, ...)
{
  __int64 v3; // r14
  __int64 v4; // r13
  _DWORD *v6; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  int v8; // r10d
  LARGE_INTEGER v9; // rbx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // r9
  unsigned __int16 v13; // dx
  unsigned int v14; // eax
  __int64 v15; // r12
  int v16; // edx
  __int64 v17; // r8
  _QWORD **v18; // rcx
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // r14
  char v22; // al
  unsigned int v23; // r10d
  _DWORD *v24; // r11
  unsigned int v25; // esi
  _QWORD *v26; // r12
  _QWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // r15
  _QWORD *v35; // rdi
  _QWORD *v36; // rcx
  char IsSystemProcess; // al
  __int64 v38; // r9
  _QWORD *v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  char v46; // al
  __int16 v47; // dx
  unsigned __int64 LargestGap; // rdi
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rcx
  _QWORD **v53; // rsi
  _QWORD *v54; // rax
  __int64 v55; // rax
  BOOLEAN refreshed; // al
  unsigned __int16 v57; // [rsp+58h] [rbp-71h]
  int v58; // [rsp+5Ch] [rbp-6Dh]
  int v59; // [rsp+60h] [rbp-69h]
  unsigned int v60; // [rsp+64h] [rbp-65h]
  unsigned __int8 v61; // [rsp+68h] [rbp-61h]
  __int64 v62; // [rsp+70h] [rbp-59h]
  unsigned __int16 v63; // [rsp+78h] [rbp-51h]
  unsigned int v64; // [rsp+7Ch] [rbp-4Dh] BYREF
  unsigned int v65; // [rsp+80h] [rbp-49h]
  unsigned __int64 v66; // [rsp+88h] [rbp-41h] BYREF
  _QWORD **v67; // [rsp+90h] [rbp-39h]
  unsigned int v68; // [rsp+98h] [rbp-31h]
  __int64 v69; // [rsp+A0h] [rbp-29h]
  __int64 v70; // [rsp+A8h] [rbp-21h]
  _DWORD v71[2]; // [rsp+B0h] [rbp-19h] BYREF
  _DWORD *v72; // [rsp+B8h] [rbp-11h]
  LARGE_INTEGER v73; // [rsp+C0h] [rbp-9h] BYREF
  _QWORD *v74; // [rsp+C8h] [rbp-1h]
  char v75; // [rsp+D0h] [rbp+7h]
  unsigned __int16 v76; // [rsp+128h] [rbp+5Fh]
  __int64 v79; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  __int64 v81; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v79 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  v3 = *a1;
  v62 = *a1;
  v70 = *(_QWORD *)a2;
  v4 = v70;
  v74 = a1 + 41;
  v6 = a2;
  v75 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*((_DWORD *)a1 + 93);
  v8 = *(_DWORD *)(v4 + 40);
  v9 = PerformanceCounter;
  v73 = PerformanceCounter;
  v10 = 0;
  v76 = 0;
  v11 = *(_DWORD *)(v4 + 44) != 0 ? 0 : 6;
  v57 = v11;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( !v8 )
      {
        *v74 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v9.QuadPart;
        return 0;
      }
      if ( v11 <= 5u )
        break;
      v13 = v10;
      v14 = (unsigned __int8)v10++;
      v63 = v13;
      v76 = v10;
      if ( _bittest(&v8, v14) )
      {
        v61 = 1;
        goto LABEL_7;
      }
    }
    v46 = v11++;
    v57 = v11;
    v10 = v76;
    v47 = (*(_DWORD *)(v4 + 44) >> (6 * v46)) & 0x1F;
    if ( v47 )
    {
      v13 = v47 - 1;
      v63 = v13;
      v61 = ((*(_DWORD *)(v4 + 44) >> (6 * v11)) & 0x20) == 0;
LABEL_7:
      v8 &= ~(1 << v13);
      v58 = v8;
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 40320)
                                              + 8
                                              * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)v6 + 52LL) >> 2) & 0x3F))
                                  + 1752LL)
                      + 8LL * v13);
      v10 = v76;
      v69 = v15;
      if ( *(_DWORD *)(v15 + 108) == 1 )
        break;
    }
  }
  v16 = 0;
  v17 = a3;
  v59 = 0;
  if ( (v6[6] & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a3 + 8) + 136LL) & 2) == 0 )
      v16 = 7;
    v59 = v16;
  }
  v18 = (_QWORD **)(v15 + 112);
  v67 = (_QWORD **)(v15 + 112);
LABEL_10:
  while ( 2 )
  {
    v19 = *(_QWORD *)(v4 + 16);
    v20 = 2013265919;
    v71[0] = 0;
    v21 = v19 + (v19 >> 2);
    v71[1] = 2;
    v66 = v21;
    while ( 1 )
    {
      v22 = *(_BYTE *)(v17 + 58) & 0x10;
      v60 = v20;
      v64 = 0;
      v23 = v22 != 0;
      v24 = (_DWORD *)((char *)v71 + (-v23 & 4));
LABEL_12:
      v72 = v24;
      v65 = v23;
      if ( v23 < 2 )
        break;
      if ( v64 - 1 > 0xC7FFFFFE )
        goto LABEL_62;
      if ( v20 == 2013265919 )
      {
        v20 = -939524097;
        if ( v64 <= 0x9FFFFFFF )
          v20 = -1610612737;
      }
      else
      {
        if ( v20 != -1610612737 )
        {
LABEL_62:
          if ( v21 != *(_QWORD *)(v4 + 16) + (*(_QWORD *)(v4 + 16) >> 2) )
          {
            LargestGap = VIDMM_SEGMENT::GetLargestGap(v15, (__int64)v6, 0, v61);
            if ( g_IsInternalReleaseOrDbg )
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
              v49[3] = v15;
              v49[4] = LargestGap;
              v49[5] = *(_QWORD *)(v4 + 16);
              WdLogGlobalForLineNumber = 2472;
            }
            if ( LargestGap >= *(_QWORD *)(v4 + 16) )
            {
              VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)&v73);
              return 1;
            }
          }
          v11 = v57;
          v10 = v76;
          v8 = v58;
          if ( (VIDMM_GLOBAL::_Config & 0x40) == 0 )
            goto LABEL_70;
          if ( (_BYTE)v81 == 2 )
            goto LABEL_70;
          if ( *(_DWORD *)(v4 + 48) < 0xA0000000 )
          {
            v10 = v76;
            if ( (v6[6] & 1) != 0 )
              goto LABEL_70;
          }
          v11 = v57;
          v10 = v76;
          v8 = v58;
          if ( !dword_14008A658 )
            goto LABEL_70;
          v10 = v76;
          if ( g_DemotedHighPriAllocDebugMode )
            goto LABEL_70;
          refreshed = KdRefreshDebuggerNotPresent();
          v11 = v57;
          v10 = v76;
          v8 = v58;
          if ( refreshed )
            goto LABEL_70;
          DbgPrintEx(0x65u, 0, "\nCouldn't find preferred memory for a high priority allocation 0x%p.\n", v6);
          DbgPrintEx(
            0x65u,
            0,
            "\n"
            "We broke into the debugger to allow a chance for debugging this issue.\n"
            "\n"
            "To disable debug breaks on high priority allocation page-in failures, run \"?? dxgmms2!g_DemotedHighPriAlloc"
            "DebugMode=1\"\n"
            "or \"ed 0x%p 1\"\n"
            "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_DemotedHighPriAllocDebugMode=2\""
            "\n"
            "or \"ed 0x%p 2\"\n"
            "\n",
            (const void *)&g_DemotedHighPriAllocDebugMode,
            (const void *)&g_DemotedHighPriAllocDebugMode);
          __debugbreak();
          v18 = (_QWORD **)(v15 + 112);
          v17 = a3;
          if ( g_DemotedHighPriAllocDebugMode != 2 )
          {
            v11 = v57;
            v10 = v76;
            v8 = v58;
LABEL_70:
            v3 = v62;
            goto LABEL_2;
          }
          goto LABEL_10;
        }
        v20 = -939524097;
      }
      v18 = (_QWORD **)(v15 + 112);
    }
    v25 = v20;
    v68 = *v24;
    if ( v68 == 2 )
    {
      if ( (v6[6] & 1) != 0 && v20 >= *(_DWORD *)(v4 + 48) - 1 )
        v25 = *(_DWORD *)(v4 + 48) - 1;
      v26 = (_QWORD *)((char *)VIDMM_PROCESS::GetCommitmentInformation(
                                 *(VIDMM_PROCESS **)(a3 + 8),
                                 *(_DWORD *)(*(_QWORD *)(v62 + 24) + 240LL),
                                 *(_WORD *)(v15 + 68),
                                 *(_WORD *)(v15 + 70))
                     + 40);
      v27 = (_QWORD *)*v26;
      do
      {
        v17 = a3;
        v28 = 1LL;
        do
        {
          if ( v27 == v26 )
          {
            v18 = v67;
            goto LABEL_36;
          }
          v29 = v27[4];
          v27 = (_QWORD *)*v27;
        }
        while ( v29 == a3
             && ((VIDMM_GLOBAL::_Config & 0x40) == 0 || *(_DWORD *)(v4 + 48) < 0xA0000000 && (a2[6] & 1) != 0)
             || (*(_BYTE *)(a3 + 58) & 0x10) != 0 && v29 != a3 );
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(a2) + 24) = v29;
          WdLogGlobalForLineNumber = 2277;
        }
        LOBYTE(v79) = 0;
        v30 = *(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2;
        LOWORD(v30) = v30 & 0x3F;
        VIDMM_DEVICE::FaultAllDemotableAllocations(v29, v28, v30, v63, v59, v25, &v64, &v66, (__int64 *)va);
        if ( (_BYTE)v79 && g_IsInternalReleaseOrDbg )
        {
          v45 = WdLogNewEntry5_WdTrace(v31);
          *(_QWORD *)(v45 + 24) = v29;
          *(_QWORD *)(v45 + 32) = v25;
          WdLogGlobalForLineNumber = 2296;
        }
        v21 = v66;
      }
      while ( v66 );
      v6 = a2;
      v15 = v69;
      v32 = VIDMM_SEGMENT::GetLargestGap(v69, (__int64)a2, v59, v61);
      if ( g_IsInternalReleaseOrDbg )
      {
        v33 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        *(_QWORD *)(v33 + 24) = v32;
        *(_QWORD *)(v33 + 32) = *(_QWORD *)(v4 + 16);
        WdLogGlobalForLineNumber = 2314;
      }
    }
    else
    {
      v34 = *v18;
      do
      {
LABEL_43:
        v35 = v34;
        if ( v34 == v18 )
        {
          v4 = v70;
          v17 = a3;
LABEL_36:
          v23 = v65 + 1;
          v20 = v60;
          v24 = v72 + 1;
          v6 = a2;
          v15 = v69;
          goto LABEL_12;
        }
        v36 = v34 - 3;
        v34 = (_QWORD *)*v34;
        IsSystemProcess = PsIsSystemProcess(*(_QWORD *)(*v36 + 16LL));
        v18 = v67;
      }
      while ( IsSystemProcess );
      v39 = (_QWORD *)v35[2];
      while ( 1 )
      {
        if ( v39 == v35 + 2 )
        {
          v18 = v67;
          goto LABEL_43;
        }
        v40 = v39[4];
        LOBYTE(v38) = v81;
        v39 = (_QWORD *)*v39;
        if ( (unsigned __int8)VIDMM_DEVICE::CanSuspendThisDevice(v40, a3, v68, v38) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v42) + 24) = v40;
            WdLogGlobalForLineNumber = 2356;
          }
          LOBYTE(v79) = 0;
          v43 = *(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2;
          LOWORD(v43) = v43 & 0x3F;
          VIDMM_DEVICE::FaultAllDemotableAllocations(v40, v41, v43, v63, v59, v60, &v64, &v66, (__int64 *)va);
          if ( (_BYTE)v79 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v50 = WdLogNewEntry5_WdTrace(v44);
              *(_QWORD *)(v50 + 24) = v40;
              *(_QWORD *)(v50 + 32) = v60;
              WdLogGlobalForLineNumber = 2375;
            }
            v51 = *v35;
            if ( *v35 )
            {
              if ( *(_QWORD **)(v51 + 8) != v35
                || (v52 = (_QWORD *)v35[1], (_QWORD *)*v52 != v35)
                || (v53 = v67, *v52 = v51, *(_QWORD *)(v51 + 8) = v52, v54 = v53[1], (_QWORD **)*v54 != v53) )
              {
                __fastfail(3u);
              }
              *v35 = v53;
              v35[1] = v54;
              *v54 = v35;
              v53[1] = v35;
            }
          }
          v21 = v66;
          if ( !v66 )
            break;
        }
      }
      v6 = a2;
      v15 = v69;
      v32 = VIDMM_SEGMENT::GetLargestGap(v69, (__int64)a2, v59, v61);
      if ( g_IsInternalReleaseOrDbg )
      {
        v55 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        v4 = v70;
        *(_QWORD *)(v55 + 24) = v32;
        *(_QWORD *)(v55 + 32) = *(_QWORD *)(v4 + 16);
        WdLogGlobalForLineNumber = 2402;
      }
      else
      {
        v4 = v70;
      }
    }
    if ( v32 < *(_QWORD *)(v4 + 16) )
    {
      v17 = a3;
      v18 = (_QWORD **)(v15 + 112);
      continue;
    }
    break;
  }
  *v74 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v9.QuadPart;
  return 1;
}
