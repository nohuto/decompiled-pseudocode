/*
 * XREFs of ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402EFFDC
 * Callers:
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1402574E8 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 */

void __fastcall MOVESIZEDATA::RecomputeMouseOffsetOld(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  int v3; // r13d
  int v4; // r15d
  int v5; // r12d
  char v6; // r14
  char v7; // bp
  int v8; // edi
  int v9; // ebx
  __int64 UserSessionState; // rax
  LONG top; // [rsp+C0h] [rbp+8h]
  LONG left; // [rsp+C8h] [rbp+10h]
  int v13; // [rsp+D0h] [rbp+18h]

  v3 = *((_DWORD *)this + 65);
  left = a2->left;
  v4 = a2->left - v3;
  v5 = a2->top - *((_DWORD *)this + 66);
  v13 = *((_DWORD *)this + 66);
  top = a2->top;
  v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v7 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v6 || v7 )
  {
    v8 = *((_DWORD *)this + 43);
    v9 = *((_DWORD *)this + 42);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_dddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      5u,
      1u,
      0x1Fu,
      (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
      v4,
      v5,
      v9,
      v8,
      v3,
      v13,
      left,
      top);
  }
  *((_DWORD *)this + 42) = v4;
  *((_DWORD *)this + 43) = v5;
}
