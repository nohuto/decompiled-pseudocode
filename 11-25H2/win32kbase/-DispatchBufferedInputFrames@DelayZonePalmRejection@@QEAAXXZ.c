/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x140214D28
 * Callers:
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x140038C1C (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C3C98 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1402152B4 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1401A1DEC (-UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1401FE720 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(DelayZonePalmRejection *this, __int64 a2)
{
  char v2; // r14
  int v4; // esi
  void *v5; // rcx
  bool v6; // r15
  int v7; // ebx
  int v8; // edi
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct CPointerInputFrame *Next; // rbx
  struct CPointerInputFrame *i; // rdi
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = 1;
  if ( *((_DWORD *)this + 1) == 1 )
  {
    v4 = 0;
    if ( !*((_BYTE *)this + 8) )
    {
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v2 = 0;
      }
      v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = *((_DWORD *)this + 11);
        v8 = *((_DWORD *)this + 10);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v10) = v6;
        LOBYTE(v11) = v2;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69144),
          4,
          4,
          12,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
          v8,
          v7);
      }
      Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
      for ( i = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
            Next;
            Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
                     *(CTouchProcessor **)(v14 + 3256),
                     Next) )
      {
        if ( Next == i )
          break;
        v14 = W32GetUserSessionState(v5, a2);
      }
      if ( i )
      {
        v15 = W32GetUserSessionState(v5, a2);
        CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(*(CTouchProcessor **)(v15 + 3256), i);
      }
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
      {
        v4 = 2;
      }
      else
      {
        *((_QWORD *)this + 4) = 0LL;
        *((_QWORD *)this + 2) = 0LL;
      }
      *((_DWORD *)this + 1) = v4;
      DelayZonePalmRejection::UnlockTouchDeviceHandle(this);
    }
  }
}
