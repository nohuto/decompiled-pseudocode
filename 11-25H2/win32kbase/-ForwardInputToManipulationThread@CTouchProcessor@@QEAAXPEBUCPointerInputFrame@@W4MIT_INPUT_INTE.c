/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140187020
 * Callers:
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x14019F270 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140061500 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1400DEBBC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x140185E58 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x140188C54 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1401FAACC (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

_UNKNOWN **__fastcall CTouchProcessor::ForwardInputToManipulationThread(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r13d
  CTouchProcessor *v7; // rcx
  unsigned int v8; // r14d
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  bool v12; // bl
  _UNKNOWN **result; // rax
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  _DWORD *v18; // r12
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // r15
  CTouchProcessor *v23; // rcx
  __int64 v24; // rdx
  char v25; // di
  char v26; // r12
  unsigned int v27; // r13d
  struct CInputPointerNode *NodeById; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  char v32; // cf
  unsigned int v33; // [rsp+50h] [rbp-69h]
  unsigned int v34[2]; // [rsp+50h] [rbp-69h]
  void *v35; // [rsp+58h] [rbp-61h]
  __int64 v36; // [rsp+60h] [rbp-59h] BYREF
  int v37; // [rsp+68h] [rbp-51h]
  int v38; // [rsp+6Ch] [rbp-4Dh]
  int v39; // [rsp+70h] [rbp-49h]
  int v40; // [rsp+74h] [rbp-45h]
  __int128 v41; // [rsp+80h] [rbp-39h]
  __int128 v42; // [rsp+90h] [rbp-29h]
  unsigned int Size; // [rsp+138h] [rbp+7Fh]

  v6 = CTouchProcessor::CountMTNodesReadyForRouting((CTouchProcessor *)a1, (const struct CPointerInputFrame *)a2);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3127LL);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3128LL);
  v7 = (CTouchProcessor *)(v6 - 1);
  if ( (unsigned __int64)(240LL * (_QWORD)v7) > 0xFFFFFFFF || (v8 = 240 * (_DWORD)v7 + 408, Size = v8, v8 < 0x198) )
  {
    v8 = 0;
    Size = 0;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3140LL);
  }
  if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 136) )
  {
    v9 = *(char **)(a1 + 128);
    if ( v9 )
    {
      GreDeleteFastMutex(v9);
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v10 = Win32AllocPoolZInitImpl(256LL, v8, 0x6D696955u);
    *(_QWORD *)(a1 + 128) = v10;
    if ( !v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3152LL);
    if ( !*(_QWORD *)(a1 + 128) )
    {
      v12 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      result = &WPP_RECORDER_INITIALIZED;
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v12;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_D(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v17,
                              v16,
                              *(_QWORD *)(UserSessionState + 69144),
                              2,
                              4,
                              78,
                              (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
                              v8);
      }
      return result;
    }
    *(_QWORD *)(a1 + 136) = v8;
  }
  v18 = *(_DWORD **)(a1 + 128);
  v35 = v18;
  *v18 = a3;
  v33 = CTouchProcessor::CalcManipulationInputInfoSize(v7, v6);
  if ( v8 <= v33 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3165LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v22 = v18 + 2;
  *(LARGE_INTEGER *)((isChildPartition(v21, v20) ? 0x48 : 0) + a2 + 104) = PerformanceCounter;
  CTouchProcessor::BuildManipulationInputInfo(
    v23,
    (struct tagMANIPULATION_INPUT_INFO *)(v18 + 2),
    v33,
    (const struct CPointerInputFrame *)a2);
  InputTraceLogging::TelemetryDebug::Pointer::SendFrameToUserMode(
    (const struct TELEMETRY_POINTER_FRAME_TIMES *)(a2 + 72),
    v24);
  InputTraceLogging::Pointer::SendFrameToUserMode(
    (const struct CPointerInputFrame *)a2,
    v6,
    (const struct tagMANIPULATION_INPUT_INFO *)(v18 + 2));
  SendMessageTo(7LL, v18, v8);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v41 = *((_OWORD *)v22 + 10);
  v42 = *((_OWORD *)v22 + 11);
  if ( !v22[37] )
    goto LABEL_36;
  do
  {
    *(_QWORD *)v34 = 240LL * v27;
    NodeById = CTouchProcessor::FindNodeById(
                 (CTouchProcessor *)a1,
                 *(_WORD *)((char *)v22 + *(_QWORD *)v34 + 164),
                 0,
                 0);
    if ( NodeById )
    {
      _InterlockedAdd((volatile signed __int32 *)NodeById + 9, 1u);
      if ( *((int *)NodeById + 9) <= 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3193LL);
    }
    v29 = *(_DWORD *)((char *)v22 + *(_QWORD *)v34 + 172);
    if ( (v29 & 2) != 0 )
      v26 = 1;
    if ( (v29 & 4) != 0 )
      v25 = 1;
    ++v27;
  }
  while ( v27 < v22[37] );
  v8 = Size;
  if ( !v25 )
  {
LABEL_36:
    if ( (_DWORD)v41 != 3 || !v26 )
    {
      v30 = HMValidateHandleNoSecure(v42, 19);
      if ( v30 && (v31 = *(_QWORD *)(v30 + 456)) != 0 )
      {
        v39 = *(_DWORD *)(v31 + 968);
        v32 = v22[38] & 1;
        v40 = 0;
        v36 = v42;
        v38 = -v32;
        v37 = v41;
        SendMessageTo(19LL, &v36, 24LL);
        *(_DWORD *)(v31 + 972) = 0;
      }
      else if ( HIDWORD(v41) != 0x800000 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3235LL);
      }
    }
  }
  return (_UNKNOWN **)memset(v35, 0, v8);
}
