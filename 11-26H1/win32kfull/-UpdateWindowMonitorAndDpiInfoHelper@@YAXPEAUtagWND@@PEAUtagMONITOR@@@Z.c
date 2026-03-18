/*
 * XREFs of ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14004ABFC
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreNotifyHwndDpiDirty @ 0x1400D3F38 (GreNotifyHwndDpiDirty.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall UpdateWindowMonitorAndDpiInfoHelper(struct tagWND *a1, struct tagMONITOR *a2)
{
  _DWORD *v2; // rax
  _DWORD *v5; // rcx
  __int64 v6; // r13
  struct MOVESIZEDATA *v7; // rcx
  char v8; // r12
  char v9; // bp
  char *v10; // r14
  __int64 v11; // rdi
  __int16 v12; // bx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  char *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rax
  struct MOVESIZEDATA *v21; // rcx
  char v22; // bp
  char v23; // di
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax

  v2 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v2 )
  {
    --*v2;
    v5 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v5 )
      Win32FreePool(v5);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)a2;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v8 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v9 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v9 = 0;
    }
    if ( v8 || v9 )
    {
      v11 = *(_QWORD *)a1;
      v10 = (char *)a2 + 40;
      v12 = *(_WORD *)(*((_QWORD *)a2 + 5) + 60LL);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v14) = v9;
      LOBYTE(v15) = v8;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        10,
        (__int64)&WPP_c7bfb566737f33b6096b02c50a7f76f8_Traceguids,
        v11,
        v12);
    }
    else
    {
      v10 = (char *)a2 + 40;
    }
    v16 = v10;
    if ( PtiCurrent((__int64)v7) )
    {
      if ( *((_QWORD *)PtiCurrent(v17) + 61) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v18) + 61) + 8LL) + 64LL) & 1) != 0 )
        {
          v19 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v19 + 288) & 0x4000000F) == 0x40000000
            && *(_WORD *)(v19 + 284) != *(_WORD *)(*(_QWORD *)v10 + 60LL) )
          {
            GreNotifyHwndDpiDirty(*(HWND *)a1);
            v16 = (char *)a2 + 40;
          }
        }
      }
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = v6;
    v20 = (_DWORD *)*((_QWORD *)a2 + 16);
    *((_QWORD *)a1 + 36) = v20;
    ++*v20;
    *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)v16 + 60LL);
  }
  else
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v22 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v23 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v23 = 0;
    }
    if ( v22 || v23 )
    {
      v24 = *(_QWORD *)a1;
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v26) = v23;
      LOBYTE(v27) = v22;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 69152),
        5,
        4,
        11,
        (__int64)&WPP_c7bfb566737f33b6096b02c50a7f76f8_Traceguids,
        v24);
    }
    if ( PtiCurrent((__int64)v21) )
    {
      if ( *((_QWORD *)PtiCurrent(v28) + 61) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v29) + 61) + 8LL) + 64LL) & 1) != 0 )
        {
          v30 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v30 + 288) & 0x4000000F) == 0x40000000 )
          {
            if ( *(_WORD *)(v30 + 284) )
              GreNotifyHwndDpiDirty(*(HWND *)a1);
          }
        }
      }
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = 0LL;
    v31 = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 36) = 0LL;
    *(_WORD *)(v31 + 284) = 0;
  }
}
