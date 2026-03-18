/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x140213C00 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140215150 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x14004E2F4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140066560 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1400676F0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x140142F1C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline @ 0x14021733C (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHH @ 0x140217394 (WPP_RECORDER_AND_TRACE_SF_LHH.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(PERESOURCE *this, struct CInputPointerNode *a2, int *a3)
{
  unsigned int v6; // r15d
  char v7; // r14
  bool v8; // r12
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  CInputDest *v12; // rcx
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // rbx
  int v15; // eax
  struct CPointerMsgData *PrevMsgId; // rax
  CTouchProcessor *v17; // rcx
  int v18; // [rsp+98h] [rbp+10h]

  v6 = 0;
  v18 = *((_DWORD *)a2 + 14);
  v7 = 1;
  if ( v18 == 1 )
  {
    v6 = 0x20000;
  }
  else if ( v18 == 2 )
  {
    v6 = 0x40000;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18 - 1, (_DWORD)a3);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_LHH(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69136));
    }
  }
  CTouchProcessor::SetNewValidState(this, v6, a2);
  v12 = (struct CInputPointerNode *)((char *)a2 + 72);
  if ( *((_DWORD *)a2 + 18) )
  {
    CInputDest::~CInputDest(v12);
    *((_DWORD *)a2 + 75) &= 0xFFFF7F8F;
  }
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 15916);
  v13 = (unsigned __int64 *)((char *)a2 + 256);
  if ( *((_DWORD *)a2 + 14) != 3 )
  {
    if ( (unsigned __int64 *)*v13 == v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 15941);
LABEL_23:
    v14 = *v13;
    if ( (*(_DWORD *)(v14 + 36) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 131073, 15943);
    v15 = *(_DWORD *)(v14 + 36);
    if ( (v15 & 0x40) != 0 )
    {
      if ( (v15 & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 131073, 15974);
    }
    else
    {
      PrevMsgId = CTouchProcessor::GetPrevMsgId(v12, v14);
      v14 = (unsigned __int64)PrevMsgId;
      if ( !PrevMsgId || (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v17, (__int64)PrevMsgId) + 9) & 0x40) == 0 )
        return;
    }
    CTouchProcessor::UnreferenceMsgData((__int64)this, v14, 1);
    return;
  }
  if ( (unsigned __int64 *)*v13 != v13 )
    goto LABEL_23;
  CTouchProcessor::ProcessRoutedAwayList((CTouchProcessor *)this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
  CTouchProcessor::FreeNode(this, a2);
  if ( (unsigned int)Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a3 )
      *a3 = 1;
  }
}
