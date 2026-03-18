/*
 * XREFs of ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x14019DB1C
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall MOVESIZEDATA::ClearPreviewRect(MOVESIZEDATA *this, __int64 a2)
{
  struct MOVESIZEDATA *v3; // rcx
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax

  if ( (*((_DWORD *)this + 50) & 0x80000) != 0 )
  {
    v3 = WPP_GLOBAL_Control;
    v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        29,
        (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids);
    }
    *((_DWORD *)this + 50) &= ~0x80000u;
    if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
    {
      v9 = W32GetUserSessionState(v3, a2);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v9 + 56968) + 40LL), 0LL, 0LL, 0);
    }
  }
}
