/*
 * XREFs of ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140029818 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C7288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140025B6C (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027C00 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

CRecalcState *__fastcall CRecalcState::CreateRecalcState(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  CRecalcState *v10; // rbp
  char v11; // r15
  char v12; // r14
  bool v14; // si
  bool v15; // bl
  char v16; // si
  char v17; // r14
  __int64 v18; // rdx
  __int16 WindowDpiLastNotify; // ax
  __int64 v20; // rdx
  char v21; // si
  char v22; // bp
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int8 v37; // al
  __int64 v38; // rdi
  char v39; // bl
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 UserSessionState; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // si
  char v48; // r14
  unsigned __int8 v49; // al
  __int64 v50; // rdi
  char v51; // bl
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  char v57; // si
  char v58; // r14
  unsigned __int8 v59; // al
  __int64 v60; // rdi
  char v61; // bl
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  __int16 v70; // [rsp+30h] [rbp-48h]
  __int16 v71; // [rsp+30h] [rbp-48h]
  __int64 v72; // [rsp+40h] [rbp-38h]
  __int64 v73; // [rsp+40h] [rbp-38h]
  char ThreadId; // [rsp+48h] [rbp-30h]
  char v75; // [rsp+48h] [rbp-30h]

  *a4 = 0;
  if ( !(unsigned int)((__int64 (*)(void))IsImmersiveBand)() )
    goto LABEL_2;
  v18 = MonitorFromRect(*(_QWORD *)(a1 + 40) + 88LL, 0LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL));
  if ( !v18 )
  {
    v21 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v22 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v21 = 0;
    }
    if ( !v22 && !v21 )
      return 0LL;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
    v72 = *(_QWORD *)a1;
    v27 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 69160);
    v70 = 21;
LABEL_42:
    LOBYTE(v26) = v21;
    LOBYTE(v25) = v22;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v25,
      v26,
      v27,
      5,
      7,
      v70,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v72,
      ThreadId);
    return 0LL;
  }
  WindowDpiLastNotify = GetWindowDpiLastNotify(a1, v18);
  if ( *(_WORD *)(*(_QWORD *)(v20 + 40) + 60LL) == WindowDpiLastNotify )
  {
    v21 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v22 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v21 = 0;
    }
    if ( !v22 && !v21 )
      return 0LL;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
    v72 = *(_QWORD *)a1;
    v27 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 69160);
    v70 = 22;
    goto LABEL_42;
  }
LABEL_2:
  v8 = Win32AllocPoolZInit(80LL, 1920168789LL);
  if ( v8 )
  {
    v10 = (CRecalcState *)CRecalcState::CRecalcState(v8, a1, a2, a3);
    if ( v10 )
    {
      if ( (unsigned int)IsImmersiveBand(a1) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v11 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v12 = 0;
        }
        if ( !v11 && !v12 )
          goto LABEL_14;
        v75 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v73 = *(_QWORD *)a1;
        v34 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 69160);
        v71 = 24;
      }
      else if ( a3 == 4 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v11 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v12 = 0;
        }
        if ( !v11 && !v12 )
          goto LABEL_14;
        v75 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v73 = *(_QWORD *)a1;
        v34 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 69160);
        v71 = 25;
      }
      else
      {
        if ( CRecalcState::ShouldDeferRecalc((__int64)v10, a1) )
        {
          v16 = 1;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
            || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v17 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v16 = 0;
          }
          if ( v17 || v16 )
          {
            v37 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
            v38 = *(_QWORD *)a1;
            v39 = v37;
            UserSessionState = W32GetUserSessionState(v41, v40);
            LOBYTE(v43) = v16;
            LOBYTE(v44) = v17;
            WPP_RECORDER_AND_TRACE_SF_qd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v44,
              v43,
              *(_QWORD *)(UserSessionState + 69160),
              5,
              7,
              26,
              (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
              v38,
              v39);
          }
          *a4 = 2;
          return v10;
        }
        if ( !CRecalcState::NeedsMigration(v10, (const struct tagWND *)a1) )
        {
          if ( CRecalcState::ShouldStoreAfterProcessing(v10, (const struct tagWND *)a1) )
          {
            v47 = 1;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
              || (v48 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v48 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
            {
              v47 = 0;
            }
            if ( v48 || v47 )
            {
              v49 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
              v50 = *(_QWORD *)a1;
              v51 = v49;
              v54 = W32GetUserSessionState(v53, v52);
              LOBYTE(v55) = v47;
              LOBYTE(v56) = v48;
              WPP_RECORDER_AND_TRACE_SF_qd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v56,
                v55,
                *(_QWORD *)(v54 + 69160),
                5,
                7,
                28,
                (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
                v50,
                v51);
            }
            *a4 = 3;
          }
          else
          {
            v57 = 1;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
              || (v58 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v58 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
            {
              v57 = 0;
            }
            if ( v58 || v57 )
            {
              v59 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
              v60 = *(_QWORD *)a1;
              v61 = v59;
              v64 = W32GetUserSessionState(v63, v62);
              LOBYTE(v65) = v57;
              LOBYTE(v66) = v58;
              WPP_RECORDER_AND_TRACE_SF_qd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v66,
                v65,
                *(_QWORD *)(v64 + 69160),
                5,
                7,
                29,
                (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
                v60,
                v61);
            }
          }
          return v10;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v11 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v12 = 0;
        }
        if ( !v11 && !v12 )
        {
LABEL_14:
          *a4 = 1;
          return v10;
        }
        v75 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v73 = *(_QWORD *)a1;
        v34 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 69160);
        v71 = 27;
      }
      LOBYTE(v33) = v12;
      LOBYTE(v32) = v11;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v33,
        v34,
        5,
        7,
        v71,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v73,
        v75);
      goto LABEL_14;
    }
  }
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v67 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
    LOBYTE(v68) = v15;
    LOBYTE(v69) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v69,
      v68,
      *(_QWORD *)(v67 + 69160),
      2,
      7,
      23,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
  }
  return 0LL;
}
