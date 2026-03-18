/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C
 * Callers:
 *     SynthesizePTPMouseInput @ 0x1400D0144 (SynthesizePTPMouseInput.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1400D1194 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     SynthesizeMouseInput @ 0x14015DEE0 (SynthesizeMouseInput.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x140222A38 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x140222BC8 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x140222C88 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1402235C0 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1400D15E4 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1400D17BC (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400D28D4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1401C2428 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct PTPMouseInputData *a3)
{
  char v5; // di
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  const struct _MOUSE_INPUT_DATA *v10; // r15
  struct MouseInputProcessingState *v11; // r12
  const struct tagUIPI_INFO_INT *v12; // r13
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v21; // rcx
  bool v22; // bl
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  _QWORD v26[10]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v28[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+17h]

  v5 = 1;
  InputTraceLogging::Mouse::ProcessInput(0LL, a2, 1);
  v27[1] = 0LL;
  v10 = 0LL;
  v11 = (struct MouseInputProcessingState *)v27;
  v12 = 0LL;
  v14 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19216);
  v27[0] = v14;
  if ( a3 )
  {
    v10 = (const struct _MOUSE_INPUT_DATA *)*((_QWORD *)a3 + 3);
    v11 = a3;
    v12 = (const struct tagUIPI_INFO_INT *)*((_QWORD *)a3 + 5);
  }
  v16 = *((_DWORD *)a2 + 18);
  if ( (v16 & 0x200) != 0
    && (v16 & 4) == 0
    && (v16 & 0x8000) == 0
    && *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(this, a2) == 1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v15);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        6,
        16,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
  }
  else
  {
    if ( IsMouseIVEnabled(v14, v13, v15) && (unsigned __int8)isChildPartition(v18, v17, v19) )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 4064));
    memset(v26, 0, sizeof(v26));
    LODWORD(v26[9]) = 3;
    v29 = 3LL;
    HIDWORD(v29) = *((unsigned __int16 *)a2 + 2);
    memset(v28, 0, sizeof(v28));
    if ( a3 )
    {
      if ( *((_QWORD *)a3 + 2) )
      {
        LODWORD(v26[9]) = 1;
        LODWORD(v29) = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v21 = (_QWORD *)*((_QWORD *)a3 + 2);
        v26[7] = PerformanceCounter.QuadPart;
        v26[0] = *v21;
        v26[1] = v21[1];
        v26[2] = v21[2];
        v26[3] = v21[3];
        v26[4] = v21[4];
        v26[5] = v21[5];
        v26[6] = v21[6];
      }
    }
    CMouseProcessor::ProcessMouseInputData(this, a2, v11, (LARGE_INTEGER *)v28, v10, v12);
    v26[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3648));
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 3024),
      (const struct _MousePerf *)v26);
    W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3648));
  }
}
