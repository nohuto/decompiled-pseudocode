/*
 * XREFs of ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1401437F4
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x14006D858 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1401BE608 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
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
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( v6 || v5 )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v9) = v5;
    LOBYTE(v10) = v6;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dqd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v10,
                            v9,
                            *(_QWORD *)(UserSessionState + 69136),
                            5);
  }
  *(_DWORD *)(a2 + 148) = a3;
  return result;
}
