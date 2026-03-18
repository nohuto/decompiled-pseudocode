/*
 * XREFs of ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x140038C1C
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140038BC0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x140214D28 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(DelayZonePalmRejection *this)
{
  bool v2; // di
  bool v3; // si
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx

  if ( *((_BYTE *)this + 9) )
  {
    v2 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
      LOBYTE(v5) = v3;
      LOBYTE(v6) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v6,
        v5,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        4,
        11,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
    }
    *((_BYTE *)this + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(this);
  }
}
