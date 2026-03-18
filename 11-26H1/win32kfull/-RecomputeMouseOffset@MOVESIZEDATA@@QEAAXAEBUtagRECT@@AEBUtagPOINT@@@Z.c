/*
 * XREFs of ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402EFE80
 * Callers:
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1402574E8 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 */

void __fastcall MOVESIZEDATA::RecomputeMouseOffset(
        MOVESIZEDATA *this,
        const struct tagRECT *a2,
        const struct tagPOINT *a3)
{
  LONG x; // r13d
  int v5; // r15d
  int v6; // r12d
  char v7; // r14
  char v8; // si
  int v9; // edi
  int v10; // ebx
  __int64 UserSessionState; // rax
  LONG top; // [rsp+C0h] [rbp+8h]
  LONG left; // [rsp+C8h] [rbp+10h]
  LONG y; // [rsp+D0h] [rbp+18h]

  x = a3->x;
  v5 = a2->left - a3->x;
  left = a2->left;
  v6 = a2->top - a3->y;
  y = a3->y;
  top = a2->top;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v8 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v7 || v8 )
  {
    v9 = *((_DWORD *)this + 43);
    v10 = *((_DWORD *)this + 42);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_dddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      5u,
      1u,
      0x1Eu,
      (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
      v5,
      v6,
      v10,
      v9,
      x,
      y,
      left,
      top);
  }
  *((_DWORD *)this + 42) = v5;
  *((_DWORD *)this + 43) = v6;
}
