/*
 * XREFs of ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402DAB3C
 * Callers:
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CB6EC (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x14004ED4C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402DAF4C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

__int64 __fastcall WindowMargins::CWindowMarginProp::SetOverrideMargins(
        struct tagWND *a1,
        const struct FRAME_MARGIN *a2)
{
  INT WindowDpiLastNotify; // edi
  char v5; // si
  int v6; // ebp
  __int64 v7; // rdx
  char v8; // r12
  char v9; // r15
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  struct WindowMargins::CWindowMarginProp *v14; // rbx
  bool v15; // di
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 result; // rax
  __int64 v21; // [rsp+80h] [rbp-48h]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 )
    return 3221225485LL;
  WindowDpiLastNotify = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( !WindowDpiLastNotify )
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  v5 = 1;
  v6 = (__int16)EngMulDiv(1, WindowDpiLastNotify, 96);
  v7 = 0LL;
  LOWORD(v21) = 0;
  if ( *(__int16 *)a2 - v6 >= 0 )
    LOWORD(v21) = *(_WORD *)a2 - v6;
  WORD2(v21) = 0;
  if ( *((__int16 *)a2 + 2) - v6 >= 0 )
    WORD2(v21) = *((_WORD *)a2 + 2) - v6;
  WORD1(v21) = 0;
  if ( *((__int16 *)a2 + 1) - v6 >= 0 )
    WORD1(v21) = *((_WORD *)a2 + 1) - v6;
  HIWORD(v21) = 0;
  if ( *((__int16 *)a2 + 3) - v6 >= 0 )
    HIWORD(v21) = *((_WORD *)a2 + 3) - v6;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
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
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152));
  }
  v14 = WindowMargins::CWindowMarginProp::GetOrCreate(a1, v7);
  if ( v14 )
  {
    SetOrClrWF(1, a1, 0xDA02u, 1);
    *(_QWORD *)((char *)v14 + 52) = v21;
    result = 0LL;
    *((_DWORD *)v14 + 10) = WindowDpiLastNotify;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = *(_QWORD *)a1;
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v18) = v15;
      LOBYTE(v19) = v5;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69152),
        2,
        21,
        24,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v16);
    }
    return 3221225495LL;
  }
  return result;
}
