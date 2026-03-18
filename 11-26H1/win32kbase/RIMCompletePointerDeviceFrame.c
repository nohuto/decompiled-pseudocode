/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x140072D40
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140070FE4 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1400732B8 (rimCountContactsToDeliverWithFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimStorePointersInHoldingFrame @ 0x140073934 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessCompleteFrame @ 0x140074484 (rimProcessCompleteFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140074598 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x140074980 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimFindAndReclaimHoldingFrame @ 0x140077EDC (rimFindAndReclaimHoldingFrame.c)
 *     rimIsWakeablePointerFrame @ 0x14007B3D8 (rimIsWakeablePointerFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140154200 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rbx
  void *v6; // r9
  __int64 v7; // rdi
  unsigned int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  __int64 v12; // rdi
  int v13; // edx
  char v14; // bl
  _UNKNOWN **v15; // r8
  char v16; // di
  __int64 v17; // rax
  int v19; // edx
  int v20; // r8d
  char v21; // di
  bool v22; // si
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // edx
  int v27; // r8d
  char v28; // di
  bool v29; // si
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  int v33; // edx
  int v34; // r8d
  __int16 v35; // [rsp+30h] [rbp-78h]
  _DWORD v36[18]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+10h] BYREF
  int v38; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  v6 = &WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      52,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  v7 = *(_QWORD *)(v4 + 456);
  v8 = 0;
  LODWORD(v37) = 0;
  v36[0] = 0;
  v9 = *(_QWORD *)(v7 + 768);
  if ( v9 && *(_DWORD *)(v9 + 36) )
  {
    v38 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 922LL);
  }
  rimCountContactsToDeliverWithFrame(v7, v36, &v37, v6);
  v10 = v36[0];
  if ( !v36[0] )
  {
    if ( (unsigned __int8)rimIsWakeablePointerFrame(v7) )
      rimQueueUpdateInputGlolbalsAsyncWorkItem(a1);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        55,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
    }
    v11 = v37;
    goto LABEL_47;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(a1, v7);
  v11 = v37;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(a1, v4, v10, (unsigned int)v37) )
  {
    LODWORD(v37) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 956LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v28 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v26, v27);
    v35 = 54;
    goto LABEL_56;
  }
  v37 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v37) )
  {
    LODWORD(v37) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 949LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v28 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34);
    v35 = 53;
LABEL_56:
    LOBYTE(v32) = v29;
    LOBYTE(v31) = v28;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v32,
      *(_QWORD *)(v30 + 19368),
      4,
      1,
      v35,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
LABEL_47:
    rimFindAndReclaimHoldingFrame(a1, v4, v11, v3);
    goto LABEL_15;
  }
  v12 = v37;
  *(_DWORD *)(v37 + 196) = v11;
  if ( (*(_DWORD *)(v4 + 168) & 0x2000) != 0 )
  {
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(v4 + 24);
    *(_DWORD *)(v12 + 192) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame(v4, v12, v3);
  rimProcessCompleteFrame(a1, v4, v12);
  v8 = 1;
LABEL_15:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v14 = 0;
  }
  v15 = &WPP_RECORDER_INITIALIZED;
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, (unsigned int)&WPP_RECORDER_INITIALIZED);
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v16,
      *(_QWORD *)(v17 + 19368),
      4u,
      1u,
      0x38u,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
      v8,
      v11,
      v10);
    v15 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v15) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v13 || (_BYTE)v15 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      (_DWORD)v15,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      57,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  return v8;
}
