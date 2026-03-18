/*
 * XREFs of ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1401A5E38
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400621D0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x140216960 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 */

void __fastcall DelayZonePalmRejection::SuppressDeadzoneContacts(
        DelayZonePalmRejection *this,
        const struct DEVICE_OUTPUT_CONFIG *a2,
        const struct tagPOINTER_INFO *a3)
{
  struct CPointerInputFrame *Next; // rbx
  struct CPointerInputFrame *v5; // r15
  int v7; // ecx
  bool v8; // di
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  CTouchProcessor *v13; // rcx

  Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
  v5 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
  v7 = (int)WPP_GLOBAL_Control;
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, (_DWORD)a3);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      4,
      29,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
  }
  if ( Next )
  {
    while ( 1 )
    {
      v13 = *(CTouchProcessor **)(W32GetUserSessionState(v7, (_DWORD)a2, (_DWORD)a3) + 3256);
      if ( Next == v5 )
        break;
      Next = (struct CPointerInputFrame *)CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(v13, Next, a2, a3);
      if ( !Next )
        return;
    }
    CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(v13, Next, a2, a3);
  }
}
