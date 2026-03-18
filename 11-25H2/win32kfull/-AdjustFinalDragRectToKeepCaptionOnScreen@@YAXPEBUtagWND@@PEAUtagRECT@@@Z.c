/*
 * XREFs of ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140250420
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall AdjustFinalDragRectToKeepCaptionOnScreen(struct tagRECT *retstr, struct tagRECT *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int WindowDpiLastNotify; // r9d
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rax
  int WindowBordersWithDpiAwareness; // r15d
  int v13; // r15d
  LONG right; // eax
  __int64 v15; // rax
  __int128 *MonitorRectForWindow; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct tagRECT *v20; // r14
  LONG top; // ecx
  LONG v22; // eax
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ebx
  bool v28; // di
  bool v29; // r14
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  _BYTE v33[16]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v34; // [rsp+60h] [rbp+7h] BYREF
  __int128 v35; // [rsp+70h] [rbp+17h] BYREF

  v4 = *(_QWORD *)&retstr[2].right;
  v5 = *(_DWORD *)(v4 + 288);
  if ( (v5 & 0xF) == 2 )
  {
    if ( (v5 & 0xF0) == 0x20 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(MonitorFromRect(&a2->left, 2u, v5) + 40) + 60LL);
      goto LABEL_13;
    }
LABEL_6:
    if ( _bittest((const signed __int32 *)(v4 + 232), 0xAu) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)retstr);
    }
    else if ( (v5 & 0xF) == 0
           && (v7 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 464LL) + 272LL);
    }
    goto LABEL_13;
  }
  if ( (v5 & 0xF) != 3 )
    goto LABEL_6;
  WindowDpiLastNotify = (v5 >> 8) & 0x1FF;
LABEL_13:
  v8 = *(_QWORD *)&retstr[2].right;
  v9 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v9 == 3 )
  {
    v10 = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else if ( _bittest((const signed __int32 *)(v8 + 232), 0xAu) )
  {
    v10 = GetWindowDpiLastNotify((__int64)retstr);
  }
  else if ( !v9
         && (v11 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 496LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 64LL) & 1) != 0 )
  {
    v10 = 96;
  }
  else
  {
    v10 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 464LL) + 272LL);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(
                                    (const struct tagWND *)retstr,
                                    v4,
                                    1,
                                    WindowDpiLastNotify);
  v13 = GetDpiDependentMetric(22, v10) + WindowBordersWithDpiAwareness;
  right = a2->right;
  LODWORD(v34) = a2->left;
  *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(right, a2->top);
  HIDWORD(v34) = DWORD1(v34) + v13;
  v15 = MonitorFromRect((INT *)&v34, 2u, *(_DWORD *)(*(_QWORD *)&retstr[2].right + 288LL));
  if ( (*(_BYTE *)(*(_QWORD *)&retstr[2].right + 24LL) & 0x88) != 0 )
    MonitorRectForWindow = (__int128 *)GetMonitorRectForWindow((__int64)&v34, v15, (const struct tagWND *)retstr);
  else
    MonitorRectForWindow = (__int128 *)GetMonitorWorkRectForWindow((__int64)v33, v15, (const struct tagWND *)retstr);
  v34 = *MonitorRectForWindow;
  v18 = *(_QWORD *)&retstr[2].right;
  v35 = 0LL;
  v19 = *(_QWORD *)(v18 + 168);
  if ( v19 && (unsigned int)GreGetRgnBox(v19, &v35) )
  {
    v17 = *(_QWORD *)&retstr[2].right;
    v20 = (struct tagRECT *)&v35;
    top = a2->top;
    LODWORD(v35) = a2->left;
    v22 = a2->right;
    DWORD1(v35) += top - *(_DWORD *)(v17 + 92);
    DWORD2(v35) = v22;
    HIDWORD(v35) = a2->bottom + *(_DWORD *)(v17 + 100) - HIDWORD(v35);
  }
  else
  {
    v20 = a2;
  }
  v23 = v20->top;
  v24 = DWORD1(v34);
  if ( v23 >= SDWORD1(v34) )
  {
    v24 = HIDWORD(v34);
    LODWORD(v26) = v13 + v23;
    if ( (int)v26 < SHIDWORD(v34) )
      return;
  }
  else
  {
    v25 = MonitorFromRect(&v20->left, 2u, *(_DWORD *)(*(_QWORD *)&retstr[2].right + 288LL));
    v26 = HIDWORD(*(_QWORD *)&WindowMargins::ReduceRect(
                                (WindowMargins *)v33,
                                retstr,
                                (const struct tagWND *)v20,
                                (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v25 + 40) + 60LL))->left);
  }
  v27 = v24 - v26;
  if ( v27 )
  {
    v28 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v31,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        68,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v27);
    }
    a2->bottom += v27;
    a2->top += v27;
  }
}
