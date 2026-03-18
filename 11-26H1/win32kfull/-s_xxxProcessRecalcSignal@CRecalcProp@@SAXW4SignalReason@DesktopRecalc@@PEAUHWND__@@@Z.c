/*
 * XREFs of ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x14015D1C8
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     DesktopWindowFromDesktop @ 0x14015D53C (DesktopWindowFromDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 */

void __fastcall CRecalcProp::s_xxxProcessRecalcSignal(__int64 a1, HWND a2)
{
  char v2; // r12
  int v4; // edi
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // r15
  char v7; // bl
  char v8; // r13
  bool v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  struct tagBWL *v12; // rax
  struct tagBWL *v13; // r15
  bool v14; // zf
  HWND *v15; // rdi
  BOOL v16; // esi
  HWND v17; // rax
  char v18; // bl
  char v19; // di
  const char *v20; // r15
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // [rsp+50h] [rbp-30h] BYREF
  char v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+5Ch] [rbp-24h]
  __int64 v34; // [rsp+68h] [rbp-18h]
  int v35; // [rsp+70h] [rbp-10h]
  struct tagTHREADINFO *v36; // [rsp+C0h] [rbp+40h]

  v2 = 0;
  v4 = a1;
  if ( (_DWORD)a1 )
  {
    if ( (unsigned int)(a1 - 1) < 2 )
    {
      v6 = PtiCurrent(a1);
      v36 = v6;
      v7 = 1;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (v5 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v5 & 0x40) == 0)
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v8 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v2 = 1;
      }
      if ( v8 || v2 )
      {
        if ( v4 == 1 )
        {
          v20 = "thread";
        }
        else
        {
          v20 = "thread deferred";
          if ( v4 != 2 )
            v20 = "UNKNOWN";
        }
        UserSessionState = W32GetUserSessionState(v5, WPP_GLOBAL_Control);
        LOBYTE(v22) = v2;
        LOBYTE(v23) = v8;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          7,
          71,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          (__int64)v20);
        v6 = v36;
      }
      *((_QWORD *)v6 + 170) &= ~0x4000000000uLL;
      v9 = ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x20);
      v10 = DesktopWindowFromDesktop(*((_QWORD *)v6 + 61), 32 * (unsigned int)v9 + 2);
      v12 = BuildHwndList(*(struct tagWND **)(v10 + 112), v11, (__int64)v6, 1);
      v13 = v12;
      if ( v12 )
      {
        v14 = v4 == 1;
        v15 = (HWND *)((char *)v12 + 32);
        v16 = !v14;
        while ( 1 )
        {
          v17 = *v15;
          if ( *v15 == (HWND)1 )
            break;
          v32 = 0;
          v34 = 0LL;
          v31 = 0LL;
          v33 = 0LL;
          v35 = v16;
          CRecalcProp::s_xxxProcessTopologyChange(v17, (struct CRecalcContext *)&v31);
          ++v15;
        }
        FreeHwndList(v13, 0LL);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v7 = 0;
        }
        v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v26) = v24;
          LOBYTE(v27) = v7;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v26,
            *(_QWORD *)(v25 + 69152),
            2,
            7,
            72,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        }
      }
    }
  }
  else
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
    if ( v19 || v18 )
    {
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v29) = v18;
      LOBYTE(v30) = v19;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69152),
        5,
        7,
        70,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        (char)a2);
    }
    v31 = 0LL;
    v32 = 0;
    v33 = 0LL;
    v34 = 0LL;
    v35 = 2;
    CRecalcProp::s_xxxProcessTopologyChange(a2, (struct CRecalcContext *)&v31);
  }
}
