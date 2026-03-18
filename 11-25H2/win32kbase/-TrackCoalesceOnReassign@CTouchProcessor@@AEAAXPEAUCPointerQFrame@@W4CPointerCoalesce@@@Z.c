/*
 * XREFs of ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x140104E10
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401FC36C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1401FDBA4 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x14020E214 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 */

_UNKNOWN **__fastcall CTouchProcessor::TrackCoalesceOnReassign(__int64 a1, __int64 a2, int a3)
{
  char v5; // si
  bool v6; // bp
  _UNKNOWN **result; // rax
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v5 = 1;
  v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( v6 || v5 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v5;
    LOBYTE(v10) = v6;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dqd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v10,
                            v9,
                            *(_QWORD *)(UserSessionState + 69144),
                            5);
  }
  *(_DWORD *)(a2 + 148) = a3;
  return result;
}
