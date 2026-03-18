/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E488C
 * Callers:
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4340 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402E30C8 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E326C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     GetScrollRequestCodeString @ 0x1402E4F04 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlsddddddll @ 0x1402E6CA4 (WPP_RECORDER_AND_TRACE_SF_qlsddddddll.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  int v5; // ebp
  struct tagWND *v7; // r15
  bool v8; // al
  unsigned int *v9; // rcx
  unsigned int v10; // r14d
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  unsigned int v14; // edi
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  int v19; // r14d
  HDC DCEx; // r12
  int v21; // ebx
  int v22; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // r9d
  unsigned __int16 v30; // ax
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // [rsp+A0h] [rbp-58h]
  bool v34; // [rsp+A1h] [rbp-57h]
  struct tagRECT v35; // [rsp+A8h] [rbp-50h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = a1;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = &WPP_RECORDER_INITIALIZED;
  v33 = v8;
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = (*(_DWORD *)a2 >> 1) & 1;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    W32GetUserSessionState(v9, *(_QWORD *)&WPP_GLOBAL_Control);
    GetScrollRequestCodeString(a4, v10);
    LOBYTE(v11) = v34;
    LOBYTE(v12) = v33;
    v5 = a3;
    WPP_RECORDER_AND_TRACE_SF_qlsddddddll(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v12, v11, v13);
    v4 = a4;
    v7 = a1;
  }
  v14 = 2;
  if ( v4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v35 = (struct tagRECT)*((_OWORD *)a2 + 2);
    DCEx = (HDC)_GetDCEx(v7, 0LL, 65537LL);
    if ( (*(_DWORD *)a2 & 2) != 0 )
    {
      v21 = 0;
      v22 = 10;
    }
    else
    {
      v22 = 1;
      v21 = 11;
    }
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(v21, DpiForSystem);
    v25 = GetDpiForSystem();
    v26 = GetDpiDependentMetric(v22, v25);
    v19 = 3;
    if ( DpiDependentMetric == v35.right - v35.left && v26 == v35.bottom - v35.top )
    {
      v27 = *(_DWORD *)a2;
      if ( v4 )
        v28 = ~(2 * (_BYTE)v27) & 4 | 0x32;
      else
        v28 = (v27 & 2) != 0 ? 46 : 58;
      v29 = v28 + 1;
      if ( !v5 )
        v29 = v28;
      BitBltSysBmp(DCEx, v35.left, v35.top, v29, 1);
    }
    else
    {
      DrawFrameControl(DCEx, &v35, 3u, (v4 != 0) | (v5 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(DCEx);
    if ( v4 )
      v30 = 1544;
    else
      v30 = 1537;
    SetOrClrWF(v5 != 0, v7, v30, 1);
    UserSessionState = W32GetUserSessionState(v32, v31);
    v14 = v4 != 0 ? 5 : 1;
  }
  else
  {
    InvertScrollHilite(v7, a2);
    if ( v4 == 2 )
      v15 = 1538;
    else
      v15 = 1540;
    SetOrClrWF(v5 != 0, v7, v15, 1);
    UserSessionState = W32GetUserSessionState(v17, v16);
    if ( v4 != 2 )
      v14 = 4;
    v19 = 3;
  }
  if ( !*(_DWORD *)(UserSessionState + 70600) )
    v19 = 1;
  xxxWindowEvent(0x800Au, v7, ((*(_DWORD *)a2 & 2) != 0) | 0xFFFFFFFA, v14, v19);
}
