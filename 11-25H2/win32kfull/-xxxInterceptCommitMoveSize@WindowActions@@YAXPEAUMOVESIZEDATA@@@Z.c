/*
 * XREFs of ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CFAB0
 * Callers:
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140029D14 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A78B0 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402CB748 (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CC88C (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CCBD0 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptCommitMoveSize(WindowActions *this, struct MOVESIZEDATA *a2)
{
  struct tagWND *v2; // r15
  __int64 v4; // rdx
  char v5; // r14
  char v6; // di
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  const struct tagWND *v12; // rcx
  __int64 v13; // rdx
  BOOL v14; // ebx
  int v15; // edi
  char v16; // r15
  char v17; // r14
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // r9
  const char *v22; // rax
  struct tagWND *v23; // rcx
  int v24; // eax
  bool v25; // zf
  int v26; // ebx
  char v27; // r14
  char v28; // di
  const char *WindowActionStateString; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  int v35; // r12d
  __int64 v36; // rdx
  int v37; // r13d
  char v38; // r15
  int v39; // eax
  char v40; // r12
  char v41; // r14
  char v42; // di
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rdx
  struct tagTHREADINFO **v47; // r15
  __int128 v48; // xmm0
  char v49; // r15
  char v50; // r14
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rdx
  char v55; // di
  char v56; // bl
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  __int64 v60; // rsi
  int v61; // r8d
  __int64 v62; // rdx
  bool v63; // di
  char v64; // bl
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  char v68; // r14
  char v69; // si
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  char v73; // [rsp+60h] [rbp-A8h]
  int v74; // [rsp+78h] [rbp-90h]
  struct tagWND *v75; // [rsp+80h] [rbp-88h]
  __int64 v76; // [rsp+88h] [rbp-80h] BYREF
  __int128 v77; // [rsp+90h] [rbp-78h]
  int v78; // [rsp+A0h] [rbp-68h]
  BOOL v79; // [rsp+A4h] [rbp-64h]
  int v80; // [rsp+A8h] [rbp-60h]
  __int128 v81; // [rsp+B0h] [rbp-58h]
  int v82; // [rsp+C8h] [rbp-40h] BYREF
  int v83; // [rsp+CCh] [rbp-3Ch]
  int v84; // [rsp+D4h] [rbp-34h]
  int v85; // [rsp+D8h] [rbp-30h]
  int v86; // [rsp+DCh] [rbp-2Ch]
  int v87; // [rsp+E0h] [rbp-28h]
  int v88; // [rsp+F0h] [rbp-18h]
  __int128 v89; // [rsp+F4h] [rbp-14h] BYREF
  __int128 v90; // [rsp+104h] [rbp-4h]
  int v91; // [rsp+114h] [rbp+Ch]
  int v92; // [rsp+118h] [rbp+10h]
  int v93; // [rsp+11Ch] [rbp+14h]

  v2 = (struct tagWND *)*((_QWORD *)this + 2);
  v75 = v2;
  memset_0(&v82, 0, 0x60uLL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    v7 = *(_QWORD *)v2;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      89,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v7);
  }
  v11 = *((_DWORD *)this + 78);
  v12 = (const struct tagWND *)*((_QWORD *)this + 2);
  v82 |= 0x400u;
  v77 = 0LL;
  v76 = 0LL;
  v79 = 0;
  v78 = v11;
  if ( IsShellParticipatesInSizing(v12, v4) && (*((_DWORD *)this + 79) & 2) != 0 )
  {
    v14 = ((*((_DWORD *)this + 50) >> 15) & 1) == 0;
    v79 = v14;
    v15 = 8;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v17 = 0;
    }
    if ( v16 || v17 )
    {
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      v21 = *(_QWORD *)(v18 + 69160);
      v22 = "AWSR_CANCELED";
      if ( !v14 )
        v22 = "AWSR_SIZED";
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        v21,
        5,
        4,
        90,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        (__int64)v22);
    }
    v2 = v75;
  }
  else
  {
    v15 = v76;
  }
  v23 = (struct tagWND *)*((_QWORD *)this + 2);
  v24 = 1;
  v25 = *((_DWORD *)this + 44) == 9;
  v26 = 3;
  LODWORD(v76) = v15 | 4;
  if ( v25 )
    v24 = 3;
  v80 = v24;
  if ( SaveSystemOperationData(v23, (const struct AdvancedWindowPos::SystemOperationData *)&v76) )
  {
    v82 |= 0x30u;
    if ( (*((_DWORD *)this + 50) & 0x10000000) == 0 )
    {
      if ( *((_DWORD *)this + 62) || (v26 = 1, (*(_BYTE *)(*((_QWORD *)v2 + 5) + 30LL) & 1) == 0) )
        v26 = 0;
    }
    v88 = v26;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v27 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v28 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v28 = 0;
    }
    if ( v27 || v28 )
    {
      WindowActionStateString = GetWindowActionStateString(v26);
      v32 = W32GetUserSessionState(v31, v30);
      LOBYTE(v33) = v28;
      LOBYTE(v34) = v27;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v34,
        v33,
        *(_QWORD *)(v32 + 69160),
        5,
        4,
        91,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        (__int64)WindowActionStateString);
      v26 = v88;
    }
    v35 = *((_DWORD *)this + 8);
    v36 = 0LL;
    v74 = v35;
    v37 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 24));
    v81 = *(_OWORD *)((char *)this + 24);
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        SetMonitorMovePoint((struct _WINDOW_ACTION *)&v82, *((const struct tagMONITOR **)this + 30));
        goto LABEL_58;
      }
      if ( v26 != 3 )
        goto LABEL_60;
    }
    v38 = BYTE4(v81);
    v39 = v35;
    v40 = BYTE12(v81);
    v82 |= 6u;
    v86 = v39 - v37;
    v84 = v37;
    v87 = HIDWORD(v81) - DWORD1(v81);
    v85 = DWORD1(v81);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v41 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v41 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v42 = 0;
    }
    if ( !v41 && !v42 )
    {
      v35 = v74;
LABEL_60:
      if ( v26 )
      {
        v48 = *(_OWORD *)((char *)this + 152);
        v82 |= 0x40u;
        v89 = v48;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v49 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v50 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v50 = 0;
        }
        if ( v49 || v50 )
        {
          v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
          LOBYTE(v52) = v50;
          LOBYTE(v53) = v49;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v53,
            v52,
            *(_QWORD *)(v51 + 69160),
            5,
            4,
            93,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
            v89,
            SBYTE4(v89),
            SBYTE8(v89),
            SBYTE12(v89),
            BYTE8(v89) - v89,
            BYTE12(v89) - BYTE4(v89));
        }
        if ( !KeepCheckpointLeftRightAligned(this) )
        {
          v47 = (struct tagTHREADINFO **)v75;
          v82 |= 0x100u;
          v60 = MonitorFromRect((INT *)&v89, 2u, *(_DWORD *)(*((_QWORD *)v75 + 5) + 288LL));
          v61 = v83 | 0x200;
          v83 |= 0x200u;
          v62 = *(unsigned __int16 *)(*(_QWORD *)(v60 + 40) + 60LL);
          v91 = *(unsigned __int16 *)(*(_QWORD *)(v60 + 40) + 60LL);
          v63 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v64 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v64 = 0;
          }
          if ( v63 || v64 )
          {
            v65 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v62);
            LOBYTE(v66) = v64;
            LOBYTE(v67) = v63;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v67,
              v66,
              *(_QWORD *)(v65 + 69160),
              5,
              4,
              95,
              (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
              v91);
            v61 = v83;
          }
          v83 = v61 | 0x100;
          v90 = *(_OWORD *)(*(_QWORD *)(v60 + 40) + 44LL);
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v68 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v68 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v69 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v69 = 0;
          }
          if ( v68 || v69 )
          {
            v70 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v62);
            LOBYTE(v71) = v69;
            LOBYTE(v72) = v68;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v72,
              v71,
              *(_QWORD *)(v70 + 69160),
              5,
              4,
              96,
              (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
              v90,
              SBYTE4(v90),
              SBYTE8(v90),
              SBYTE12(v90),
              BYTE8(v90) - v90,
              BYTE12(v90) - BYTE4(v90));
          }
          goto LABEL_63;
        }
        LODWORD(v89) = v37;
        DWORD2(v89) = v35;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v55 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v56 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v56 = 0;
        }
        if ( v55 || v56 )
        {
          v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v54);
          LOBYTE(v58) = v56;
          LOBYTE(v59) = v55;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v59,
            v58,
            *(_QWORD *)(v57 + 69160),
            5,
            4,
            94,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
        }
      }
      else
      {
        v83 |= 0x400u;
        v46 = *((_QWORD *)this + 27);
        v92 = *(_DWORD *)(*(_QWORD *)(v46 + 40) + 44LL);
        v93 = *(_DWORD *)(*(_QWORD *)(v46 + 40) + 48LL);
      }
      v47 = (struct tagTHREADINFO **)v75;
LABEL_63:
      xxxSendTransformableMessageTimeout(v47, 838LL, 0LL, (struct tagDRAWITEMSTRUCT *)&v82, 0, 0, 0LL, 1, 1);
      return;
    }
    v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v44) = v42;
    LOBYTE(v45) = v41;
    v73 = v40;
    v35 = v74;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v45,
      v44,
      *(_QWORD *)(v43 + 69160),
      5,
      4,
      92,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v37,
      v38,
      v74,
      v73,
      v86,
      v87);
LABEL_58:
    v26 = v88;
    goto LABEL_60;
  }
}
