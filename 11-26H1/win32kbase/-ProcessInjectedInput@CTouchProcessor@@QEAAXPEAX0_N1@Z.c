/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z @ 0x1402161B4
 * Callers:
 *     SynthesizeMitTouchInput @ 0x140220114 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1402204A8 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x140065B14 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140066860 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        PERESOURCE *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        bool a5)
{
  int v9; // edx
  int v10; // r8d
  char v11; // bl
  struct CPointerInputFrame *v12; // rax
  const struct RIMCOMPLETEFRAME *v13; // rdx
  struct RIMCOMPLETEFRAME *v14; // r8
  char v15; // si
  bool v16; // bp
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  CTouchProcessor *v20; // rcx
  void *v21; // r8
  const struct CPointerInputFrame *v22; // rax
  int v23; // r8d
  const struct CPointerInputFrame *v24; // rsi
  char v25; // si
  bool v26; // bp
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int16 v30; // [rsp+30h] [rbp-58h]
  PERESOURCE *v31[6]; // [rsp+40h] [rbp-48h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v31, this + 4, 0LL);
  v11 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      24,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v12 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 0, a4);
  if ( v12 )
  {
    v22 = CTouchProcessor::ReferenceInputFrame(this, v12, v14);
    v24 = v22;
    if ( v22 )
    {
      if ( *((_DWORD *)v22 + 12) <= *((_DWORD *)v22 + 13) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 996);
      if ( !*((_QWORD *)v24 + 30) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 997);
      CTouchProcessor::DoContactVisualizationAndGenerateMessages((CTouchProcessor *)this, v13, v24, a2, 1, 0, a5);
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( (_BYTE)v13 || v11 )
      {
        v21 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
        v30 = 29;
        goto LABEL_61;
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
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v13, v23);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          4,
          27,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( (_BYTE)v13 || v11 )
      {
        v21 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
        v30 = 28;
        goto LABEL_61;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v13, (_DWORD)v14);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69136),
        2,
        4,
        25,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v13 || v11 )
    {
      v21 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      v30 = 26;
LABEL_61:
      LOBYTE(v21) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v20 + 3),
        (_DWORD)v13,
        (_DWORD)v21,
        *((_QWORD *)v20 + 8),
        5,
        4,
        v30,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v31, (__int64)v13);
}
