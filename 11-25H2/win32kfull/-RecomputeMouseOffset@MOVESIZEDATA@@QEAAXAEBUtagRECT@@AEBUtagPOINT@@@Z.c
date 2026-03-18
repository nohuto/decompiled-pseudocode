/*
 * XREFs of ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402DDBA8
 * Callers:
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 */

void __fastcall MOVESIZEDATA::RecomputeMouseOffset(
        MOVESIZEDATA *this,
        const struct tagRECT *a2,
        const struct tagPOINT *a3)
{
  LONG left; // r13d
  int v5; // r15d
  int v6; // r12d
  bool v7; // r14
  bool v8; // si
  int v9; // edi
  int v10; // ebx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  LONG top; // [rsp+C0h] [rbp+8h]
  LONG y; // [rsp+C8h] [rbp+10h]
  LONG x; // [rsp+D0h] [rbp+18h]

  left = a2->left;
  v5 = a2->left - a3->x;
  x = a3->x;
  v6 = a2->top - a3->y;
  top = a2->top;
  y = a3->y;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v8 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
    && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v7 || v8 )
  {
    v9 = *((_DWORD *)this + 43);
    v10 = *((_DWORD *)this + 42);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v8;
    LOBYTE(v13) = v7;
    WPP_RECORDER_AND_TRACE_SF_dddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      1,
      30,
      (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
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
