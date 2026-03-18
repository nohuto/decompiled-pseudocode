/*
 * XREFs of ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004C108
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x14004B070 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x14004D2F8 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x14004DC00 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x14004E830 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14006526C (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x140147600 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x140168B40 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x14004C3C8 (-ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x140217584 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 */

__int64 __fastcall CTouchProcessor::ReferenceMsgData(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  char v4; // di
  int v7; // edx
  int v8; // r8d
  bool v11; // si
  bool v12; // r14
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  bool v16; // r14
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+38h] [rbp-40h]

  v3 = a3;
  v4 = 1;
  if ( a2 && (*(_DWORD *)(a2 + 36) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11246LL);
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a2 + 24)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11254LL);
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 36) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11258LL);
    if ( (*(_DWORD *)(a2 + 36) & 0x40) != 0 )
    {
      v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          4,
          284,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
          a2);
      }
    }
    *(_DWORD *)(a2 + 36) |= 0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11269LL);
  }
  if ( (*(_BYTE *)(v3 + a2 + 52))++ == 0xFF )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11271LL);
  if ( !*(_BYTE *)(v3 + a2 + 52) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v4;
      WPP_RECORDER_AND_TRACE_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69136),
        v20,
        v21,
        285,
        v22,
        v3,
        a2);
    }
  }
  return InputTraceLogging::PointerMsg::ReferenceMsgData(
           a2,
           *(unsigned int *)(a2 + 24),
           (unsigned int)v3,
           *(unsigned __int8 *)(v3 + a2 + 52));
}
