/*
 * XREFs of ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x140048F7C
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140048F20 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1401BF140 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(
        DelayZonePalmRejection *this,
        __int64 a2,
        int a3)
{
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  if ( *((_BYTE *)this + 9) )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)WPP_GLOBAL_Control, a3);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        4,
        11,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
    }
    *((_BYTE *)this + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(this);
  }
}
