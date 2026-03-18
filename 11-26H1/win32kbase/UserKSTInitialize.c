/*
 * XREFs of UserKSTInitialize @ 0x140181AD0
 * Callers:
 *     NtKSTInitialize @ 0x14018CFE0 (NtKSTInitialize.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1400E91C0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x140110B64 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x14011FC10 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x14011FCC0 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 *     ?DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x140181FB4 (-DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x140181FFC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?UserKSTInitialize@KST@InputTraceLogging@@SAXXZ @ 0x1401820B4 (-UserKSTInitialize@KST@InputTraceLogging@@SAXXZ.c)
 *     ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1401820FC (-InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z.c)
 *     PerfomInitialReadInputExplicitly @ 0x14018F3BC (PerfomInitialReadInputExplicitly.c)
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14018FE24 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x14019CE00 (-ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1401B56FC (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     KSTIOCPDispatcher_Destroy @ 0x140218B40 (KSTIOCPDispatcher_Destroy.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x14021DCB4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 *     ActivateKSTInputProcessingHelper @ 0x14021DCD0 (ActivateKSTInputProcessingHelper.c)
 */

__int64 __fastcall UserKSTInitialize(void *a1, void *a2)
{
  void *v2; // rbx
  char v4; // di
  char v5; // r8
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  char v13; // bl
  bool v14; // si
  __int64 v15; // rax
  int v16; // edx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int8 v26; // bl
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  char v33; // si
  bool v34; // bp
  __int64 v35; // rax
  int v36; // edx
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rcx
  void *v45; // rbx
  int v46; // edx
  int v47; // r8d
  __int64 v48; // rax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rcx
  void *v53; // rbx
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rax
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  __int64 v60; // rcx
  void *v61; // rbx
  int v62; // edx
  int v63; // r8d
  __int64 v64; // rax
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  __int64 v68; // rcx
  void *v69; // rbx
  int v70; // edx
  int v71; // r8d
  __int64 v72; // rax
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  __int64 v76; // rcx
  void *v77; // rbx
  int v78; // edx
  int v79; // r8d
  __int64 v80; // rax
  __int64 v81; // rcx
  int v82; // edx
  int v83; // ecx
  int v84; // r8d
  __int64 v85; // rax
  int v86; // r8d

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
  InputTraceLogging::KST::UserKSTInitialize();
  InputTraceLogging::KST::DeclareThreadAsKST();
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  if ( CInputThreadBase::DeclareThreadAsInput(*(CInputThreadBase **)(UserSessionState + 3104)) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 19256) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 52LL);
    v21 = W32GetUserSessionState(v19, v18, v20);
    if ( (int)CKernelSensorThread::InitializeEventHandles(*(CKernelSensorThread **)(v21 + 3104), a1, v2) >= 0
      && (v25 = W32GetUserSessionState(v23, v22, v24),
          (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)(v25 + 19256)) >= 0)
      && (unsigned int)ActivateKSTInputProcessingHelper() )
    {
      InputTraceLogging::KST::ActivateKSTInputProcessing();
      v40 = W32GetUserSessionState(v38, v37, v39);
      CInputThreadBase::ActivateInputProcessing(*(CInputThreadBase **)(v40 + 3104));
      v44 = *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 3104);
      v45 = *(void **)(v44 + 48);
      v48 = W32GetUserSessionState(v44, v46, v47);
      IOCPDispatcher::RegisterThreadDispatcherObject(*(IOCPDispatcher **)(v48 + 19256), v45);
      v52 = *(_QWORD *)(W32GetUserSessionState(v50, v49, v51) + 3104);
      v53 = *(void **)(v52 + 56);
      v56 = W32GetUserSessionState(v52, v54, v55);
      IOCPDispatcher::RegisterThreadDispatcherObject(*(IOCPDispatcher **)(v56 + 19256), v53);
      v60 = *(_QWORD *)(W32GetUserSessionState(v58, v57, v59) + 3104);
      v61 = *(void **)(v60 + 64);
      v64 = W32GetUserSessionState(v60, v62, v63);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v64 + 19256),
        v61,
        (void (*)(void *))lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_,
        0LL);
      v68 = *(_QWORD *)(W32GetUserSessionState(v66, v65, v67) + 3104);
      v69 = *(void **)(v68 + 72);
      v72 = W32GetUserSessionState(v68, v70, v71);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v72 + 19256),
        v69,
        lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_,
        0LL);
      v76 = *(_QWORD *)(W32GetUserSessionState(v74, v73, v75) + 3104);
      v77 = *(void **)(v76 + 80);
      v80 = W32GetUserSessionState(v76, v78, v79);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)(v80 + 19256),
        v77,
        (void (*)(void *))lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_,
        0LL);
      if ( (unsigned int)IsRemoteConnection(v81) )
      {
        v85 = W32GetUserSessionState(v83, v82, v84);
        CBaseInput::HandleTSRequest(*(CBaseInput **)(v85 + 3096), 0, v86);
      }
      PerfomInitialReadInputExplicitly(0LL);
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
        && ShouldKSTInitializeHidSensor() )
      {
        PerfomInitialReadInputExplicitly(2LL);
      }
      v26 = 1;
    }
    else
    {
      v26 = 0;
      KSTIOCPDispatcher_Destroy();
      v30 = W32GetUserSessionState(v28, v27, v29);
      CKernelSensorThread::DestroyEventHandles(*(CKernelSensorThread **)(v30 + 3104));
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v33 = 0;
      }
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
        LOBYTE(v36) = v33;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v34,
          *(_QWORD *)(v35 + 69136),
          2,
          2,
          13,
          (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
      }
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v31) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v31) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( (_BYTE)v31 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v4,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        14,
        (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
    return v26;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v12);
      LOBYTE(v16) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v14,
        *(_QWORD *)(v15 + 69136),
        2,
        2,
        11,
        (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( (_BYTE)v10 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v4,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        12,
        (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
    return 0LL;
  }
}
