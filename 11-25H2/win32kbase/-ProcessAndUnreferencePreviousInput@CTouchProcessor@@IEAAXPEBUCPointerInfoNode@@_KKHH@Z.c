/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x14020729C
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1402014A0 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x140201F50 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CTouchProcessor::ProcessAndUnreferencePreviousInput(
        PERESOURCE *this,
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
  char v15; // bl
  bool v16; // r14
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  _QWORD *v20; // rcx
  char v21; // bl
  bool v22; // r14
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // esi
  unsigned int *NonConstMsgData; // rbx
  __int64 v28; // rax
  _DWORD *v29; // rdx
  int v30; // eax
  __m128i *v31; // rax
  int v32; // ebx
  CInputDest *v33; // rax
  unsigned int v34; // ebx
  char v35; // r14
  __m128i *v36; // rax
  CInputDest *v37; // rax
  int v38; // [rsp+20h] [rbp-E0h]
  __int16 v39; // [rsp+30h] [rbp-D0h]
  _QWORD v41[14]; // [rsp+50h] [rbp-B0h] BYREF
  char v42; // [rsp+C0h] [rbp-40h]
  __m128i v43[8]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v44[8]; // [rsp+150h] [rbp+50h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  memset(v41, 0, sizeof(v41));
  v13 = *((_DWORD *)v7 + 45);
  v14 = 0;
  v42 = 0;
  if ( (v13 & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        194,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v14 = 0;
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v39 = 195;
LABEL_86:
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v20[3],
        v11,
        v14,
        v20[8],
        5,
        4,
        v39,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  else if ( v6 )
  {
    v26 = 0;
    NonConstMsgData = (unsigned int *)CTouchProcessor::GetNonConstMsgData(v12, v6);
    v28 = CTouchProcessor::ReferenceFrame(this, NonConstMsgData[7]);
    if ( !v28 )
      goto LABEL_88;
    v29 = (_DWORD *)(*(_QWORD *)(v28 + 240) + 480LL * NonConstMsgData[8]);
    if ( (*v29 & 0x80u) == 0 )
    {
      v26 = 1;
      *v29 |= 0x80u;
    }
    CTouchProcessor::UnreferenceFrame(this, v28);
    if ( v26 )
    {
      v30 = *(_DWORD *)v7;
      if ( (*(_DWORD *)v7 & 0x1000) == 0 )
      {
        if ( (v30 & 8) != 0 )
        {
          if ( (v30 & 0x400) != 0 )
          {
            v31 = CInputDest::CInputDest(v43, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
            v8 = 1;
          }
          else
          {
            v31 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v44,
                               (const struct CPointerInfoNode *)((char *)v7 + 24));
            v8 = 2;
          }
          CInputDest::operator=(v41, v31);
          if ( (v8 & 2) != 0 )
          {
            v8 &= ~2u;
            CInputDest::~CInputDest((CInputDest *)v44);
          }
          if ( (v8 & 1) != 0 )
          {
            v8 &= ~1u;
            CInputDest::~CInputDest((CInputDest *)v43);
          }
          v32 = -__CFSHR__(*(_DWORD *)v7, 7);
          v33 = CInputDest::CInputDest((CInputDest *)v43, (const struct CInputDest *)v41);
          v38 = v32;
          v34 = a4;
          CTouchProcessor::GenerateWindowLeaveMessage((__int64)this, v6, v33, a4, v38, a5, a6);
        }
        else
        {
          v34 = a4;
        }
        if ( (*(_DWORD *)v7 & 0x40) != 0 )
        {
          if ( (*(_DWORD *)v7 & 0x400) != 0
            && *((_DWORD *)v7 + 111)
            && !CInputDest::IsEqualByWindowHandle((__int64)v7 + 352, *((_QWORD *)v7 + 24), 0) )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7045);
          }
          if ( (*(_DWORD *)v7 & 0x400) != 0 )
          {
            v35 = v8 | 4;
            v36 = CInputDest::CInputDest(v44, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
          }
          else
          {
            v35 = v8 | 8;
            v36 = (__m128i *)CInputDest::CInputDest(
                               (CInputDest *)v43,
                               (const struct CPointerInfoNode *)((char *)v7 + 24));
          }
          CInputDest::operator=(v41, v36);
          if ( (v35 & 8) != 0 )
            CInputDest::~CInputDest((CInputDest *)v43);
          if ( (v35 & 4) != 0 )
            CInputDest::~CInputDest((CInputDest *)v44);
          v37 = CInputDest::CInputDest((CInputDest *)v43, (const struct CInputDest *)v41);
          CTouchProcessor::GenerateRoutedAwayMessages(this, v6, v37, v34, a5, a6);
        }
      }
      CTouchProcessor::UnreferenceMsgData((__int64)this, v6, 1);
    }
    else
    {
LABEL_88:
      if ( (NonConstMsgData[9] & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7068);
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v39 = 198;
      goto LABEL_86;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69144),
        2,
        4,
        196,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v14 = 0;
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v11 || v10 )
    {
      v39 = 197;
      goto LABEL_86;
    }
  }
  CInputDest::~CInputDest((CInputDest *)v41);
}
