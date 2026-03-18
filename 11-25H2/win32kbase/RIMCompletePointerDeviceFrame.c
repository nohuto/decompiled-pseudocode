/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1400315B8
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400303D4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimFindAndReclaimHoldingFrame @ 0x14002EEF0 (rimFindAndReclaimHoldingFrame.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x14002F13C (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400CFC20 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     rimIsWakeablePointerFrame @ 0x140116C6C (rimIsWakeablePointerFrame.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140118F68 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1401821AC (rimCountContactsToDeliverWithFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140182330 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140182660 (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x140183590 (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140183FB4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  void *v6; // r9
  __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned int v10; // r13d
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdx
  char v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rdx
  char v21; // di
  bool v22; // si
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  char v27; // bl
  _UNKNOWN **v28; // r8
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int16 v34; // [rsp+30h] [rbp-78h]
  _DWORD v35[18]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+10h] BYREF
  int v37; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
  v6 = &WPP_f2670351d78231c653e591cd52a969fd_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      52,
      (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids);
  v7 = *(_QWORD *)(v4 + 456);
  v8 = 0;
  LODWORD(v36) = 0;
  v35[0] = 0;
  v9 = *(_QWORD *)(v7 + 768);
  if ( v9 && *(_DWORD *)(v9 + 36) )
  {
    v37 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 930LL);
  }
  rimCountContactsToDeliverWithFrame(v7, v35, &v36, v6);
  v10 = v35[0];
  if ( !v35[0] )
  {
    if ( (unsigned __int8)rimIsWakeablePointerFrame(v7) )
      rimQueueUpdateInputGlolbalsAsyncWorkItem(a1);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        55,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids);
    }
    LOBYTE(v11) = v36;
    goto LABEL_45;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(a1, v7);
  v11 = v36;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(a1, v4, v10, (unsigned int)v36) )
  {
    LODWORD(v36) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 964LL);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    v34 = 54;
    goto LABEL_27;
  }
  v36 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v36) )
  {
    LODWORD(v36) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 957LL);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
    v34 = 53;
LABEL_27:
    LOBYTE(v18) = v15;
    LOBYTE(v17) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v18,
      *(_QWORD *)(v16 + 19336),
      4,
      1,
      v34,
      (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids);
LABEL_45:
    rimFindAndReclaimHoldingFrame((__int64)a1, v4);
    goto LABEL_46;
  }
  v12 = v36;
  *(_DWORD *)(v36 + 196) = v11;
  if ( (*(_DWORD *)(v4 + 168) & 0x2000) != 0 )
  {
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(v4 + 24);
    *(_DWORD *)(v12 + 192) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame(v4, v12, v3);
  rimProcessCompleteFrame(a1, v4, v12);
  v8 = 1;
LABEL_46:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v27 = 0;
  }
  v28 = &WPP_RECORDER_INITIALIZED;
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
    LOBYTE(v31) = v29;
    LOBYTE(v32) = v27;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v31,
      *(_QWORD *)(v30 + 19336),
      4,
      1,
      56,
      (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
      v8,
      v11,
      v10);
    v28 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v26) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v26) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v28) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v28) = 0;
  }
  if ( (_BYTE)v26 || (_BYTE)v28 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      (_DWORD)v28,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      57,
      (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids);
  return v8;
}
