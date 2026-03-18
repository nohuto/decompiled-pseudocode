/*
 * XREFs of ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x140201A00
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1402088EC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedReleasedMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        CInputDest *a7)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  char v11; // si
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  CInputDest *v14; // rax
  __int64 v15; // rdx
  char v16; // bp
  bool v17; // r14
  __int16 v18; // bx
  int v19; // edi
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  void *v23; // r8
  int v24; // [rsp+28h] [rbp-D0h]
  int v25; // [rsp+38h] [rbp-C0h]
  _BYTE v26[128]; // [rsp+50h] [rbp-A8h] BYREF

  v8 = a3;
  v9 = a2;
  v11 = 1;
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
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      226,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v12 = *(_QWORD *)(v9 + 240) + 480 * v8;
  v13 = (*(_DWORD *)(v12 + 168) != 5) - 1LL;
  if ( (*(_DWORD *)(v12 + 180) & 0x40000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7617);
  v14 = CInputDest::CInputDest((CInputDest *)v26, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                        a1,
                        v12,
                        v13,
                        (const struct CPointerInputFrame *)v9,
                        0x253u,
                        a4,
                        a5,
                        a6,
                        v14) )
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
      v18 = *(_WORD *)(v12 + 160);
      v19 = *(_DWORD *)(v12 + 172);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v21) = v17;
      LOBYTE(v22) = v16;
      WPP_RECORDER_AND_TRACE_SF_LL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        v24,
        227,
        v25,
        v19,
        v18);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v11 = 0;
  if ( (_BYTE)v15 || v11 )
  {
    v23 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v23) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      (_DWORD)v23,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      228,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  CInputDest::~CInputDest(a7);
}
