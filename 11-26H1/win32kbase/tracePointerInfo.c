/*
 * XREFs of tracePointerInfo @ 0x140076368
 * Callers:
 *     traceFrame @ 0x1400A15DC (traceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     tracePointerFlags @ 0x140076E34 (tracePointerFlags.c)
 */

__int64 __fastcall tracePointerInfo(unsigned int *a1, __int64 a2, int a3)
{
  bool v4; // si
  bool v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a1[9];
    v7 = a1[8];
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v9) = v5;
    LOBYTE(v10) = v4;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      43,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
      v7,
      v6);
  }
  return tracePointerFlags(a1[3]);
}
