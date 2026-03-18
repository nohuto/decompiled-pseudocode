/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FAC30
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1401FAE80 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140200300 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FFD70 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1402042A8 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1402088EC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1402095AC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHH @ 0x14020DF58 (WPP_RECORDER_AND_TRACE_SF_LHH.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(CTouchProcessor *this, struct CInputPointerNode *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rdx
  char v6; // r14
  bool v7; // r12
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  CInputDest *v11; // rcx
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned __int64 PrevMsgId; // rax
  CTouchProcessor *v16; // rcx

  v4 = 0;
  v5 = (unsigned int)(*((_DWORD *)a2 + 14) - 1);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v4 = 0x40000;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v6 = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_LHH(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v9,
          *(_QWORD *)(UserSessionState + 69144));
      }
    }
  }
  else
  {
    v4 = 0x20000;
  }
  CTouchProcessor::SetNewValidState(this, v4, a2);
  v11 = (struct CInputPointerNode *)((char *)a2 + 72);
  if ( *((_DWORD *)a2 + 18) )
  {
    CInputDest::~CInputDest(v11);
    *((_DWORD *)a2 + 75) &= 0xFFFF7F8F;
  }
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15991);
  v12 = (unsigned __int64 *)((char *)a2 + 256);
  if ( *((_DWORD *)a2 + 14) == 3 )
  {
    if ( (unsigned __int64 *)*v12 == v12 )
    {
      CTouchProcessor::ProcessRoutedAwayList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
      CTouchProcessor::FreeNode(this, a2);
      return;
    }
  }
  else if ( (unsigned __int64 *)*v12 == v12 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16009);
  }
  v13 = *v12;
  if ( (*(_DWORD *)(v13 + 36) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073, 16011);
  v14 = *(_DWORD *)(v13 + 36);
  if ( (v14 & 0x40) != 0 )
  {
    if ( (v14 & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073, 16042);
LABEL_28:
    CTouchProcessor::UnreferenceMsgData((__int64)this, v13, 1);
    return;
  }
  PrevMsgId = CTouchProcessor::GetPrevMsgId(v11, v13);
  v13 = PrevMsgId;
  if ( PrevMsgId && (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v16, PrevMsgId) + 9) & 0x40) != 0 )
    goto LABEL_28;
}
