/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1401BF140
 * Callers:
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x140048F7C (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400621D0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x14021AB34 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140194FE4 (-UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x140214A20 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(DelayZonePalmRejection *this, int a2, int a3)
{
  char v3; // r14
  int v5; // esi
  int v6; // ecx
  bool v7; // r15
  int v8; // ebx
  int v9; // edi
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct CPointerInputFrame *Next; // rbx
  struct CPointerInputFrame *i; // rdi
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = 1;
  if ( *((_DWORD *)this + 1) == 1 )
  {
    v5 = 0;
    if ( !*((_BYTE *)this + 8) )
    {
      v6 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v3 = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = *((_DWORD *)this + 11);
        v9 = *((_DWORD *)this + 10);
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
        LOBYTE(v11) = v7;
        LOBYTE(v12) = v3;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69136),
          4,
          4,
          12,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
          v9,
          v8);
      }
      Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
      for ( i = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
            Next;
            Next = (struct CPointerInputFrame *)CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
                                                  *(CTouchProcessor **)(v15 + 3256),
                                                  Next) )
      {
        if ( Next == i )
          break;
        v15 = W32GetUserSessionState(v6, a2, a3);
      }
      if ( i )
      {
        v16 = W32GetUserSessionState(v6, a2, a3);
        CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(*(CTouchProcessor **)(v16 + 3256), i);
      }
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
      {
        v5 = 2;
      }
      else
      {
        *((_QWORD *)this + 4) = 0LL;
        *((_QWORD *)this + 2) = 0LL;
      }
      *((_DWORD *)this + 1) = v5;
      DelayZonePalmRejection::UnlockTouchDeviceHandle(this);
    }
  }
}
