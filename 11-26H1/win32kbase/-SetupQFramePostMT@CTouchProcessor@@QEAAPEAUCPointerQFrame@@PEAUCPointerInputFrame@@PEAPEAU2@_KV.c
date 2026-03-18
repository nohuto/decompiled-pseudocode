/*
 * XREFs of ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x14010A158
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x140068154 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x14006855C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetupQFramePostMT(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        struct CInputDest *a5,
        unsigned int a6)
{
  __int64 *v7; // r15
  __int64 v8; // rbp
  CTouchProcessor *v9; // rcx
  char v10; // bl
  int v11; // edx
  __int64 v12; // rdi
  unsigned int i; // esi
  CTouchProcessor *v14; // rcx
  CTouchProcessor *v15; // rcx
  CInputDest *v17; // rax
  void *v18; // r8
  __int16 v19; // [rsp+30h] [rbp-B8h]
  _BYTE v20[128]; // [rsp+40h] [rbp-A8h] BYREF

  v7 = a3;
  v8 = a2;
  v9 = WPP_GLOBAL_Control;
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
      83,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)v9, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3668LL);
  v12 = *(_QWORD *)(v8 + 248);
  for ( i = 0; i < *(_DWORD *)(v8 + 48); ++i )
  {
    if ( (*(_DWORD *)(v12 + 140) & 0x10) == 0 )
    {
      if ( *(_DWORD *)v12 == -1 )
      {
        v17 = CInputDest::CInputDest((CInputDest *)v20, a5);
        CTouchProcessor::InitializeQFrame(a6, v12, i, a4, v17, a6);
LABEL_28:
        v15 = WPP_GLOBAL_Control;
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
          v18 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
          v19 = 84;
LABEL_44:
          LOBYTE(v18) = v10;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)v15 + 3),
            v11,
            (_DWORD)v18,
            *((_QWORD *)v15 + 8),
            5,
            4,
            v19,
            (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
          goto LABEL_24;
        }
        goto LABEL_24;
      }
      if ( *(_QWORD *)(v12 + 8) == a4 )
        goto LABEL_28;
    }
    v12 += 160LL;
  }
  v12 = *v7;
  *v7 = 0LL;
  *(_QWORD *)(v12 + 8) = a4;
  CInputDest::operator=(v12 + 16, (__int64)a5);
  if ( *(_DWORD *)(v12 + 144) != 22 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3710LL);
  CTouchProcessor::InitializeQFrameCoalesceState(v14, (struct CPointerQFrame *)v12, a6);
  v15 = WPP_GLOBAL_Control;
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
    v18 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    v19 = 85;
    goto LABEL_44;
  }
LABEL_24:
  CInputDest::~CInputDest(a5);
  return v12;
}
