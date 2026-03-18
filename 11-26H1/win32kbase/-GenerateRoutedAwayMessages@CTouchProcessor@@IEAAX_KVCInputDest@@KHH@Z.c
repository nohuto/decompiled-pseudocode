/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1401A0FDC
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x140067018 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x14017F804 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1401A06B8 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        __int64 a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  CInputDest *v7; // r12
  unsigned __int64 v8; // rbp
  char v10; // si
  CTouchProcessor *v11; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v13; // edx
  struct CPointerMsgData *v14; // rdi
  char v15; // bl
  _UNKNOWN **v16; // r8
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  CTouchProcessor *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r14
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int16 *v29; // rbx
  int Message; // eax
  int v31; // edx
  int v32; // r8d
  char v33; // bp
  char v34; // r15
  __int64 UserSessionState; // rax
  CInputDest *v36; // rax
  int v37; // [rsp+28h] [rbp-D0h]
  __int16 v38; // [rsp+30h] [rbp-C8h]
  int v39; // [rsp+38h] [rbp-C0h]
  _BYTE v40[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v41; // [rsp+C1h] [rbp-37h]
  __int16 v42; // [rsp+C5h] [rbp-33h]
  char v43; // [rsp+C7h] [rbp-31h]

  v7 = a3;
  v8 = a2;
  v10 = 1;
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
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      219,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7489LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v8);
  v14 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v22 = CTouchProcessor::ReferenceFrame(a1, *((_DWORD *)NonConstMsgData + 7));
    LODWORD(v16) = 0;
    v23 = (__int64)v22;
    if ( v22 )
    {
      if ( *((_DWORD *)v14 + 8) >= *((_DWORD *)v22 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7507LL);
      v29 = (__int16 *)(*(_QWORD *)(v23 + 240) + 480LL * *((unsigned int *)v14 + 8));
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v29) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7509LL);
      if ( v29[86] != *((_WORD *)v14 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7510LL);
      v41 = 0;
      v42 = 0;
      v43 = 0;
      memset(v40, 0, sizeof(v40));
      Message = CTouchProcessor::GenerateMessage(
                  a1,
                  (__int64)v29,
                  v8,
                  (const struct CPointerInputFrame *)v23,
                  594,
                  a4,
                  a5,
                  a6,
                  (CInputDest *)v40);
      v33 = 0;
      if ( Message )
      {
        v36 = CInputDest::CInputDest((CInputDest *)v40, (const struct CInputDest *)(v29 + 176));
        CTouchProcessor::AddRoutedAwayTarget(a1, v29[86], v36);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0 )
        {
          v33 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        }
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
          WPP_RECORDER_AND_TRACE_SF_HL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v33,
            v34,
            *(_QWORD *)(UserSessionState + 69136),
            2u,
            v37,
            0xE0u,
            v39);
        }
      }
      CTouchProcessor::UnreferenceFrame(a1, v23);
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( (_BYTE)v13 || v10 )
      {
        v38 = 225;
        goto LABEL_72;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, 0);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69136),
          4,
          4,
          222,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
        LODWORD(v16) = 0;
      }
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( (_BYTE)v13 || v10 )
      {
        v38 = 223;
        goto LABEL_72;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v15 = 0;
    }
    v16 = &WPP_RECORDER_INITIALIZED;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69136),
        4,
        4,
        220,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v16 = &WPP_RECORDER_INITIALIZED;
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v13 || v10 )
    {
      v38 = 221;
LABEL_72:
      LOBYTE(v16) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v21 + 3),
        v13,
        (_DWORD)v16,
        *((_QWORD *)v21 + 8),
        5,
        4,
        v38,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
  }
  CInputDest::~CInputDest(v7);
}
