/*
 * XREFs of ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590
 * Callers:
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002D528 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401F5CEC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14001F610 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400213F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008CBCC (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DwmSyncHitTestQuery @ 0x140118B24 (DwmSyncHitTestQuery.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140145D20 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140154B88 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x14016813C (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     SizeBoxHwnd @ 0x1402287F8 (SizeBoxHwnd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x14022EFF8 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddds @ 0x14026A2FC (WPP_RECORDER_AND_TRACE_SF_ddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x14026BC2C (WPP_RECORDER_AND_TRACE_SF_ddqd.c)
 *     Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline @ 0x14028426C (Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxDCEWindowHitTestIndirect(
        struct tagWND *a1,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagWND *v6; // rsi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v8; // rdx
  bool v9; // r15
  bool v10; // r14
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r12
  char v15; // r14
  int v16; // r13d
  int v17; // ebx
  struct tagWND *v18; // r8
  ULONG_PTR *v19; // rax
  __int64 v20; // rdx
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v21; // r8
  bool v22; // di
  struct tagWND *v23; // rax
  bool v24; // bl
  __int64 v25; // rdx
  bool v26; // r14
  bool v27; // bl
  __int64 v28; // r9
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  bool v32; // r14
  bool v33; // bl
  __int64 v34; // r9
  bool v35; // r14
  bool v36; // bl
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // bl
  void *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  ULONG_PTR *v49; // rax
  ULONG_PTR v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  bool v53; // r15
  bool v54; // r14
  int v55; // r12d
  const char *v56; // rbx
  __int64 v57; // rax
  struct tagTHREADINFO *v58; // rax
  __int64 *v59; // rax
  __int64 v60; // rcx
  ULONG_PTR *v61; // rax
  ULONG_PTR v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  bool v65; // r15
  bool v66; // r14
  __int64 v67; // rbx
  __int64 v68; // rax
  ULONG_PTR *v69; // rax
  __int64 v70; // rdx
  bool v71; // bl
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v72; // r14
  __int64 v73; // rcx
  struct tagWND *i; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // r8d
  int v79; // edx
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  _DWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rcx
  bool v89; // bl
  __int64 v90; // rax
  int *v91; // rax
  int v92; // edx
  unsigned __int8 *v93; // rdx
  __int64 v94; // rax
  bool v95; // di
  bool v96; // r14
  __int64 v97; // rbx
  __int64 v98; // rax
  bool v100; // di
  bool v101; // bl
  __int64 v102; // rax
  bool v103; // di
  bool v104; // r14
  __int64 v105; // rbx
  __int64 v106; // rax
  ULONG_PTR *v107; // rax
  bool v108; // di
  bool v109; // r14
  __int64 v110; // rbx
  __int64 v111; // rax
  ULONG_PTR *v112; // rax
  bool v113; // di
  __int64 v114; // rax
  int v115; // [rsp+20h] [rbp-69h]
  int v116; // [rsp+20h] [rbp-69h]
  int v117; // [rsp+28h] [rbp-61h]
  int v118; // [rsp+28h] [rbp-61h]
  int v119; // [rsp+30h] [rbp-59h]
  int v120; // [rsp+30h] [rbp-59h]
  int v121; // [rsp+38h] [rbp-51h]
  int v122; // [rsp+38h] [rbp-51h]
  struct tagPOINT v123; // [rsp+60h] [rbp-29h] BYREF
  struct tagWND *v124; // [rsp+68h] [rbp-21h]
  __int64 v125; // [rsp+70h] [rbp-19h]
  struct tagPOINT v126; // [rsp+78h] [rbp-11h] BYREF
  int v127; // [rsp+80h] [rbp-9h] BYREF
  int v128; // [rsp+84h] [rbp-5h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-1h] BYREF
  struct tagWND *v130; // [rsp+90h] [rbp+7h]
  ULONG_PTR v131; // [rsp+98h] [rbp+Fh] BYREF
  struct tagWND *v132; // [rsp+A0h] [rbp+17h]
  unsigned int v133; // [rsp+A8h] [rbp+1Fh]
  char v134; // [rsp+F0h] [rbp+67h]

  v6 = a1;
  if ( !a1 )
    return 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = *((unsigned int *)a4 + 8);
  v133 = CurrentThreadDpiAwarenessContext;
  v126 = a2;
  if ( (v8 & 2) != 0 )
    LogicalToPhysicalDPIPoint(&v126, &v126, CurrentThreadDpiAwarenessContext, 0LL);
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v10 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
     && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v9 || v10 )
  {
    v11 = *(_QWORD *)v6;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    WPP_RECORDER_AND_TRACE_SF_ddq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v10,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      15,
      10,
      (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
      v126.x,
      v126.y,
      v11);
  }
  v13 = *((_QWORD *)v6 + 13);
  v14 = 0LL;
  v15 = 0;
  v125 = v13;
  v134 = 0;
  v16 = -2;
  v123 = v126;
  v17 = 0;
  v124 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    if ( !v17 )
    {
      v71 = IsCompositionInputWindowForHitTest(v6, v13);
      if ( v71 )
      {
        v72 = a4;
        if ( (*((_DWORD *)a4 + 8) & 4) == 0 )
          goto LABEL_160;
        v70 = *((_QWORD *)v6 + 3);
        v73 = 0LL;
        if ( v70 )
          v73 = *(_QWORD *)(v70 + 112);
        if ( *((_QWORD *)v6 + 13) != v73 && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
        {
LABEL_160:
          v17 = 3;
          goto LABEL_222;
        }
      }
      else
      {
        if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
        {
          v17 = 3;
          goto LABEL_223;
        }
        v72 = a4;
      }
      if ( !(unsigned int)CoreWindowProp::IsComponent(v6, v70) )
      {
        for ( i = v6; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
        {
          v75 = *((_QWORD *)i + 13);
          if ( !v75 )
            break;
          v76 = *((_QWORD *)i + 3);
          if ( v76 )
          {
            v77 = *(_QWORD *)(v76 + 8);
            if ( v77 )
            {
              if ( v75 == *(_QWORD *)(v77 + 24) )
              {
                if ( i && *(char *)(*((_QWORD *)i + 5) + 233LL) < 0 )
                  goto LABEL_179;
                break;
              }
            }
          }
        }
        v78 = *(unsigned __int8 *)(*((_QWORD *)v6 + 5) + 233LL);
        v79 = (v78 >> 4) & 2 | 1;
        if ( (v78 & 0x40) == 0 )
          v79 = (v78 >> 4) & 2;
        v80 = v79 | 1;
        if ( (v78 & 0x80u) == 0 )
          v80 = v79;
        if ( v80 )
        {
          v17 = 3;
          goto LABEL_222;
        }
      }
LABEL_179:
      if ( (*((_DWORD *)v72 + 8) & 2) != 0
        && (v81 = *((_QWORD *)v6 + 13)) != 0
        && (v82 = *((_QWORD *)v6 + 3)) != 0
        && (v83 = *(_QWORD *)(v82 + 8)) != 0
        && v81 == *(_QWORD *)(v83 + 24)
        && (((unsigned __int16)(v133 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) >> 8)) & 0x1FF) == 0 )
      {
        v84 = (__int64)a2;
        v124 = v6;
        v123 = a2;
        v18 = v6;
      }
      else
      {
        v84 = (__int64)v123;
        v18 = v124;
      }
      if ( !v71 )
      {
        if ( !*((_QWORD *)v6 + 27) || v6 == v18 )
        {
          v86 = (_DWORD *)*((_QWORD *)v6 + 5);
          if ( (int)v84 < v86[22] || (int)v84 >= v86[24] || SHIDWORD(v84) < v86[23] || SHIDWORD(v84) >= v86[25] )
          {
            v15 = v134;
            v17 = 3;
            goto LABEL_224;
          }
        }
        else
        {
          if ( !DCEHitTestWindow(
                  (const struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
                  *((const struct _D3DMATRIX **)v6 + 27),
                  &v123,
                  *((const struct _SUBPIXELS **)v72 + 5)) )
          {
            v17 = 3;
            goto LABEL_222;
          }
          v84 = (__int64)v123;
        }
      }
      v85 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
      if ( v85 )
      {
        if ( !(unsigned int)GrePtInRegion(v85, v84) )
        {
          v17 = 3;
          goto LABEL_222;
        }
        v84 = (__int64)v123;
      }
      v87 = *((_QWORD *)v6 + 5);
      if ( (*(_BYTE *)(v87 + 26) & 8) == 0
        || (*(_DWORD *)(v87 + 232) & 2) != 0
        || DCELayerHitTest(v6, (struct tagPOINT)v84) )
      {
        if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6, v84) && (*((_DWORD *)v72 + 8) & 1) != 0 )
        {
          if ( v71 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
            v17 = 4;
          else
            v17 = 3;
        }
        else
        {
          if ( !v71 )
          {
            v88 = *((_QWORD *)v6 + 5);
            if ( (*(_BYTE *)(v88 + 31) & 0x20) == 0
              && v123.x >= *(_DWORD *)(v88 + 104)
              && v123.x < *(_DWORD *)(v88 + 112)
              && v123.y >= *(_DWORD *)(v88 + 108)
              && v123.y < *(_DWORD *)(v88 + 116) )
            {
              v18 = v124;
              v15 = v134;
              v13 = v125;
              if ( *((_QWORD *)v6 + 14) )
              {
                v6 = (struct tagWND *)*((_QWORD *)v6 + 14);
                v17 = 0;
              }
              else
              {
                v17 = 2;
              }
              goto LABEL_225;
            }
          }
          v17 = 1;
        }
      }
      else
      {
        v17 = 3;
      }
LABEL_222:
      v15 = v134;
      goto LABEL_223;
    }
    if ( v17 == 1 || v17 == 2 )
    {
      v127 = -2;
      if ( IsCompositionInputWindowForHitTest(v6, v13) )
      {
        v26 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        v27 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
           && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
        if ( v26 || v27 )
        {
          v28 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25) + 69160);
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v26,
            v27,
            v28,
            5,
            15,
            11,
            (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids);
        }
        goto LABEL_55;
      }
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        v30 = *CurrentThreadWin32Thread;
      else
        v30 = 0LL;
      if ( *((_QWORD *)v6 + 2) != v30 )
      {
        if ( (unsigned int)((__int64 (*)(void))Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline)() )
        {
          v35 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
          v36 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
             && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
          if ( v35 || v36 )
          {
            v37 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31) + 69160);
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v35,
              v36,
              v37,
              5,
              15,
              12,
              (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids);
          }
        }
        else
        {
          if ( v15 && (*((_DWORD *)a4 + 8) & 8) != 0 )
          {
            v100 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
            v101 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
            if ( v100 || v101 )
            {
              v102 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v100,
                v101,
                *(_QWORD *)(v102 + 69160),
                5,
                15,
                13,
                (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids);
            }
            return 0LL;
          }
          v32 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
          v33 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
             && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
          if ( v32 || v33 )
          {
            v34 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31) + 69160);
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v32,
              v33,
              v34,
              5,
              15,
              14,
              (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids);
          }
        }
LABEL_55:
        v17 = 4;
        v16 = 1;
        goto LABEL_222;
      }
      v38 = *((_QWORD *)v6 + 13);
      if ( v38
        && (v39 = *((_QWORD *)v6 + 3)) != 0
        && (v40 = *(_QWORD *)(v39 + 8)) != 0
        && v38 == *(_QWORD *)(v40 + 24)
        && (unsigned int)IsWindowDesktopComposed(v6)
        && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) != 0
        && v17 != 2 )
      {
        v41 = (__int64 *)PsGetCurrentThreadWin32Thread();
        if ( v41 )
          v42 = *v41;
        else
          v42 = 0LL;
        BugCheckParameter3 = *(_QWORD *)(v42 + 456);
        *(_QWORD *)(v42 + 456) = &BugCheckParameter3;
        v130 = v6;
        HMLockObject(v6);
        v43 = ReferenceDwmApiPort();
        v128 = 1;
        v44 = 0;
        v45 = (void *)v43;
        v48 = W32GetUserSessionState(v47, v46);
        if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v48 + 16)) == 1 )
        {
          v44 = 1;
          LeaveMitRitHazardCrit();
        }
        UserSessionSwitchLeaveCrit();
        DwmSyncHitTestQuery(
          v45,
          *((_QWORD *)a4 + 1),
          (LOWORD(v123.y) << 16) | LOWORD(v123.x),
          -2,
          (__int64)&v127,
          (__int64)&v128);
        EnterCrit(1LL, 0LL);
        if ( v44 )
          EnterMitRitHazardCrit();
        v49 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
        if ( v49 )
          v50 = *v49;
        else
          v50 = 0LL;
        v51 = Win32HM_UnlockFromThread<1>(v50, (ULONG_PTR)&BugCheckParameter3);
        v130 = 0LL;
        BugCheckParameter3 = -1LL;
        if ( !v51 || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
        {
          v103 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v104 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v103 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v105 = *(_QWORD *)v6;
            v106 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v103,
              v104,
              *(_QWORD *)(v106 + 69160),
              3,
              15,
              15,
              (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
              v105);
          }
          if ( BugCheckParameter3 != -1LL )
          {
            v107 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
            if ( v107 )
              v14 = *v107;
            Win32HM_UnlockFromThread<1>(v14, (ULONG_PTR)&BugCheckParameter3);
          }
          return 0LL;
        }
        v53 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        v54 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
           && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
        v16 = v127;
        v55 = v128;
        if ( v53 || v54 )
        {
          v56 = "no";
          if ( !v128 )
            v56 = "yes";
          v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
          WPP_RECORDER_AND_TRACE_SF_ddds(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v53,
            v54,
            *(_QWORD *)(v57 + 69160),
            v115,
            v117,
            v119,
            v121,
            v123.x,
            v123.y,
            v16,
            (__int64)v56);
        }
        if ( BugCheckParameter3 != -1LL )
        {
          v58 = PtiCurrent();
          Win32HM_UnlockFromThread<1>((ULONG_PTR)v58, (ULONG_PTR)&BugCheckParameter3);
        }
        if ( !v55 )
        {
          v14 = 0LL;
          goto LABEL_124;
        }
        v14 = 0LL;
      }
      else
      {
LABEL_124:
        v59 = (__int64 *)PsGetCurrentThreadWin32Thread();
        if ( v59 )
          v60 = *v59;
        else
          v60 = 0LL;
        v131 = *(_QWORD *)(v60 + 456);
        *(_QWORD *)(v60 + 456) = &v131;
        v132 = v6;
        HMLockObject(v6);
        v16 = xxxSendTransformableMessageTimeout(v6, 0x84u, 0, 0, 0LL, 1, 0);
        v61 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
        if ( v61 )
          v62 = *v61;
        else
          v62 = 0LL;
        v63 = Win32HM_UnlockFromThread<1>(v62, (ULONG_PTR)&v131);
        v132 = 0LL;
        v131 = -1LL;
        if ( !v63 || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
        {
          v108 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
          v109 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v108 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v110 = *(_QWORD *)v6;
            v111 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v64);
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v108,
              v109,
              *(_QWORD *)(v111 + 69160),
              3,
              15,
              17,
              (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
              v110);
          }
          if ( v131 != -1LL )
          {
            v112 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
            if ( v112 )
              v14 = *v112;
            Win32HM_UnlockFromThread<1>(v14, (ULONG_PTR)&v131);
          }
          return 0LL;
        }
        v65 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        v66 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
           && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
        if ( v65 || v66 )
        {
          v67 = *(_QWORD *)v6;
          v68 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v64);
          WPP_RECORDER_AND_TRACE_SF_ddqd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v65,
            v66,
            *(_QWORD *)(v68 + 69160),
            v116,
            v118,
            v120,
            v122,
            v123.x,
            v123.y,
            v67,
            v16);
        }
        if ( v131 != -1LL )
        {
          v69 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
          if ( v69 )
            Win32HM_UnlockFromThread<1>(*v69, (ULONG_PTR)&v131);
          else
            Win32HM_UnlockFromThread<1>(0LL, (ULONG_PTR)&v131);
        }
      }
      if ( v16 != -1 )
      {
        v17 = 4;
        goto LABEL_222;
      }
      v15 = 1;
      v134 = 1;
      v17 = 3;
      if ( (unsigned int)((__int64 (*)(void))Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline)() )
        v16 = -2;
LABEL_223:
      v18 = v124;
LABEL_224:
      v13 = v125;
      goto LABEL_225;
    }
    if ( v17 != 3 )
      break;
    if ( *((_QWORD *)v6 + 27) || v6 == v18 )
    {
      v123 = v126;
      RestoreLogicalPoint(*((struct tagWND **)v6 + 13), &v123, a4);
      v13 = v125;
    }
    v23 = (struct tagWND *)*((_QWORD *)v6 + 11);
    v18 = 0LL;
    v124 = 0LL;
    if ( v23 )
    {
      v17 = 0;
      v6 = v23;
      if ( *((_QWORD *)v23 + 13) == v13 && a3 )
      {
LABEL_37:
        v24 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v113 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v114 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v24,
            v113,
            *(_QWORD *)(v114 + 69160),
            4,
            15,
            21,
            (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
            v126.x,
            v126.y);
        }
        return 0LL;
      }
    }
    else
    {
      v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
      v17 = 2;
    }
LABEL_225:
    if ( v6 == (struct tagWND *)v13 )
      goto LABEL_37;
  }
  if ( (unsigned int)Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline(
                       (unsigned int)(v17 - 3),
                       v13,
                       v18)
    && v15 )
  {
    v19 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
    if ( v19 )
      v14 = *v19;
    v21 = a4;
    if ( *((_QWORD *)v6 + 2) != v14 && (*((_DWORD *)a4 + 8) & 8) != 0 )
    {
      v22 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      v89 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v22 || v89 )
      {
        v90 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v89,
          *(_QWORD *)(v90 + 69160),
          5,
          15,
          19,
          (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids);
      }
      return 0LL;
    }
  }
  else
  {
    v21 = a4;
  }
  v91 = (int *)*((_QWORD *)v21 + 3);
  if ( v91 )
  {
    *v91 = v16;
    *((_BYTE *)v21 + 36) = 1;
  }
  if ( v123 != v126 )
  {
    v92 = LOWORD(v123.x) | (LOWORD(v123.y) << 16);
    *((_BYTE *)v21 + 48) = 1;
    *((_QWORD *)v21 + 2) = v92;
  }
  v93 = (unsigned __int8 *)*((_QWORD *)v6 + 5);
  if ( v16 == (((v93[25] ^ (unsigned int)(unsigned __int8)~v93[26]) >> 6) & 1) + 16 && (v93[30] & 4) == 0 )
  {
    v94 = SizeBoxHwnd(v6);
    if ( v94 )
      v6 = (struct tagWND *)v94;
  }
  v95 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x4000) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v96 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v95 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v97 = *(_QWORD *)v6;
    v98 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v93);
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v95,
      v96,
      *(_QWORD *)(v98 + 69160),
      4,
      15,
      20,
      (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
      v97,
      v123.x,
      v123.y,
      v16);
  }
  return *(_QWORD *)v6;
}
