/*
 * XREFs of ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140038370
 * Callers:
 *     DCompHitTest @ 0x1400382D0 (DCompHitTest.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x140067578 (ApiSetAddMagnificationOutputTransform.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1400B83F4 (-HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400CFC20 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1400F51CC (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z @ 0x1400F543C (-Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x140122408 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018DE2C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ApiSetClientCallDitThread @ 0x140194A64 (ApiSetClientCallDitThread.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x140197574 (ApiSetRemoveMagnificationOutputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

_BYTE *__fastcall CSpatialProcessor::SpeedHitTest(_BYTE *a1, unsigned int *a2, __int64 a3)
{
  char v6; // r13
  __int64 v7; // rdx
  char v8; // r12
  unsigned int v9; // ebx
  unsigned int v10; // edi
  int v11; // esi
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  _QWORD *v24; // rax
  void *v25; // rcx
  bool v27; // [rsp+60h] [rbp-D8h]
  _BYTE v28[128]; // [rsp+70h] [rbp-C8h] BYREF

  memset(a1, 0, 0x70uLL);
  a1[112] = 0;
  if ( !*a2 || (v6 = 0, *a2 == 6) )
    v6 = 1;
  ApiSetAddMagnificationOutputTransform(a2 + 5);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2[6];
    v10 = a2[5];
    v11 = *a2;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v13) = v27;
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      10,
      (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
      v11,
      v10,
      v9);
  }
  InputTraceLogging::DWM::HitTestRequest(*((_QWORD *)a2 + 6), (const struct _InputHitTestRequest *)a2);
  v17 = W32GetUserSessionState(v16, v15);
  if ( (unsigned int)ApiSetClientCallDitThread(*(_QWORD *)(v17 + 3280), a2, a3) )
  {
    ApiSetRemoveMagnificationOutputTransform(a3 + 16);
    if ( v6 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69144),
          4,
          2,
          11,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( *(_DWORD *)a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 78LL);
      CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest((const struct _InputHitTestResult *)a3);
    }
    else
    {
      v24 = (_QWORD *)CSpatialProcessor::ResolveDcompHitTestResultToInputDest(v28, a3, *a2, *((_QWORD *)a2 + 6));
      CInputDest::operator=(a1, v24);
      CInputDest::~CInputDest((CInputDest *)v28);
      if ( *(_DWORD *)a1 && !CInputDest::GetThreadInfo((CInputDest *)a1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
    }
    if ( *(_QWORD *)(a3 + 8) && !*(_DWORD *)a1 )
      *(_DWORD *)(a3 + 80) = 0;
  }
  InputTraceLogging::DWM::HitTestResult(
    *((_QWORD *)a2 + 6),
    a2[3],
    (const struct _InputHitTestResult *)a3,
    (const struct CInputDest *)a1);
  v25 = *(void **)(a3 + 8);
  if ( v25 )
  {
    InputTraceLogging::InputSink::Close(v25, 1);
    NtClose(*(HANDLE *)(a3 + 8));
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  return a1;
}
