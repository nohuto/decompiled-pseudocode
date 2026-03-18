/*
 * XREFs of ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274
 * Callers:
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140218258 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004F700 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401460C0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 *     _SetSystemTimer @ 0x140158A0C (_SetSystemTimer.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401DD25C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     bSetDevPreviewRect @ 0x1401E068C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     _ScreenToClient @ 0x1401E0CA4 (_ScreenToClient.c)
 *     GetPhysicalScreenRect @ 0x1401E2F60 (GetPhysicalScreenRect.c)
 *     bMoveDevPreviewRect @ 0x1401E7590 (bMoveDevPreviewRect.c)
 *     bMoveDevDragRect @ 0x1401EDDDC (bMoveDevDragRect.c)
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401F9E2C (GreWindowResizeStarted.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1402295F0 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x14022EAA8 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402AA348 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402AA42C (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402AA50C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     FindSpb @ 0x1402B0DE8 (FindSpb.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawDragRectEx(struct MOVESIZEDATA *a1, struct tagRECT *a2, int a3, struct tagRECT *a4)
{
  struct tagRECT *v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r13d
  unsigned int v11; // r12d
  struct tagRECT *v12; // rax
  BOOL v13; // edi
  __int64 v14; // rcx
  char v15; // al
  __int64 UserSessionState; // rax
  int v17; // r8d
  const char *v18; // rcx
  int v19; // edx
  struct tagRECT v20; // xmm0
  char v21; // al
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r11
  __m128i v26; // xmm6
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 v29; // r10
  __int64 v30; // r10
  int left; // ebx
  LONG right; // esi
  char *Spb; // rdi
  __int64 RectRgnIndirect; // rax
  HRGN v35; // rdi
  __int64 v36; // r8
  __int64 v37; // r8
  struct tagWND *v38; // r13
  _DWORD *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  HWND v43; // rbx
  int v44; // esi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  int v49; // r13d
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r8
  struct tagWND *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  HWND v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rdx
  struct _RECTL *v66; // rax
  struct tagTHREADINFO *v67; // rax
  struct tagRECT *v68; // rdx
  struct tagRECT v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  char v74; // si
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // ebx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rax
  char v90; // r8
  struct _RECTL *v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rcx
  struct tagTHREADINFO *v94; // rax
  __int64 v95; // rdx
  int v96; // edi
  char v97; // si
  bool v98; // bl
  bool v99; // r14
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  char v103; // [rsp+80h] [rbp-80h]
  char v104; // [rsp+81h] [rbp-7Fh]
  int v105; // [rsp+84h] [rbp-7Ch] BYREF
  BOOL v106; // [rsp+88h] [rbp-78h]
  struct tagRECT *v107; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v108; // [rsp+98h] [rbp-68h] BYREF
  int v109; // [rsp+9Ch] [rbp-64h]
  int v110; // [rsp+A0h] [rbp-60h]
  struct tagTHREADINFO *v111; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v112; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL v113; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v115; // [rsp+E0h] [rbp-20h]
  __int128 v116; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v117; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v118; // [rsp+108h] [rbp+8h]
  struct tagRECT v119; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+120h] [rbp+20h] BYREF
  ULONG_PTR v121[2]; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v122; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v123; // [rsp+150h] [rbp+50h] BYREF

  v4 = a4;
  v107 = a4;
  if ( !*((_QWORD *)PtiCurrent((__int64)a1, (__int64)a2) + 62)
    || (v105 = 5, (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v9, v8) + 62) + 8LL) + 64LL) & 1) == 0) )
  {
    v105 = 4;
  }
  v10 = a3;
  v11 = a3 & 0xFFFFFFF;
  if ( (*((_DWORD *)a1 + 50) & 0x10) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 27LL) & 8) == 0 )
  {
    if ( a2 )
      *v4 = *a2;
    return;
  }
  if ( !a2 || *((_QWORD *)a1 + 3) != *(_QWORD *)&a2->left || *((_QWORD *)a1 + 4) != *(_QWORD *)&a2->right )
  {
    v106 = 0;
    v12 = a2;
    v13 = 0;
    if ( !a2 )
      v12 = v4;
    v123 = *v12;
    v14 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (LOBYTE(v8) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    v104 = v8;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v15 = 0;
    }
    v103 = v15;
    if ( (_BYTE)v8 || v15 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v17) = v103;
      v18 = "Preview";
      LOBYTE(v19) = v104;
      if ( v10 >= 0 )
        v18 = "Drag";
      WPP_RECORDER_AND_TRACE_SF_sdddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v17,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        1,
        16,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        (__int64)v18,
        v123.left,
        v123.top,
        v123.right,
        v123.bottom,
        LOBYTE(v123.right) - LOBYTE(v123.left),
        LOBYTE(v123.bottom) - LOBYTE(v123.top));
      v4 = v107;
      v13 = v106;
    }
    if ( v10 >= 0 && v11 == 3 && (unsigned int)xxxDetectNewMonitor(a1, &v123) )
    {
      v20 = v123;
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL);
      v21 = *(_DWORD *)(v14 + 288) & 0xF;
      *v4 = v123;
      v13 = v21 != 2;
      v106 = v13;
      if ( a2 )
      {
        *a2 = v20;
        v106 = v21 != 2;
      }
      if ( v21 != 2 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
      }
    }
    if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 && v11 >= 2 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v111 = PtiCurrent(v14, v8);
      v109 = 0;
      v117 = 0LL;
      v118 = 0LL;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      v110 = 0;
      v115 = -1LL;
      v105 = 0;
      if ( (struct tagTHREADINFO *)v22 != v111 )
        Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, v22);
      _InterlockedOr((volatile signed __int32 *)(v22 + 528), 0x8000u);
      if ( a2 )
        *v4 = *a2;
      v25 = *((_QWORD *)a1 + 2);
      v26 = *(__m128i *)v4;
      v27 = *(_QWORD *)(v25 + 104);
      v112 = *v4;
      if ( !v27 || IsTopLevelWindow(v25) )
      {
        right = _mm_cvtsi128_si32(v26);
        left = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
      }
      else
      {
        ScreenToClient(v28, &v112);
        ScreenToClient(v29, &v112.right);
        v23 = *(_QWORD *)(v30 + 40);
        if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 )
        {
          left = v112.left;
          right = v112.right;
          v112.left = v112.right;
          v112.right = left;
        }
        else
        {
          left = v112.right;
          right = v112.left;
        }
        v26 = (__m128i)v112;
      }
      if ( *(char *)(*(_QWORD *)(v25 + 40) + 16LL) < 0 )
      {
        Spb = (char *)FindSpb(v25);
        v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL);
        v116 = *(_OWORD *)(v23 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v116, (int *)&v116, &a2->left) )
            FreeSpb(Spb, v23);
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL, v23, v24);
      v35 = (HRGN)RectRgnIndirect;
      v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
      if ( v36 )
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v36, 1LL);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *((_QWORD *)a1 + 2));
      v38 = (struct tagWND *)*((_QWORD *)a1 + 2);
      v39 = (_DWORD *)*((_QWORD *)v38 + 5);
      if ( v39[24] - v39[22] == left - right
        && (v40 = (unsigned int)(v39[25] - v39[23]),
            v41 = (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v26, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v26, 4))),
            (_DWORD)v40 == (_DWORD)v41)
        || !(unsigned int)DoesQualifyForResizeOptimization(a1) )
      {
        v49 = v105;
      }
      else
      {
        v108 = 0;
        v42 = DoesRequireResizeLayoutSynchronization(v38);
        v43 = *(HWND *)v38;
        v44 = v42;
        v110 = v42;
        v47 = W32GetUserSessionState(v46, v45);
        v48 = GreWindowResizeStarted(*(_QWORD *)(*(_QWORD *)(v47 + 56968) + 48LL), v43, v44, &v105, &v108);
        v49 = v105;
        if ( v48 && v105 )
          SetSystemTimer(*((_QWORD *)a1 + 2), 65522LL, v108, (__int64)ResizeTimerFunc, 1);
        v109 = 1;
      }
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v41, v40, v37) )
      {
        xxxMoveSizeSetWindowPos(a1, &v112);
      }
      else
      {
        v119 = (struct tagRECT)v26;
        xxxMoveSizeSetWindowPosOld(a1, &v119);
        if ( (*((_DWORD *)a1 + 50) & 0x200000) != 0 )
        {
          v51 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
          v52 = *((_QWORD *)a1 + 2);
          *((_QWORD *)a1 + 27) = v51;
          if ( IsTopLevelWindow(v52) )
          {
            v50 = *(_QWORD *)(v53 + 40);
            if ( (*(_DWORD *)(v50 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v53 + 16) + 688LL) & 0x2000000) == 0 )
            {
              if ( a2 )
              {
                *a2 = *(struct tagRECT *)(v50 + 88);
                v53 = *((_QWORD *)a1 + 2);
              }
              *v107 = *(struct tagRECT *)(*(_QWORD *)(v53 + 40) + 88LL);
              *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
            }
          }
          *((_DWORD *)a1 + 50) &= ~0x200000u;
        }
      }
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v50);
      if ( *(struct MOVESIZEDATA **)(v22 + 712) == a1 )
      {
        v56 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL, v54, v55);
        v57 = v56;
        v58 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v58 )
          GreCombineRgn(v56, v56, v58, 1LL);
        if ( v35 )
        {
          if ( v57 )
          {
            GreCombineRgn(v35, v35, v57, 4LL);
          }
          else
          {
            GreDeleteObject(v35);
            v35 = 0LL;
          }
        }
        v59 = *(struct tagWND **)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v121, (__int64)v59);
        xxxUpdateThreadsWindows(v111, v59, v35);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v121, v60);
        if ( v109 )
        {
          v63 = (HWND)**((_QWORD **)a1 + 2);
          v64 = W32GetUserSessionState(v62, v61);
          GreWindowResizeComplete(*(_QWORD *)(*(_QWORD *)(v64 + 56968) + 48LL), v63);
          if ( v49 )
          {
            if ( !v110 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v57);
      }
      GreDeleteObject(v35);
      _InterlockedAnd((volatile signed __int32 *)(v22 + 528), 0xFFFF7FFF);
      LOBYTE(v65) = 1;
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v65);
      goto LABEL_108;
    }
    v66 = (struct _RECTL *)a2;
    if ( !a2 )
      v66 = (struct _RECTL *)v4;
    v122 = (struct tagRECT)*v66;
    v113 = (struct _RECTL)*GetPhysicalScreenRect(&v113, v8);
    if ( v10 >= 0 )
      v67 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 27);
    else
      v67 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 30);
    v68 = (struct tagRECT *)*((_QWORD *)a1 + 2);
    v111 = v67;
    v69 = *WindowMargins::ReduceRect(
             (WindowMargins *)&v117,
             v68,
             (const struct tagWND *)&v122,
             (const struct tagRECT *)*(unsigned __int16 *)(*((_QWORD *)v67 + 5) + 60LL));
    v70 = *((_QWORD *)a1 + 2);
    v122 = v69;
    LogicalToPhysicalDPIRect(&v122, &v122, *(unsigned int *)(*(_QWORD *)(v70 + 40) + 288LL), &v111);
    if ( v13 )
    {
      v73 = W32GetUserSessionState(v72, v71);
      v74 = v105;
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v73 + 56968) + 48LL), (__int64)&v122, (__int64)&v113, v105);
    }
    else
    {
      v74 = v105;
    }
    if ( a2 )
    {
      if ( v10 < 0 && (*((_DWORD *)a1 + 50) & 0x20) != 0 )
      {
        v75 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v72, v71) + 19872) + 4960LL);
        v76 = **((_QWORD **)a1 + 2);
        v79 = W32GetUserSessionState(v78, v77);
        bMoveDevPreviewRect(
          *(Gre::Base **)(*(_QWORD *)(v79 + 56968) + 48LL),
          (const struct _RECTL *)&v122,
          v74,
          v76,
          v75);
      }
      else
      {
        v82 = 0;
        if ( *((_QWORD *)PtiCurrent(v72, v71) + 62) )
        {
          v81 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v81, v80) + 62) + 8LL);
          if ( (*(_DWORD *)(v81 + 64) & 1) != 0 )
            v82 = 1;
        }
        v83 = W32GetUserSessionState(v81, v80);
        bMoveDevDragRect(*(Gre::Base **)(*(_QWORD *)(v83 + 56968) + 48LL), &v122.left, &v113, v82);
      }
      *v107 = *a2;
      goto LABEL_108;
    }
    if ( v11 )
    {
      if ( v11 == 1 && v10 < 0 )
      {
        v87 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v72, v71) + 19872) + 4960LL);
        v88 = **((_QWORD **)a1 + 2);
        v89 = W32GetUserSessionState(v93, v92);
        v90 = 0;
        v91 = 0LL;
        goto LABEL_107;
      }
    }
    else
    {
      v84 = W32GetUserSessionState(v72, v71);
      if ( v10 < 0 )
      {
        v87 = *(_QWORD *)(*(_QWORD *)(v84 + 19872) + 4960LL);
        v88 = **((_QWORD **)a1 + 2);
        v89 = W32GetUserSessionState(v86, v85);
        v90 = v74;
        v91 = (struct _RECTL *)&v122;
LABEL_107:
        bSetDevPreviewRect(*(HDEV *)(*(_QWORD *)(v89 + 56968) + 48LL), (__int64)v91, v90, v88, v87);
        goto LABEL_108;
      }
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v84 + 56968) + 48LL), (__int64)&v122, (__int64)&v113, v74);
    }
LABEL_108:
    if ( v106 && *((_DWORD *)a1 + 44) == 9 )
    {
      v94 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 27);
      v107 = 0LL;
      v111 = v94;
      PhysicalToLogicalDPIPoint(
        &v107,
        (char *)a1 + 260,
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
        &v111);
      v96 = v123.left - (_DWORD)v107;
      v97 = LOBYTE(v123.top) - BYTE4(v107);
      *((_DWORD *)a1 + 43) = v123.top - HIDWORD(v107);
      *((_DWORD *)a1 + 42) = v96;
      v98 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v98 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v100 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v95);
        LOBYTE(v101) = v99;
        LOBYTE(v102) = v98;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v102,
          v101,
          *(_QWORD *)(v100 + 69160),
          4,
          1,
          17,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
          v96,
          v97);
      }
    }
  }
}
