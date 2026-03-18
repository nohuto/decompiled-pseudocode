/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA91C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _GetMessagePos @ 0x1400385F8 (_GetMessagePos.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1400601D8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14011AB60 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x14020AB98 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x1402288C0 (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140250420 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026E9D0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A8740 (-UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A948C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z @ 0x1402DDB14 (-PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxMS_TrackMove(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, MOVESIZEDATA *a5)
{
  int v6; // ebx
  __int64 v8; // rdx
  int v9; // r12d
  char v10; // si
  char v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  int v26; // edi
  int v27; // r14d
  int v28; // ebx
  int v29; // esi
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int128 v33; // xmm1
  char v34; // al
  int v35; // edi
  int v36; // r14d
  int v37; // ebx
  int v38; // esi
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  char v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  unsigned int v47; // edx
  int v48; // edi
  int v49; // r14d
  __int64 v50; // rdx
  __int64 KeyState; // rcx
  __int64 v52; // rdx
  bool v53; // zf
  unsigned int v54; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned int v61; // eax
  unsigned int v62; // eax
  int v63; // eax
  int v64; // r9d
  unsigned __int64 v65; // rbx
  unsigned int MessagePos; // eax
  __int64 v67; // r8
  __int64 v68; // rdx
  int v69; // eax
  struct tagTHREADINFO *v70; // r8
  __int64 v71; // rcx
  char v72; // si
  bool v73; // r13
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 x; // rcx
  __int64 y; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // r8d
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // eax
  __int64 DesktopWindow; // rax
  __int64 v93; // rdx
  int v94; // ebx
  int v95; // edi
  __int64 v96; // rax
  char v97; // cl
  struct CHECKPOINT *v98; // rax
  __int128 v99; // xmm0
  __int64 v100; // rdx
  int v101; // edx
  int v102; // ecx
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  char v107; // [rsp+70h] [rbp-21h]
  char v108; // [rsp+70h] [rbp-21h]
  bool v109; // [rsp+71h] [rbp-20h]
  bool v110; // [rsp+71h] [rbp-20h]
  struct tagPOINT v111; // [rsp+78h] [rbp-19h] BYREF
  struct tagPOINT v112; // [rsp+80h] [rbp-11h] BYREF
  struct tagTHREADINFO *x_low; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v114; // [rsp+90h] [rbp-1h] BYREF

  *(_QWORD *)&v114.left = a3;
  v6 = a2;
  v112.x = (__int16)a4;
  v112.y = SHIWORD(a4);
  x_low = PtiCurrent(a1, a2);
  v8 = 0LL;
  v9 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_Ddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      1,
      69,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v6,
      v112.x,
      v112.y);
  }
  v15 = v6 - 256;
  if ( v15 )
  {
    v16 = v15 - 4;
    if ( v16 )
    {
      v17 = v16 - 252;
      if ( v17 )
      {
        if ( v17 != 2 )
          return;
        v18 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v18;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v21,
            *(_QWORD *)(v20 + 69160),
            4,
            1,
            70,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
        }
        xxxTM_MoveDragRect(a5, a4);
        v24 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v25 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v25 = 0;
        }
        v107 = v25;
        LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v109 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v26 = *((_DWORD *)a5 + 9);
          v27 = *((_DWORD *)a5 + 7);
          v28 = *((_DWORD *)a5 + 8);
          v29 = *((_DWORD *)a5 + 6);
          v30 = W32GetUserSessionState(v24, v23);
          LOBYTE(v31) = v109;
          LOBYTE(v32) = v107;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v32,
            v31,
            *(_QWORD *)(v30 + 69160),
            4,
            1,
            71,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v29,
            v27,
            v28,
            v26,
            v28 - v29,
            v26 - v27);
        }
        if ( (*((_DWORD *)a5 + 50) & 0x80000) != 0 )
        {
          v33 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v33;
          v24 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v34 = 0;
          }
          v108 = v34;
          LOBYTE(v24) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v110 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v35 = *((_DWORD *)a5 + 9);
            v36 = *((_DWORD *)a5 + 7);
            v37 = *((_DWORD *)a5 + 8);
            v38 = *((_DWORD *)a5 + 6);
            v39 = W32GetUserSessionState(v24, v23);
            LOBYTE(v40) = v110;
            LOBYTE(v41) = v108;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v41,
              v40,
              *(_QWORD *)(v39 + 69160),
              4,
              1,
              72,
              (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
              v38,
              v36,
              v37,
              v35,
              v37 - v38,
              v35 - v36);
          }
        }
        else if ( *((_DWORD *)a5 + 72) == 2 )
        {
          UpdateMoveSizeDataForCancelation(a5);
          v24 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v42 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v42 = 0;
          }
          v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
            LOBYTE(v45) = v43;
            LOBYTE(v46) = v42;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v46,
              v45,
              *(_QWORD *)(v44 + 69160),
              4,
              1,
              73,
              (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
          }
        }
        *((_DWORD *)a5 + 50) &= ~2u;
        goto LABEL_112;
      }
      v47 = a4;
