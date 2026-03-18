/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x14004B070 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004D5C0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x14004DC00 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14006526C (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x140067018 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A3748 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140216FE8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x14006D144 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??B?$SGTRACINGgBaseLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x14012AE68 (--B-$SGTRACINGgBaseLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ.c)
 *     ?UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x14013A4F8 (-UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401429E4 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x140217584 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // r15
  struct CPointerMsgData *NonConstMsgData; // rbx
  char v7; // di
  CTouchProcessor **v8; // rdx
  _UNKNOWN **v9; // r8
  bool v10; // si
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // al
  bool v16; // bp
  int v17; // eax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rbp
  __int64 v21; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)a1, a2);
  v7 = 1;
  if ( !tagDomLock::IsLockedShared((tagDomLock *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11297LL);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11313LL);
  _InterlockedDecrement((volatile signed __int32 *)NonConstMsgData + 6);
  v8 = &WPP_GLOBAL_Control;
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11318LL);
      v8 = &WPP_GLOBAL_Control;
      v9 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) == 0 )
    {
      v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(
                             (_DWORD)WPP_GLOBAL_Control,
                             (unsigned int)&WPP_GLOBAL_Control,
                             (unsigned int)&WPP_RECORDER_INITIALIZED);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          4,
          286,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
          (char)NonConstMsgData);
      }
    }
    *((_DWORD *)NonConstMsgData + 9) &= ~0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11329LL);
  }
  if ( !*((_BYTE *)NonConstMsgData + v3 + 52) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11330LL);
  v15 = *((_BYTE *)NonConstMsgData + v3 + 52);
  if ( !v15 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = SGTRACINGgBaseLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *(WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v7;
      WPP_RECORDER_AND_TRACE_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        v17,
        BugCheckParameter4,
        v23,
        287,
        v24,
        v3,
        (char)NonConstMsgData);
    }
    KeBugCheckEx(0x164u, 0x25uLL, (ULONG_PTR)NonConstMsgData, v3, v3);
  }
  *((_BYTE *)NonConstMsgData + v3 + 52) = v15 - 1;
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    v20 = 0LL;
    do
    {
      if ( *((_BYTE *)NonConstMsgData + v20 + 52) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 196609LL, (unsigned __int16)v20 | 0x2C530000u);
        if ( *((_BYTE *)NonConstMsgData + v20 + 52) )
          KeBugCheckEx(0x164u, 0x25uLL, (ULONG_PTR)NonConstMsgData, v3, (unsigned int)v20);
      }
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 <= 8 );
  }
  InputTraceLogging::PointerMsg::UnreferenceMsgData(
    a2,
    *((unsigned int *)NonConstMsgData + 6),
    (unsigned int)v3,
    *((unsigned __int8 *)NonConstMsgData + v3 + 52));
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(
        a1,
        v21,
        *((unsigned int *)NonConstMsgData + 7),
        *((unsigned int *)NonConstMsgData + 8));
    CTouchProcessor::FreeMsgData((CTouchProcessor *)a1, a2);
  }
}
