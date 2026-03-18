/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x14004DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004C108 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x14004C460 (ApiSetEditionFindThreadPointerData.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x14004E250 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     IsPointerInputMessageWithState @ 0x14004F200 (IsPointerInputMessageWithState.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x14015BF94 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x14015BFC0 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1401C057C (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        PERESOURCE *a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  unsigned __int16 v8; // r15
  __int64 v9; // r12
  BOOL v11; // edi
  unsigned __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  CTouchProcessor *v15; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int16 v17; // ax
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int64 v19; // rcx
  int v20; // ecx
  __int64 ThreadPointerData; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int16 v26; // r8
  unsigned int v27; // r8d
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rdx
  unsigned __int64 v32; // rdx
  int v33; // edx
  __int64 v34; // rcx
  _QWORD v36[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v37; // [rsp+70h] [rbp-90h]
  PERESOURCE *v38; // [rsp+78h] [rbp-88h]
  _QWORD v39[16]; // [rsp+80h] [rbp-80h] BYREF

  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      108,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v37 = 0;
  v38 = a1 + 4;
  v12 = a5;
  if ( a5 == -1LL )
    v12 = 0LL;
  v36[0] = v12;
  ExEnterCriticalRegionAndAcquireResourceExclusive(a1[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v36, v13, v14);
  CInputDest::CInputDest((CInputDest *)v39, a7);
  if ( !v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4730LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v15, a5);
  if ( NonConstMsgData )
    v17 = *((_WORD *)NonConstMsgData + 8);
  else
    v17 = 0;
  if ( v8 != v17 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4731LL);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4733LL);
  if ( a5 && (*(_DWORD *)(a5 + 36) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  if ( (*(_DWORD *)(a5 + 36) & 2) != 0 )
  {
    PointerCaptureData = CTouchProcessor::GetPointerCaptureData((CTouchProcessor *)a1, a5);
    if ( PointerCaptureData )
      CTouchProcessor::SetDelegateActionInt(v19, PointerCaptureData, 2LL);
  }
  if ( a6 - 578 <= 0xF )
  {
    v20 = 32785;
    if ( _bittest(&v20, a6 - 578) )
      CTouchProcessor::SetDelegateAction(a1, a5, 1LL);
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v9, v8);
  v24 = ThreadPointerData;
  if ( !ThreadPointerData )
  {
    v24 = ApiSetEditionAllocAndLinkThreadPointerData(v9, v22, v23, 0LL);
    if ( !v24 )
    {
LABEL_31:
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        LOBYTE(v11) = 0;
      if ( (_BYTE)v25 || v11 )
      {
        LOBYTE(v26) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v26,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          110,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v11 = v24 != 0;
      v29 = HIDWORD(v39[11]) == 0;
      goto LABEL_39;
    }
LABEL_27:
    v27 = *(_DWORD *)(v24 + 48) & 0xFFFFFFF7;
    *(_DWORD *)(v24 + 32) = a6;
    *(_DWORD *)(v24 + 48) = v27;
    v28 = 0LL;
    *(_WORD *)(v24 + 16) = v8;
    *(_DWORD *)(v24 + 20) = a4;
    *(_QWORD *)(v24 + 24) = a5;
    if ( (v39[0] & 4) != 0 )
    {
      if ( HIDWORD(v39[11]) == 1 || HIDWORD(v39[11]) == 2 )
      {
        if ( v39[10] )
          v28 = *(_QWORD *)v39[10];
        else
          v28 = 0LL;
      }
    }
    else if ( (v39[0] & 2) != 0 )
    {
      v28 = v39[3];
    }
    *(_QWORD *)(v24 + 40) = v28;
    *(_DWORD *)(v24 + 48) = a8 & 0xFFFFFFFD ^ (a8 ^ v27) & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData((__int64)a1, a5, 4);
    goto LABEL_31;
  }
  v32 = *(_QWORD *)(ThreadPointerData + 24);
  if ( v32 != a5 )
  {
    CTouchProcessor::UnreferenceMsgData((__int64)a1, v32, 4);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4788LL);
  v33 = *(_DWORD *)(v24 + 48);
  if ( (v33 & 1) == 0 && a8 )
  {
    v33 |= 1u;
    *(_DWORD *)(v24 + 48) = v33;
  }
  *(_DWORD *)(v24 + 32) = a6;
  v34 = 0LL;
  if ( (v39[0] & 4) != 0 )
  {
    LOWORD(v23) = WORD2(v39[11]) - 1;
    if ( HIDWORD(v39[11]) == 1 || HIDWORD(v39[11]) == 2 )
    {
      if ( v39[10] )
        v34 = *(_QWORD *)v39[10];
      else
        v34 = 0LL;
    }
  }
  else if ( (v39[0] & 2) != 0 )
  {
    v34 = v39[3];
  }
  v25 = v33 & 0xFFFFFFF5;
  *(_QWORD *)(v24 + 40) = v34;
  *(_DWORD *)(v24 + 48) = v25;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v23) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v23) = 0;
  }
  if ( (_BYTE)v25 || (_BYTE)v23 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      (_WORD)v23,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      109,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v29 = HIDWORD(v39[11]) == 0;
LABEL_39:
  if ( !v29 )
    HMAssignmentUnlock(&v39[10], v25);
  memset(v39, 0, 0x78uLL);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v36, v30);
  ExReleaseResourceAndLeaveCriticalRegion(*v38);
  return v11;
}
