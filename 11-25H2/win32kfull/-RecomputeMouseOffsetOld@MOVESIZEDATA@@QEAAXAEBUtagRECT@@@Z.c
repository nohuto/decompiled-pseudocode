/*
 * XREFs of ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402DDD04
 * Callers:
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 */

void __fastcall MOVESIZEDATA::RecomputeMouseOffsetOld(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  int v2; // eax
  int v4; // ecx
  LONG left; // r13d
  int v6; // r15d
  int v7; // r12d
  bool v8; // r14
  bool v9; // bp
  int v10; // edi
  int v11; // ebx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  LONG top; // [rsp+C0h] [rbp+8h]
  char v16; // [rsp+C8h] [rbp+10h]
  char v17; // [rsp+D0h] [rbp+18h]

  v2 = *((_DWORD *)this + 65);
  v4 = *((_DWORD *)this + 66);
  left = a2->left;
  v6 = a2->left - v2;
  v17 = v2;
  v7 = a2->top - v4;
  top = a2->top;
  v16 = v4;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v9 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
    && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v8 || v9 )
  {
    v10 = *((_DWORD *)this + 43);
    v11 = *((_DWORD *)this + 42);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v13) = v9;
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_dddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      1,
      31,
      (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
      v6,
      v7,
      v11,
      v10,
      v17,
      v16,
      left,
      top);
  }
  *((_DWORD *)this + 42) = v6;
  *((_DWORD *)this + 43) = v7;
}