LABEL_48:
      xxxTM_MoveDragRect(a5, v47);
      return;
    }
  }
  v48 = 0;
  v49 = 0;
  KeyState = (unsigned __int16)_GetKeyState(17LL);
  if ( *(_QWORD *)&v114.left != 13LL )
  {
    if ( *(_QWORD *)&v114.left == 27LL )
    {
      v83 = W32GetUserSessionState(KeyState, v50);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v83 + 56968) + 48LL), 0LL, 0LL, 0);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)x_low + 132, 0, 0) & 0x10) != 0 )
      {
        xxxDrawDragRectEx(a5, 0LL, 2, (struct tagRECT *)((char *)a5 + 24));
        _InterlockedAnd((volatile signed __int32 *)x_low + 132, 0xFFFFFFEF);
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_118;
    }
    v52 = 0x140000000uLL;
    if ( *(_QWORD *)&v114.left != 37LL )
    {
      if ( *(_QWORD *)&v114.left == 38LL )
      {
LABEL_55:
        if ( *((_DWORD *)a5 + 46) )
        {
          if ( (unsigned int)KeyState >= 0x8000 || (v54 = GetDpiForSystem(), (int)GetDpiDependentMetric(13, v54) < 4) )
          {
            v48 = 1;
          }
          else
          {
            DpiForSystem = GetDpiForSystem();
            DpiDependentMetric = GetDpiDependentMetric(13, DpiForSystem);
            v52 = (unsigned int)(DpiDependentMetric >> 31);
            v48 = DpiDependentMetric / 2;
          }
          if ( *(_QWORD *)&v114.left == 38LL )
            v48 = -v48;
          goto LABEL_75;
        }
        v53 = *((_DWORD *)a5 + 45) == 0;
        *((_DWORD *)a5 + 46) = *(_DWORD *)&aAlreadyInMoves[4 * *(_QWORD *)&v114.left + 4];
LABEL_65:
        if ( !v53 )
        {
          v57 = *((_DWORD *)a5 + 50) & 0xFFFFFEFF;
          *((_DWORD *)a5 + 62) = 4;
          *((_DWORD *)a5 + 50) = v57 & 0xEFFFFFFF;
          MOVESIZEDATA::SHData_ResetRuntimeState(a5, 0x140000000LL);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v59, v58, v60) )
            MakeArrangedStateObservable(a5);
        }
        *((_QWORD *)a5 + 21) = 0LL;
