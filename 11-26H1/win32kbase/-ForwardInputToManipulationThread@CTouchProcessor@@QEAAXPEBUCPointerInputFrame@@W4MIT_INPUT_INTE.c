/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1401BADF0 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x14006A300 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x14008BFEC (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x14008C3E4 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x14008C414 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14008C80C (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_UNKNOWN **__fastcall CTouchProcessor::ForwardInputToManipulationThread(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  CTouchProcessor *v10; // rcx
  unsigned int v11; // r14d
  char *v12; // r12
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v17; // r13
  CTouchProcessor *v18; // rcx
  __int64 v19; // rdx
  char v20; // di
  char v21; // r15
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rbx
  char v25; // cf
  PERESOURCE *v26; // r14
  _QWORD *v27; // rsi
  unsigned int v28; // r12d
  _QWORD *v29; // rax
  int v30; // eax
  _UNKNOWN **result; // rax
  char *v32; // rcx
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  bool v36; // bl
  bool v37; // di
  __int64 UserSessionState; // rax
  int v39; // r8d
  int v40; // edx
  unsigned int v41; // [rsp+54h] [rbp-65h]
  __int64 v42; // [rsp+58h] [rbp-61h]
  char *v43; // [rsp+60h] [rbp-59h]
  __int64 v44; // [rsp+68h] [rbp-51h] BYREF
  int v45; // [rsp+70h] [rbp-49h]
  int v46; // [rsp+74h] [rbp-45h]
  int v47; // [rsp+78h] [rbp-41h]
  int v48; // [rsp+7Ch] [rbp-3Dh]
  __int128 v49; // [rsp+80h] [rbp-39h]
  __int128 v50; // [rsp+90h] [rbp-29h]
  __int16 v51; // [rsp+120h] [rbp+67h]
  unsigned int v53; // [rsp+138h] [rbp+7Fh]

  v6 = CTouchProcessor::CountMTNodesReadyForRouting((CTouchProcessor *)a1, (const struct CPointerInputFrame *)a2);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3111LL);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3112LL);
  v10 = (CTouchProcessor *)(v6 - 1);
  if ( (unsigned __int64)(240LL * (_QWORD)v10) > 0xFFFFFFFF || (v11 = 240 * (_DWORD)v10 + 408, v41 = v11, v11 < 0x198) )
  {
    v11 = 0;
    v41 = 0;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3124LL);
  }
  if ( (unsigned __int64)v11 > *(_QWORD *)(a1 + 136) )
  {
    v32 = *(char **)(a1 + 128);
    if ( v32 )
    {
      GreDeleteFastMutex(v32, v7, v8, v9);
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v33 = Win32AllocPoolZInitImpl(256LL, v11, 0x6D696955u);
    *(_QWORD *)(a1 + 128) = v33;
    if ( !v33 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3136LL);
    if ( !*(_QWORD *)(a1 + 128) )
    {
      v36 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      result = &WPP_RECORDER_INITIALIZED;
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v34, v35);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v36;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_D(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v40,
                              v39,
                              *(_QWORD *)(UserSessionState + 69136),
                              2,
                              4,
                              78,
                              (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
                              v11);
      }
      return result;
    }
    *(_QWORD *)(a1 + 136) = v11;
  }
  v12 = *(char **)(a1 + 128);
  v43 = v12;
  *(_DWORD *)v12 = a3;
  v53 = CTouchProcessor::CalcManipulationInputInfoSize(v10, v6);
  if ( v11 <= v53 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3149LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v17 = v12 + 8;
  *(LARGE_INTEGER *)(((unsigned __int8)isChildPartition(v15, v14, v16) != 0 ? 0x48 : 0) + a2 + 104) = PerformanceCounter;
  CTouchProcessor::BuildManipulationInputInfo(
    v18,
    (struct tagMANIPULATION_INPUT_INFO *)(v12 + 8),
    v53,
    (const struct CPointerInputFrame *)a2);
  InputTraceLogging::TelemetryDebug::Pointer::SendFrameToUserMode((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a2 + 72));
  InputTraceLogging::Pointer::SendFrameToUserMode(
    (const struct CPointerInputFrame *)a2,
    v6,
    (const struct tagMANIPULATION_INPUT_INFO *)(v12 + 8));
  SendMessageTo(7LL, v12, v11);
  v20 = 0;
  v21 = 0;
  v22 = *(_OWORD *)(v12 + 184);
  v49 = *(_OWORD *)(v12 + 168);
  v50 = v22;
  if ( !*((_DWORD *)v12 + 39) )
    goto LABEL_13;
  v26 = (PERESOURCE *)(a1 + 32);
  v27 = (_QWORD *)(a1 + 64);
  v28 = 0;
  do
  {
    v42 = 240LL * v28;
    v51 = *(_WORD *)&v17[v42 + 164];
    if ( !tagDomLock::IsLockedShared(v26) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
    v29 = (_QWORD *)*v27;
    if ( (_QWORD *)*v27 != v27 )
    {
      while ( *((_WORD *)v29 + 16) != v51 )
      {
        v29 = (_QWORD *)*v29;
        if ( v29 == v27 )
          goto LABEL_23;
      }
      _InterlockedAdd((volatile signed __int32 *)v29 + 9, 1u);
      if ( *((int *)v29 + 9) <= 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3177LL);
    }
LABEL_23:
    v19 = 2LL;
    v30 = *(_DWORD *)&v17[v42 + 172];
    if ( (v30 & 2) != 0 )
      v21 = 1;
    if ( (v30 & 4) != 0 )
      v20 = 1;
    ++v28;
  }
  while ( v28 < *((_DWORD *)v17 + 37) );
  v11 = v41;
  v12 = v43;
  if ( !v20 )
  {
LABEL_13:
    if ( (_DWORD)v49 != 3 || !v21 )
    {
      LOBYTE(v19) = 19;
      v23 = HMValidateHandleNoSecure(v50, v19);
      if ( v23 && (v24 = *(_QWORD *)(v23 + 456)) != 0 )
      {
        v47 = *(_DWORD *)(v24 + 968);
        v25 = *((_DWORD *)v17 + 38) & 1;
        v48 = 0;
        v44 = v50;
        v46 = -v25;
        v45 = v49;
        SendMessageTo(19LL, &v44, 24LL);
        *(_DWORD *)(v24 + 972) = 0;
      }
      else if ( HIDWORD(v49) != 0x800000 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3219LL);
      }
    }
  }
  return (_UNKNOWN **)memset(v12, 0, v11);
}
