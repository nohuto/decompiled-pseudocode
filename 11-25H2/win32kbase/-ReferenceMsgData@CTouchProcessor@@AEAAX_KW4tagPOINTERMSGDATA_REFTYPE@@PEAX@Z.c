/*
 * XREFs of ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D1754
 * Callers:
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400C373C (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D19D0 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1401FA0F0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1401FA510 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x1401FC964 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x140205650 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14020DB04 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x1400F3E00 (-ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x14020E140 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 */

__int64 __fastcall CTouchProcessor::ReferenceMsgData(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  struct CPointerMsgData *NonConstMsgData; // rdi
  bool IsLockedShared; // al
  char v8; // bl
  _UNKNOWN **v9; // rdx
  bool v10; // si
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  bool v16; // bp
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)a1, a2);
  IsLockedShared = tagDomLock::IsLockedShared((tagDomLock *)(a1 + 32));
  v8 = 1;
  if ( !IsLockedShared )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11263LL);
  if ( !_InterlockedIncrement((volatile signed __int32 *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11271LL);
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11275LL);
      v9 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
    {
      v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          4,
          284,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
          (char)NonConstMsgData);
      }
    }
    *((_DWORD *)NonConstMsgData + 9) |= 0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11286LL);
  }
  if ( (*((_BYTE *)NonConstMsgData + v3 + 52))++ == 0xFF )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11288LL);
  if ( !*((_BYTE *)NonConstMsgData + v3 + 52) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v8;
      WPP_RECORDER_AND_TRACE_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69144),
        v21,
        v22,
        285,
        v23,
        v3,
        (char)NonConstMsgData);
    }
  }
  return InputTraceLogging::PointerMsg::ReferenceMsgData(
           a2,
           *((unsigned int *)NonConstMsgData + 6),
           (unsigned int)v3,
           *((unsigned __int8 *)NonConstMsgData + v3 + 52));
}