LABEL_75:
        if ( *((_DWORD *)a5 + 44) == 9 )
        {
          v64 = 9;
          v65 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
        }
        else
        {
          MessagePos = GetMessagePos(KeyState, v52);
          v64 = *((_DWORD *)a5 + 44);
          v65 = MessagePos;
        }
        v67 = *((int *)a5 + 45);
        v111 = (struct tagPOINT)v65;
        if ( (_DWORD)v67 )
        {
          LOWORD(v111.x) = *((_WORD *)a5 + 2 * dword_14035C7F0[v67] + 20) + v49;
          LODWORD(v65) = v111.x;
          x_low = (struct tagTHREADINFO *)LOWORD(v111.x);
        }
        else
        {
          x_low = (struct tagTHREADINFO *)v65;
        }
        v68 = *((int *)a5 + 46);
        if ( (_DWORD)v68 )
        {
          HIWORD(v111.x) = *((_WORD *)a5 + 2 * dword_14035C7C0[v68] + 20) + v48;
          LODWORD(v65) = v111.x;
        }
        if ( v64 != 9 )
        {
          v69 = v67 + v68;
          v70 = 0LL;
          *((_DWORD *)a5 + 44) = v69;
          if ( a1 )
            v70 = *(struct tagTHREADINFO **)a1;
          xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)a1,
            32LL,
            (unsigned __int64)v70,
            (struct tagDRAWITEMSTRUCT *)((unsigned __int16)(v69 + 9) | 0x2000000LL),
            0,
            0,
            0LL,
            1,
            1);
        }
        v112.x = (__int16)x_low - *((_DWORD *)a5 + 42);
        v112.y = SWORD1(v65) - *((_DWORD *)a5 + 43);
        if ( MOVESIZEDATA::PtInClipRegion(a5, &v112) )
        {
          v71 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v72 = 0;
          }
          v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v72 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v74 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
            LOBYTE(v75) = v73;
            LOBYTE(v76) = v72;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v76,
              v75,
              *(_QWORD *)(v74 + 69160),
              4,
              1,
              74,
              (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
              v112.x,
              v112.y);
          }
          x_low = (struct tagTHREADINFO *)*((_QWORD *)a5 + 27);
          v111 = v112;
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v71);
          LogicalToPhysicalDPIPoint(&v111, &v112, CurrentThreadDpiAwarenessContext, &x_low);
          v80 = W32GetUserSessionState(v79, v78);
          if ( ((*(_QWORD *)&v114.left - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
          {
            x = (unsigned int)v111.x;
            if ( ((*(_QWORD *)&v114.left - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              y = (unsigned int)v111.y;
            }
            else
            {
              y = *(unsigned int *)(v80 + 19188);
              v111.y = *(_DWORD *)(v80 + 19188);
              if ( v111.x == *(_DWORD *)(v80 + 19184) )
              {
                if ( v49 <= 0 )
                  v9 = -1;
                x = (unsigned int)(v9 + v111.x);
                v111.x += v9;
              }
            }
          }
          else
          {
            x = *(unsigned int *)(v80 + 19184);
            y = (unsigned int)v111.y;
            v111.x = *(_DWORD *)(v80 + 19184);
            if ( v111.y == *(_DWORD *)(v80 + 19188) )
            {
              if ( v48 <= 0 )
                v9 = -1;
              y = (unsigned int)(v9 + v111.y);
              v111.y += v9;
            }
          }
          zzzInternalSetCursorPos(x, y, 2, 0);
        }
        v47 = v65;
        goto LABEL_48;
      }
      if ( *(_QWORD *)&v114.left != 39LL )
      {
        if ( *(_QWORD *)&v114.left != 40LL )
          return;
        goto LABEL_55;
      }
    }
    if ( *((_DWORD *)a5 + 45) )
    {
      if ( (unsigned int)KeyState >= 0x8000 || (v61 = GetDpiForSystem(), (int)GetDpiDependentMetric(12, v61) < 4) )
      {
        v49 = 1;
      }
      else
      {
        v62 = GetDpiForSystem();
        v63 = GetDpiDependentMetric(12, v62);
        v52 = (unsigned int)(v63 >> 31);
        v49 = v63 / 2;
      }
      if ( *(_QWORD *)&v114.left == 37LL )
        v49 = -v49;
      goto LABEL_75;
    }
    v53 = *((_DWORD *)a5 + 46) == 0;
    *((_DWORD *)a5 + 45) = *(_DWORD *)&aAlreadyInMoves[4 * *(_QWORD *)&v114.left + 4];
    goto LABEL_65;
  }
  GetMessagePos(KeyState, v50);
LABEL_112:
  v86 = W32GetUserSessionState(v24, v23);
  bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v86 + 56968) + 48LL), 0LL, 0LL, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)x_low + 132, 0, 0) & 0x10) != 0 )
  {
    v87 = *((_DWORD *)a5 + 50);
    if ( (v87 & 0x200) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 || (v87 & 0x20) == 0 )
      xxxDrawDragRectEx(a5, 0LL, ((v87 & 0xFFF80000) << 12) | 1, (struct tagRECT *)((char *)a5 + 24));
    _InterlockedAnd((volatile signed __int32 *)x_low + 132, 0xFFFFFFEF);
  }
