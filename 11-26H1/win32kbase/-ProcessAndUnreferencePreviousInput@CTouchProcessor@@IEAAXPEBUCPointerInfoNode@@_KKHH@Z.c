/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x140067018
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1401A0A94 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1401A0FDC (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned __int64 v6; // r12
  const struct CPointerInfoNode *v7; // r15
  char v8; // r14
  char v10; // di
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  int v13; // eax
  int v14; // r8d
  int v15; // ebx
  struct CPointerMsgData *NonConstMsgData; // rsi
  _QWORD *v17; // rax
  CTouchProcessor *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ebx
  char v24; // bl
  bool v25; // r14
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // bl
  bool v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  CInputDest *v34; // rax
  __int64 v35; // rdx
  int v36; // ebx
  CInputDest *v37; // rax
  int v38; // eax
  __int64 *v39; // rax
  __int64 v40; // rax
  char v41; // r14
  CInputDest *v42; // rax
  __int64 v43; // rdx
  CInputDest *v44; // rax
  int v45; // [rsp+20h] [rbp-E0h]
  __int16 v46; // [rsp+30h] [rbp-D0h]
  _DWORD v48[28]; // [rsp+50h] [rbp-B0h] BYREF
  char v49; // [rsp+C0h] [rbp-40h]
  _DWORD v50[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v51[80]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v52[12]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v53; // [rsp+1ACh] [rbp+ACh]

  v6 = a3;
  v7 = a2;
  v8 = 0;
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
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      193,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  memset(v48, 0, sizeof(v48));
  v13 = *((_DWORD *)v7 + 45);
  v14 = 0;
  v49 = 0;
  if ( (v13 & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, 0);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        4,
        194,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v14 = 0;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v46 = 195;
      goto LABEL_52;
    }
  }
  else
  {
    if ( v6 )
    {
      v15 = 0;
      NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v12, v6);
      v17 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
      if ( !v17 )
        goto LABEL_11;
      v19 = v17[30];
      v20 = 480LL * *((unsigned int *)NonConstMsgData + 8);
      v21 = *(_DWORD *)(v20 + v19);
      if ( (v21 & 0x80u) == 0 )
      {
        v15 = 1;
        *(_DWORD *)(v20 + v19) = v21 | 0x80;
      }
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v17);
      v11 = 0LL;
      if ( v15 )
      {
        v22 = *(_DWORD *)v7;
        if ( (*(_DWORD *)v7 & 0x1000) == 0 )
        {
          if ( (v22 & 8) != 0 )
          {
            if ( (v22 & 0x400) != 0 )
            {
              v34 = (CInputDest *)CInputDest::CInputDest(v51, *((_QWORD *)v7 + 24), *((unsigned int *)v7 + 111), 1LL);
              v8 = 1;
            }
            else
            {
              v34 = CInputDest::CInputDest((CInputDest *)v50, (const struct CPointerInfoNode *)((char *)v7 + 24));
              v8 = 2;
            }
            CInputDest::operator=(v48, v34);
            if ( (v8 & 2) != 0 )
            {
              v8 &= ~2u;
              if ( v50[23] )
                HMAssignmentUnlock(&v50[20], v35);
              memset(v50, 0, 0x78uLL);
            }
            if ( (v8 & 1) != 0 )
            {
              v8 &= ~1u;
              if ( v53 )
                HMAssignmentUnlock(v52, v35);
            }
            v36 = -__CFSHR__(*(_DWORD *)v7, 7);
            v37 = CInputDest::CInputDest((CInputDest *)v51, (const struct CInputDest *)v48);
            v45 = v36;
            v23 = a4;
            CTouchProcessor::GenerateWindowLeaveMessage(this, v6, v37, a4, v45, a5, a6);
          }
          else
          {
            v23 = a4;
          }
          if ( (*(_DWORD *)v7 & 0x40) != 0 )
          {
            if ( (*(_DWORD *)v7 & 0x400) != 0 )
            {
              v38 = *((_DWORD *)v7 + 111);
              if ( v38 )
              {
                if ( v38 != 2 && v38 != 1
                  || ((v39 = (__int64 *)*((_QWORD *)v7 + 54)) != 0LL ? (v40 = *v39) : (v40 = 0LL),
                      v40 != *((_QWORD *)v7 + 24)) )
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7028LL);
                }
              }
            }
            if ( (*(_DWORD *)v7 & 0x400) != 0 )
            {
              v41 = v8 | 4;
              v42 = (CInputDest *)CInputDest::CInputDest(v51, *((_QWORD *)v7 + 24), *((unsigned int *)v7 + 111), 1LL);
            }
            else
            {
              v41 = v8 | 8;
              v42 = CInputDest::CInputDest((CInputDest *)v50, (const struct CPointerInfoNode *)((char *)v7 + 24));
            }
            CInputDest::operator=(v48, v42);
            if ( (v41 & 8) != 0 )
            {
              if ( v50[23] )
                HMAssignmentUnlock(&v50[20], v43);
              memset(v50, 0, 0x78uLL);
            }
            if ( (v41 & 4) != 0 && v53 )
              HMAssignmentUnlock(v52, v43);
            v44 = CInputDest::CInputDest((CInputDest *)v51, (const struct CInputDest *)v48);
            CTouchProcessor::GenerateRoutedAwayMessages(this, v6, v44, v23, a5, a6);
          }
        }
        CTouchProcessor::UnreferenceMsgData((__int64)this, v6, 1);
      }
      else
      {
LABEL_11:
        if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7051LL);
          v14 = 0;
          goto LABEL_13;
        }
      }
      v14 = 0;
LABEL_13:
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( !(_BYTE)v11 && !v10 )
        goto LABEL_19;
      v46 = 198;
LABEL_52:
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v18 + 3),
        v11,
        v14,
        *((_QWORD *)v18 + 8),
        5,
        4,
        v46,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      goto LABEL_19;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v29 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, 0);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69136),
        2,
        4,
        196,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v14 = 0;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v46 = 197;
      goto LABEL_52;
    }
  }
LABEL_19:
  if ( v48[23] )
    HMAssignmentUnlock(&v48[20], v11);
}
