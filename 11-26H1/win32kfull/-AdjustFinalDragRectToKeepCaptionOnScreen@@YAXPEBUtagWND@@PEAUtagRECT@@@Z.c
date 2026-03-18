/*
 * XREFs of ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x1402C3D40
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall AdjustFinalDragRectToKeepCaptionOnScreen(struct tagRECT *retstr, struct tagRECT *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int WindowDpiLastNotify; // r9d
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  unsigned int v10; // r14d
  __int64 v11; // rax
  int WindowBordersWithDpiAwareness; // r15d
  int DpiDependentMetric; // eax
  LONG top; // ecx
  int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // rax
  __m128i *MonitorRectForWindow; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rcx
  struct tagRECT *v23; // r14
  LONG v24; // ecx
  LONG right; // eax
  __int32 v26; // eax
  __int32 v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ebx
  bool v31; // di
  bool v32; // r14
  __int64 UserSessionState; // rax
  int v34; // r8d
  int v35; // edx
  __m128i v36; // [rsp+50h] [rbp-9h] BYREF
  __m128i v37; // [rsp+60h] [rbp+7h] BYREF
  __int128 v38; // [rsp+70h] [rbp+17h] BYREF

  v4 = *(_QWORD *)&retstr[2].right;
  v5 = *(_DWORD *)(v4 + 288);
  if ( (v5 & 0xF) == 2 )
  {
    if ( (v5 & 0xF0) == 0x20 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(MonitorFromRect(&a2->left, 2LL, v5) + 40) + 60LL);
      goto LABEL_13;
    }
LABEL_6:
    if ( _bittest((const signed __int32 *)(v4 + 232), 0xAu) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)retstr);
    }
    else if ( (v5 & 0xF) == 0
           && (v7 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 456LL) + 272LL);
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
         && (v11 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 488LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 64LL) & 1) != 0 )
  {
    v10 = 96;
  }
  else
  {
    v10 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 456LL) + 272LL);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(
                                    (const struct tagWND *)retstr,
                                    v4,
                                    1,
                                    WindowDpiLastNotify);
  DpiDependentMetric = GetDpiDependentMetric(22, v10);
  top = a2->top;
  v15 = DpiDependentMetric + WindowBordersWithDpiAwareness;
  v16 = *(_QWORD *)&retstr[2].right;
  v36.m128i_i32[0] = a2->left;
  v36.m128i_i32[2] = a2->right;
  LODWORD(v16) = *(_DWORD *)(v16 + 288);
  v36.m128i_i32[1] = top;
  v36.m128i_i32[3] = top + v15;
  v17 = MonitorFromRect(v36.m128i_i32, 2LL, v16);
  if ( (*(_BYTE *)(*(_QWORD *)&retstr[2].right + 24LL) & 0x88) != 0 )
    MonitorRectForWindow = GetMonitorRectForWindow(&v36, v17, (const struct tagWND *)retstr);
  else
    MonitorRectForWindow = GetMonitorWorkRectForWindow(&v37, v17, (const struct tagWND *)retstr);
  v20 = *MonitorRectForWindow;
  v21 = *(_QWORD *)&retstr[2].right;
  v36 = v20;
  v38 = 0LL;
  v22 = *(_QWORD *)(v21 + 168);
  if ( v22 && (unsigned int)GreGetRgnBox(v22, &v38) )
  {
    v19 = *(_QWORD *)&retstr[2].right;
    v23 = (struct tagRECT *)&v38;
    v24 = a2->top;
    LODWORD(v38) = a2->left;
    right = a2->right;
    DWORD1(v38) += v24 - *(_DWORD *)(v19 + 92);
    DWORD2(v38) = right;
    HIDWORD(v38) = a2->bottom + *(_DWORD *)(v19 + 100) - HIDWORD(v38);
  }
  else
  {
    v23 = a2;
  }
  v26 = v23->top;
  v27 = v36.m128i_i32[1];
  if ( v26 >= v36.m128i_i32[1] )
  {
    v27 = v36.m128i_i32[3];
    LODWORD(v29) = v15 + v26;
    if ( (int)v29 < v36.m128i_i32[3] )
      return;
  }
  else
  {
    v28 = MonitorFromRect(&v23->left, 2LL, *(_DWORD *)(*(_QWORD *)&retstr[2].right + 288LL));
    v29 = HIDWORD(*(_QWORD *)&WindowMargins::ReduceRect(
                                (WindowMargins *)&v37,
                                retstr,
                                (const struct tagWND *)v23,
                                (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v28 + 40) + 60LL))->left);
  }
  v30 = v27 - v29;
  if ( v30 )
  {
    v31 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v31;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        68,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v30);
    }
    a2->bottom += v30;
    a2->top += v30;
  }
}
