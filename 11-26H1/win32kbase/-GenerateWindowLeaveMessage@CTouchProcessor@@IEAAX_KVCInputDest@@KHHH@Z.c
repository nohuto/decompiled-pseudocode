/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1401A0A94
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x140067018 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x14017F804 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        __int64 a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  CInputDest *v8; // r12
  unsigned __int64 v9; // rbp
  char v11; // si
  CTouchProcessor *v12; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  struct CPointerMsgData *v15; // rdi
  char v16; // bl
  _UNKNOWN **v17; // r8
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  CTouchProcessor *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r14
  char v25; // bl
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  CPointerInfoNode *v30; // rbx
  int Message; // eax
  int v32; // edx
  int v33; // r8d
  char v34; // bp
  char v35; // r15
  __int64 UserSessionState; // rax
  int v37; // [rsp+28h] [rbp-D0h]
  __int16 v38; // [rsp+30h] [rbp-C8h]
  int v39; // [rsp+38h] [rbp-C0h]
  _BYTE v40[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v41; // [rsp+C1h] [rbp-37h]
  __int16 v42; // [rsp+C5h] [rbp-33h]
  char v43; // [rsp+C7h] [rbp-31h]

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
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      203,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7185LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v12, v9);
  v15 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v23 = CTouchProcessor::ReferenceFrame(a1, *((_DWORD *)NonConstMsgData + 7));
    LODWORD(v17) = 0;
    v24 = (__int64)v23;
    if ( v23 )
    {
      if ( *((_DWORD *)v15 + 8) >= *((_DWORD *)v23 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7203LL);
      v30 = (CPointerInfoNode *)(*(_QWORD *)(v24 + 240) + 480LL * *((unsigned int *)v15 + 8));
      if ( !(unsigned int)CPointerInfoNode::IsValid(v30) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7205LL);
      if ( *((_WORD *)v30 + 86) != *((_WORD *)v15 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7206LL);
      if ( !a5 )
      {
        v41 = 0;
        v42 = 0;
        v43 = 0;
        memset(v40, 0, sizeof(v40));
        Message = CTouchProcessor::GenerateMessage(
                    a1,
                    (__int64)v30,
                    v9,
                    (const struct CPointerInputFrame *)v24,
                    586,
                    a4,
                    a6,
                    a7,
                    (CInputDest *)v40);
        v34 = 0;
        if ( !Message )
        {
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0 )
          {
            v34 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          }
          v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v32, v33);
            WPP_RECORDER_AND_TRACE_SF_HL(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v34,
              v35,
              *(_QWORD *)(UserSessionState + 69136),
              2u,
              v37,
              0xD0u,
              v39);
          }
        }
      }
      CTouchProcessor::UnreferenceFrame(a1, v24);
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( (_BYTE)v14 || v11 )
      {
        v38 = 209;
        goto LABEL_73;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, 0);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 69136),
          2,
          4,
          206,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
        LODWORD(v17) = 0;
      }
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( (_BYTE)v14 || v11 )
      {
        v38 = 207;
        goto LABEL_73;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = &WPP_RECORDER_INITIALIZED;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69136),
        4,
        4,
        204,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v17 = &WPP_RECORDER_INITIALIZED;
    }
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v14 || v11 )
    {
      v38 = 205;
LABEL_73:
      LOBYTE(v17) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v22 + 3),
        v14,
        (_DWORD)v17,
        *((_QWORD *)v22 + 8),
        5,
        4,
        v38,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
  }
  CInputDest::~CInputDest(v8);
}
