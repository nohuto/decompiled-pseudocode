/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x14005E8F8
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005E70C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     SynthesizePTPMouseInput @ 0x14018CD00 (SynthesizePTPMouseInput.c)
 *     SynthesizeMouseInput @ 0x140216D10 (SynthesizeMouseInput.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021F290 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x14021F414 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x14021F4D4 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x140220388 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x14005EBD4 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005ECCC (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x14005F1C0 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140060388 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400603D8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x14019FFAC (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct PTPMouseInputData *a3)
{
  char v5; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  const struct _MOUSE_INPUT_DATA *v9; // r15
  struct tagPOINT *v10; // r12
  const struct tagUIPI_INFO_INT *v11; // r13
  __int64 v12; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v14; // rcx
  bool v15; // bl
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  _QWORD v19[10]; // [rsp+40h] [rbp-79h] BYREF
  struct tagPOINT v20; // [rsp+90h] [rbp-29h] BYREF
  __int64 v21; // [rsp+98h] [rbp-21h]
  _OWORD v22[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+17h]

  v5 = 1;
  InputTraceLogging::Mouse::ProcessInput(0LL, a2, 1);
  v21 = 0LL;
  v9 = 0LL;
  v10 = &v20;
  v11 = 0LL;
  v20 = *(struct tagPOINT *)(W32GetUserSessionState(v8, v7) + 19184);
  if ( a3 )
  {
    v9 = (const struct _MOUSE_INPUT_DATA *)*((_QWORD *)a3 + 3);
    v10 = (struct tagPOINT *)a3;
    v11 = (const struct tagUIPI_INFO_INT *)*((_QWORD *)a3 + 5);
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 512LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 4LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL)
    && *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(this, a2) == 1 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        6,
        16,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
  }
  else
  {
    if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isChildPartition() )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 4056));
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[9]) = 3;
    v23 = 3LL;
    HIDWORD(v23) = *((unsigned __int16 *)a2 + 2);
    memset(v22, 0, sizeof(v22));
    if ( a3 )
    {
      if ( *((_QWORD *)a3 + 2) )
      {
        LODWORD(v19[9]) = 1;
        LODWORD(v23) = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v14 = (_QWORD *)*((_QWORD *)a3 + 2);
        v19[7] = PerformanceCounter.QuadPart;
        v19[0] = *v14;
        v19[1] = v14[1];
        v19[2] = v14[2];
        v19[3] = v14[3];
        v19[4] = v14[4];
        v19[5] = v14[5];
        v19[6] = v14[6];
      }
    }
    CMouseProcessor::ProcessMouseInputData(this, a2, v10, (struct _MousePacketPerf *)v22, v9, v11);
    v19[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 3648, 0LL);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 3024),
      (const struct _MousePerf *)v19);
    ExReleasePushLockExclusiveEx((char *)this + 3648, 0LL);
    KeLeaveCriticalRegion();
  }
}
