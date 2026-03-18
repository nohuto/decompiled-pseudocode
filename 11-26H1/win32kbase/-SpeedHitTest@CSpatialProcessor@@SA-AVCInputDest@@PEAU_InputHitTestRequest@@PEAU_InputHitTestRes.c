/*
 * XREFs of ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610
 * Callers:
 *     DCompHitTest @ 0x140070590 (DCompHitTest.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KPEAHPEAU_InputHitTestResult@@@Z @ 0x140106654 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x140070A2C (-HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x140070D74 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x140070F74 (ApiSetAddMagnificationOutputTransform.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140070FE4 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ClientCallDitThread @ 0x140071100 (ClientCallDitThread.c)
 *     ?Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z @ 0x14007115C (-Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x1400711C8 (ApiSetRemoveMagnificationOutputTransform.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1400A3194 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_DWORD *__fastcall CSpatialProcessor::SpeedHitTest(_DWORD *a1, unsigned int *a2, __int64 a3)
{
  char v6; // r13
  int v7; // r8d
  char v8; // r12
  unsigned int v9; // ebx
  unsigned int v10; // edi
  int v11; // esi
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rcx
  int (*v20)(void); // rax
  int v21; // ebx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rax
  _OWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rcx
  char v31; // bl
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // [rsp+60h] [rbp-D8h]
  int v37; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v38[80]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-78h]
  int v40; // [rsp+CCh] [rbp-6Ch]

  memset(a1, 0, 0x70uLL);
  *((_BYTE *)a1 + 112) = 0;
  if ( !*a2 || (v6 = 0, *a2 == 6) )
    v6 = 1;
  ApiSetAddMagnificationOutputTransform(a2 + 5);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2[6];
    v10 = a2[5];
    v11 = *a2;
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, v7);
    LOBYTE(v13) = v36;
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      2,
      10,
      (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
      v11,
      v10,
      v9);
  }
  InputTraceLogging::DWM::HitTestRequest(*((_QWORD *)a2 + 6), (const struct _InputHitTestRequest *)a2);
  v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 3280);
  v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48) + 5696LL);
  if ( v20 )
  {
    if ( v20() >= 0 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v37,
        "HitTestCallout",
        0LL);
      v21 = ClientCallDitThread(v18, a2, a3);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v37);
      if ( v21 )
      {
        ApiSetRemoveMagnificationOutputTransform(a3 + 16);
        if ( v6 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v31 = 0;
          }
          v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v33 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
            LOBYTE(v34) = v32;
            LOBYTE(v35) = v31;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v35,
              v34,
              *(_QWORD *)(v33 + 69136),
              4,
              2,
              11,
              (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids);
          }
          if ( *a1 )
          {
            v37 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 78LL);
          }
          CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest((const struct _InputHitTestResult *)a3);
        }
        else
        {
          v24 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(v38, a3, *a2, *((_QWORD *)a2 + 6));
          v25 = (_OWORD *)v24;
          if ( a1 != (_DWORD *)v24 )
          {
            if ( !*((_BYTE *)a1 + 112) || *(_QWORD *)(v24 + 80) != *((_QWORD *)a1 + 10) )
              CInputDest::~CInputDest((CInputDest *)a1);
            *(_OWORD *)a1 = *v25;
            *((_OWORD *)a1 + 1) = v25[1];
            *((_OWORD *)a1 + 2) = v25[2];
            *((_OWORD *)a1 + 3) = v25[3];
            *((_OWORD *)a1 + 4) = v25[4];
            *((_OWORD *)a1 + 5) = v25[5];
            *((_OWORD *)a1 + 6) = v25[6];
            memset(v25, 0, 0x78uLL);
          }
          if ( v40 )
          {
            v26 = v39;
            v39 = 0LL;
            if ( v26 )
              HMUnlockObject(v26);
          }
          if ( *a1 )
          {
            if ( !a1[23] || ((v27 = *((_QWORD *)a1 + 10)) == 0 ? (v28 = 0LL) : (v28 = *(_QWORD *)(v27 + 16)), !v28) )
            {
              v37 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
            }
          }
        }
        if ( *(_QWORD *)(a3 + 8) && !*a1 )
          *(_DWORD *)(a3 + 80) = 0;
      }
    }
  }
  InputTraceLogging::DWM::HitTestResult(
    *((_QWORD *)a2 + 6),
    a2[3],
    (const struct _InputHitTestResult *)a3,
    (const struct CInputDest *)a1);
  v29 = *(void **)(a3 + 8);
  if ( v29 )
  {
    InputTraceLogging::InputSink::Close(v29, 1);
    NtClose(*(HANDLE *)(a3 + 8));
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  return a1;
}
