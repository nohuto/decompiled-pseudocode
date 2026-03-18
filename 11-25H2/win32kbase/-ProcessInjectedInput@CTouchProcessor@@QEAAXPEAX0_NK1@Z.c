/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140207858
 * Callers:
 *     SynthesizeMitTouchInput @ 0x14021C740 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x14021CAC4 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1401FE898 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x140208F90 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        PERESOURCE *this,
        __int64 a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  int v10; // edx
  int v11; // r8d
  char v12; // bl
  struct CPointerInputFrame *v13; // rax
  const struct RIMCOMPLETEFRAME *v14; // rdx
  struct RIMCOMPLETEFRAME *v15; // r8
  char v16; // si
  bool v17; // bp
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  _QWORD *v21; // rcx
  void *v22; // r8
  const struct CPointerInputFrame *v23; // rax
  const struct CPointerInputFrame *v24; // rsi
  char v25; // si
  bool v26; // bp
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int16 v30; // [rsp+30h] [rbp-58h]
  PERESOURCE *v31[6]; // [rsp+40h] [rbp-48h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v31, this + 4, 0LL);
  v12 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v11) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v10 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      24,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v13 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 0, a4);
  if ( v13 )
  {
    v23 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)this, v13, v15, a5);
    v24 = v23;
    if ( v23 )
    {
      if ( *((_DWORD *)v23 + 12) <= *((_DWORD *)v23 + 13) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 999);
      if ( !*((_QWORD *)v24 + 30) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1000);
      CTouchProcessor::DoContactVisualizationAndGenerateMessages((CTouchProcessor *)this, v14, v24, a2, 1, 0, a6);
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v14 || v12 )
      {
        v22 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
        v30 = 29;
        goto LABEL_61;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          4,
          27,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v14 || v12 )
      {
        v22 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
        v30 = 28;
        goto LABEL_61;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69144),
        2,
        4,
        25,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v12 = 0;
    if ( (_BYTE)v14 || v12 )
    {
      v22 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v30 = 26;
LABEL_61:
      LOBYTE(v22) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        v21[3],
        (_DWORD)v14,
        (_DWORD)v22,
        v21[8],
        5,
        4,
        v30,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v31);
}
