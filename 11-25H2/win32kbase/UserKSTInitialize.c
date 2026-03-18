/*
 * XREFs of UserKSTInitialize @ 0x140219140
 * Callers:
 *     NtKSTInitialize @ 0x1401BA280 (NtKSTInitialize.c)
 * Callees:
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CC030 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x14014F700 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x140150F40 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x14015CBAC (-ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x14015D7D0 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x14019F03C (-DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019F080 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x14019FAF0 (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     PerfomInitialReadInputExplicitly @ 0x1401A08FC (PerfomInitialReadInputExplicitly.c)
 *     ?UserKSTInitialize@KST@InputTraceLogging@@SAXXZ @ 0x1401A1FD0 (-UserKSTInitialize@KST@InputTraceLogging@@SAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020FE00 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     KSTIOCPDispatcher_Destroy @ 0x140210F20 (KSTIOCPDispatcher_Destroy.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x140218DE4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 *     ActivateKSTInputProcessingHelper @ 0x140218E00 (ActivateKSTInputProcessingHelper.c)
 *     ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1402237B4 (-InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z.c)
 */

__int64 __fastcall UserKSTInitialize(void *a1, void *a2)
{
  void *v2; // rbx
  char v4; // di
  char v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // bl
  bool v12; // si
  __int64 v13; // rax
  int v14; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int8 v22; // bl
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // si
  bool v28; // bp
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  void *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  void *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  void *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  void *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  void *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      10,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::UserKSTInitialize();
  InputTraceLogging::KST::DeclareThreadAsKST();
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( CInputThreadBase::DeclareThreadAsInput(*(CInputThreadBase **)(UserSessionState + 3104)) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19224) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 52);
    v18 = W32GetUserSessionState(v17, v16);
    if ( (int)CKernelSensorThread::InitializeEventHandles(*(CKernelSensorThread **)(v18 + 3104), a1, v2) >= 0
      && (v21 = W32GetUserSessionState(v20, v19),
          (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)(v21 + 19224)) >= 0)
      && ActivateKSTInputProcessingHelper() )
    {
      InputTraceLogging::KST::ActivateKSTInputProcessing();
      v33 = W32GetUserSessionState(v32, v31);
      CInputThreadBase::ActivateInputProcessing(*(CInputThreadBase **)(v33 + 3104));
      v36 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 3104);
      v37 = *(void **)(v36 + 48);
      v39 = W32GetUserSessionState(v36, v38);
      IOCPDispatcher::RegisterThreadDispatcherObject(*(IOCPDispatcher **)(v39 + 19224), v37);
      v42 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 3104);
      v43 = *(void **)(v42 + 56);
      v45 = W32GetUserSessionState(v42, v44);
      IOCPDispatcher::RegisterThreadDispatcherObject(*(IOCPDispatcher **)(v45 + 19224), v43);
      v48 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 3104);
      v49 = *(void **)(v48 + 64);
      v51 = W32GetUserSessionState(v48, v50);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v51 + 19224),
        v49,
        (void (*)(void *))lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_,
        0LL);
      v54 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 3104);
      v55 = *(void **)(v54 + 72);
      v57 = W32GetUserSessionState(v54, v56);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v57 + 19224),
        v55,
        (void (*)(void *))lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_,
        0LL);
      v60 = *(_QWORD *)(W32GetUserSessionState(v59, v58) + 3104);
      v61 = *(void **)(v60 + 80);
      v63 = W32GetUserSessionState(v60, v62);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v63 + 19224),
        v61,
        (void (*)(void *))lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_,
        0LL);
      if ( (unsigned int)IsRemoteConnection() )
      {
        v66 = W32GetUserSessionState(v65, v64);
        CBaseInput::HandleTSRequest(*(CBaseInput **)(v66 + 3096), 0LL);
      }
      PerfomInitialReadInputExplicitly(0LL, v64);
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
        && ShouldKSTInitializeHidSensor() )
      {
        PerfomInitialReadInputExplicitly(2LL, v26);
      }
      v22 = 1;
    }
    else
    {
      v22 = 0;
      KSTIOCPDispatcher_Destroy(v20, v19);
      v25 = W32GetUserSessionState(v24, v23);
      CKernelSensorThread::DestroyEventHandles(*(CKernelSensorThread **)(v25 + 3104));
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        LOBYTE(v30) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v28,
          *(_QWORD *)(v29 + 69144),
          2,
          2,
          13,
          (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
      }
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v26) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v26) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( (_BYTE)v26 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v4,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        14,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
    return v22;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v14) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v12,
        *(_QWORD *)(v13 + 69144),
        2,
        2,
        11,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( (_BYTE)v9 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v4,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        12,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
    return 0LL;
  }
}
