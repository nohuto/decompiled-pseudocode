/*
 * XREFs of ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D60C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E4E4 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1401608B0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

CRecalcState *__fastcall CRecalcState::CreateRecalcState(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  CRecalcState *v10; // rbp
  char v11; // si
  char v12; // r14
  bool v14; // si
  bool v15; // bl
  __int16 WindowDpiLastNotify; // ax
  __int64 v17; // rdx
  char v18; // si
  char v19; // bp
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r9
  char v25; // r15
  char v26; // r14
  char v27; // si
  char v28; // r14
  unsigned __int8 v29; // al
  __int64 v30; // rdi
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // edx
  int v42; // r8d
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 v46; // al
  __int64 v47; // rdi
  char v48; // bl
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 UserSessionState; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rdx
  __int64 v55; // rcx
  char v56; // si
  char v57; // r14
  unsigned __int8 v58; // al
  __int64 v59; // rdi
  char v60; // bl
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int16 v69; // [rsp+30h] [rbp-48h]
  __int16 v70; // [rsp+30h] [rbp-48h]
  __int64 v71; // [rsp+40h] [rbp-38h]
  __int64 v72; // [rsp+40h] [rbp-38h]
  char ThreadId; // [rsp+48h] [rbp-30h]
  char v74; // [rsp+48h] [rbp-30h]

  *a4 = 0;
  if ( !(unsigned int)IsImmersiveBand(a1) )
    goto LABEL_2;
  if ( !MonitorFromRect((__int32 *)(*(_QWORD *)(a1 + 40) + 88LL), 0LL, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL)) )
  {
    v18 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v19 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v18 = 0;
    }
    if ( !v19 && !v18 )
      return 0LL;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
    v71 = *(_QWORD *)a1;
    v24 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 69152);
    v69 = 21;
LABEL_34:
    LOBYTE(v23) = v18;
    LOBYTE(v22) = v19;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v23,
      v24,
      5,
      7,
      v69,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v71,
      ThreadId);
    return 0LL;
  }
  WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  if ( *(_WORD *)(*(_QWORD *)(v17 + 40) + 60LL) == WindowDpiLastNotify )
  {
    v18 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v19 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v18 = 0;
    }
    if ( !v19 && !v18 )
      return 0LL;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
    v71 = *(_QWORD *)a1;
    v24 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 69152);
    v69 = 22;
    goto LABEL_34;
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
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v25 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v26 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v26 = 0;
        }
        if ( !v25 && !v26 )
          goto LABEL_42;
        v74 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v72 = *(_QWORD *)a1;
        v43 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 69152);
        v70 = 24;
      }
      else if ( a3 == 4 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v25 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v26 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v26 = 0;
        }
        if ( !v25 && !v26 )
          goto LABEL_42;
        v74 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v72 = *(_QWORD *)a1;
        v43 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 69152);
        v70 = 25;
      }
      else
      {
        if ( (unsigned __int8)CRecalcState::ShouldDeferRecalc(v10, a1, 0LL) )
        {
          v11 = 1;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v12 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            v11 = 0;
          }
          if ( v12 || v11 )
          {
            v46 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
            v47 = *(_QWORD *)a1;
            v48 = v46;
            UserSessionState = W32GetUserSessionState(v50, v49);
            LOBYTE(v52) = v11;
            LOBYTE(v53) = v12;
            WPP_RECORDER_AND_TRACE_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v53,
              v52,
              *(_QWORD *)(UserSessionState + 69152),
              5,
              7,
              26,
              (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
              v47,
              v48);
          }
          *a4 = 2;
          return v10;
        }
        if ( !CRecalcState::NeedsMigration(v10, (const struct tagWND *)a1) )
        {
          if ( CRecalcState::ShouldStoreAfterProcessing(v10, (const struct tagWND *)a1) )
          {
            v56 = 1;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
              || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v57 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              v56 = 0;
            }
            if ( v57 || v56 )
            {
              v58 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
              v59 = *(_QWORD *)a1;
              v60 = v58;
              v63 = W32GetUserSessionState(v62, v61);
              LOBYTE(v64) = v56;
              LOBYTE(v65) = v57;
              WPP_RECORDER_AND_TRACE_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v65,
                v64,
                *(_QWORD *)(v63 + 69152),
                5,
                7,
                28,
                (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                v59,
                v60);
            }
            *a4 = 3;
          }
          else
          {
            v27 = 1;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
              || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v28 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              v27 = 0;
            }
            if ( v28 || v27 )
            {
              v29 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
              v30 = *(_QWORD *)a1;
              v31 = v29;
              v34 = W32GetUserSessionState(v33, v32);
              LOBYTE(v35) = v27;
              LOBYTE(v36) = v28;
              WPP_RECORDER_AND_TRACE_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v36,
                v35,
                *(_QWORD *)(v34 + 69152),
                5,
                7,
                29,
                (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                v30,
                v31);
            }
          }
          return v10;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v25 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v26 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v26 = 0;
        }
        if ( !v25 && !v26 )
        {
LABEL_42:
          *a4 = 1;
          return v10;
        }
        v74 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        v72 = *(_QWORD *)a1;
        v43 = *(_QWORD *)(W32GetUserSessionState(v55, v54) + 69152);
        v70 = 27;
      }
      LOBYTE(v42) = v26;
      LOBYTE(v41) = v25;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v42,
        v43,
        5,
        7,
        v70,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v72,
        v74);
      goto LABEL_42;
    }
  }
  v14 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v66 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v67) = v15;
    LOBYTE(v68) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v68,
      v67,
      *(_QWORD *)(v66 + 69152),
      2,
      7,
      23,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  return 0LL;
}
