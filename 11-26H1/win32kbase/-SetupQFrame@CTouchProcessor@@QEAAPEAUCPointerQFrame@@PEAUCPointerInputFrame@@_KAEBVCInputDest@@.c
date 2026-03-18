/*
 * XREFs of ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1400681A8
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140064808 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETE.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x14006855C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::SetupQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        const struct CInputDest *a4,
        int a5)
{
  __int64 v6; // r14
  struct CPointerInputFrame *v7; // rbx
  char v8; // si
  unsigned int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdi
  CInputDest *v12; // rax
  CInputDest *v13; // rbx
  CTouchProcessor *v14; // rcx
  void *v16; // r8
  _BYTE v17[128]; // [rsp+40h] [rbp-A8h] BYREF

  v6 = a3;
  v7 = a2;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8006LL);
  if ( !*((_DWORD *)v7 + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2265LL);
  if ( !v6 && *(_DWORD *)a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2266LL);
  v8 = 1;
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
      68,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v9 = *((_DWORD *)v7 + 12);
  v10 = 0;
  v11 = *((_QWORD *)v7 + 31);
  if ( v9 )
  {
    while ( *(_DWORD *)v11 != -1 )
    {
      if ( *(_QWORD *)(v11 + 8) == v6 )
        goto LABEL_16;
      v11 += 160LL;
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
    goto LABEL_17;
  }
LABEL_14:
  if ( v10 >= v9 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2288LL);
LABEL_16:
  if ( *(_DWORD *)v11 == -1 )
  {
LABEL_17:
    v12 = CInputDest::CInputDest((CInputDest *)v17, a4);
    *(_DWORD *)v11 = v10;
    *(_QWORD *)(v11 + 8) = v6;
    v13 = v12;
    CInputDest::operator=(v11 + 16, v12);
    *(_DWORD *)(v11 + 140) &= 0xFFFFFFE7;
    *(_DWORD *)(v11 + 136) = 0;
    CTouchProcessor::InitializeQFrameCoalesceState(v14, (struct CPointerQFrame *)v11, a5);
    CInputDest::~CInputDest(v13);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v8 = 0;
  if ( (_BYTE)a2 || v8 )
  {
    v16 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v16) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v16,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      69,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  return (struct CPointerQFrame *)v11;
}
