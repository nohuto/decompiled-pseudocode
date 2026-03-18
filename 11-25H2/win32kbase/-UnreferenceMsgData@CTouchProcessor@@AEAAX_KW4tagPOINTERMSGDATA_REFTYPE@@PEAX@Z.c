/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC
 * Callers:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400BC2AC (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D25A0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401876C8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1401FA0F0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FAC30 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x14020729C (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14020C688 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14020DB04 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x1400F3A10 (-UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401FFB98 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x140200014 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x14020DF04 (Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x14020E140 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rbp
  struct CPointerMsgData *NonConstMsgData; // rbx
  void *v7; // rcx
  _UNKNOWN **v8; // rdx
  _UNKNOWN **v9; // r8
  bool v10; // di
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  ULONG_PTR v15; // rdi
  bool v16; // si
  bool v17; // r14
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdi
  __int64 v22; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)a1, a2);
  if ( !tagDomLock::IsLockedShared((tagDomLock *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11314LL);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11330LL);
  _InterlockedDecrement((volatile signed __int32 *)NonConstMsgData + 6);
  v8 = &WPP_GLOBAL_Control;
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11335LL);
      v8 = &WPP_GLOBAL_Control;
      v9 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) == 0 )
    {
      v7 = WPP_GLOBAL_Control;
      v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          4,
          286,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
          (char)NonConstMsgData);
      }
    }
    *((_DWORD *)NonConstMsgData + 9) &= ~0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11346LL);
  }
  v15 = v3;
  if ( !*((_BYTE *)NonConstMsgData + v3 + 52) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11347LL);
    if ( !*((_BYTE *)NonConstMsgData + v3 + 52) )
    {
      v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69144),
          BugCheckParameter4,
          v24,
          287,
          v25,
          v3,
          (char)NonConstMsgData);
      }
      if ( (unsigned int)((__int64 (*)(void))Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline)() )
        KeBugCheckEx(0x164u, 0x25uLL, (ULONG_PTR)NonConstMsgData, v3, v3);
    }
  }
  --*((_BYTE *)NonConstMsgData + v3 + 52);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    v21 = 0LL;
    do
    {
      if ( *((_BYTE *)NonConstMsgData + v21 + 52) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 196609LL, (unsigned __int16)v21 | 0x2C670000u);
      if ( (unsigned int)Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline(v7, v8, v9)
        && *((_BYTE *)NonConstMsgData + v21 + 52) )
      {
        KeBugCheckEx(0x164u, 0x25uLL, (ULONG_PTR)NonConstMsgData, v3, (unsigned int)v21);
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 <= 8 );
    v15 = v3;
  }
  InputTraceLogging::PointerMsg::UnreferenceMsgData(
    a2,
    *((unsigned int *)NonConstMsgData + 6),
    (unsigned int)v3,
    *((unsigned __int8 *)NonConstMsgData + v15 + 52));
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(
        a1,
        v22,
        *((unsigned int *)NonConstMsgData + 7),
        *((unsigned int *)NonConstMsgData + 8));
    CTouchProcessor::FreeMsgData((CTouchProcessor *)a1, a2);
  }
}