LABEL_118:
  v88 = W32GetUserSessionState(v85, v84);
  CCursorClip::ClearClip(*(CCursorClip **)(v88 + 36240));
  zzzLockWindowUpdate2(0LL, 1LL);
  xxxReleaseCapture(v90, v89);
  v91 = *((_DWORD *)a5 + 50) | 8;
  *((_DWORD *)a5 + 50) = v91;
  if ( (v91 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v93 == DesktopWindow )
  {
    v94 = 0;
    v95 = 0;
  }
  else
  {
    v96 = *(_QWORD *)(v93 + 40);
    v95 = *(_DWORD *)(v96 + 104);
    v94 = *(_DWORD *)(v96 + 108);
  }
  if ( *((_QWORD *)a5 + 3) != *((_QWORD *)a5 + 17) || *((_QWORD *)a5 + 4) != *((_QWORD *)a5 + 18) )
  {
    if ( (unsigned int)xxxCallHook(0LL, *(_QWORD *)a1, (__int64)a5 + 24, 5) )
    {
      v99 = *(_OWORD *)((char *)a5 + 136);
      *((_QWORD *)a5 + 27) = *((_QWORD *)a5 + 28);
      *(_OWORD *)((char *)a5 + 24) = v99;
    }
    else
    {
      v97 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( (v97 & 0x20) != 0 )
        {
          v114.left = *((_DWORD *)a5 + 34) - v95;
          v114.right = *((_DWORD *)a5 + 36) - v95;
          v114.top = *((_DWORD *)a5 + 35) - v94;
          v114.bottom = *((_DWORD *)a5 + 37) - v94;
          v98 = CHECKPOINT::Restore((struct tagWND *)a1, &v114);
          if ( v98 )
            *((_DWORD *)v98 + 4) |= 1u;
        }
      }
      else if ( (v97 & 0x20) != 0 )
      {
        v114.left = *((_DWORD *)a5 + 34) - v95;
        v114.right = *((_DWORD *)a5 + 36) - v95;
        v114.top = *((_DWORD *)a5 + 35) - v94;
        v114.bottom = *((_DWORD *)a5 + 37) - v94;
        CHECKPOINT::Restore((struct tagWND *)a1, &v114);
        SetMinimize((struct tagWND *)a1, 0);
      }
      else if ( (v97 & 1) != 0 )
      {
        SetOrClrWF(0, (struct tagWND *)a1, 0xF01u, 1);
      }
    }
  }
  v100 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  if ( (*(_BYTE *)(v100 + 26) & 0x40) != 0 )
  {
    v101 = *(_DWORD *)(v100 + 112);
    *((_DWORD *)a5 + 8) -= v101;
    v102 = *((_DWORD *)a5 + 6);
    v103 = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 9) -= v94;
    *((_DWORD *)a5 + 7) -= v94;
    *((_DWORD *)a5 + 6) = v103;
    *((_DWORD *)a5 + 8) = v101 - v102;
  }
  else
  {
    *((_DWORD *)a5 + 6) -= v95;
    *((_DWORD *)a5 + 8) -= v95;
    *((_DWORD *)a5 + 9) -= v94;
    *((_DWORD *)a5 + 7) -= v94;
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
    AdjustFinalDragRectToKeepCaptionOnScreen(*((struct tagRECT **)a5 + 2), (struct tagRECT *)((char *)a5 + 24));
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v105, v104, v106) )
    xxxCommitMoveSize(a5);
  else
    xxxCommitMoveSizeOld((struct tagWND *)a1, a5);
}
