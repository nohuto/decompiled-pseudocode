/*
 * XREFs of RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x14020B058 (W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 *     W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x14020B1D4 (W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1400475D0 (RIMAllocateAsyncInputWorkItem.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x14008FD9C (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x140205800 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMDeviceNotifyUsingAsyncInputWork(__int64 a1, __int64 a2)
{
  struct _KTHREAD **v4; // r14
  unsigned int v5; // r12d
  char v6; // si
  bool v7; // r15
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char **v14; // rax
  int v15; // edx
  int v16; // r8d
  char v17; // r15
  bool v18; // r13
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  char v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  _BYTE v28[256]; // [rsp+70h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v28);
  v4 = *(struct _KTHREAD ***)(a2 + 320);
  v5 = 0;
  if ( v4[5] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 544LL);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(a2, *(unsigned int *)(a2 + 48));
    UserSessionState = W32GetUserSessionState(v9, v8, v10);
    LOBYTE(v12) = v7;
    LOBYTE(v13) = v6;
    WPP_RECORDER_AND_TRACE_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 3), v13, v12, *(_QWORD *)(UserSessionState + 19368));
  }
  v14 = (char **)RIMAllocateAsyncInputWorkItem(
                   v4,
                   *(_QWORD **)(a2 + 32),
                   *(_DWORD *)(*(_QWORD *)(a2 + 32) + 120LL),
                   0LL,
                   (_OWORD *)(a1 + 4),
                   0LL,
                   0,
                   1);
  if ( v14 )
  {
    RIMQueueAndSignalAsyncWorkItem((struct RawInputManagerObject *)v4, v14);
  }
  else
  {
    v5 = -1073741801;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v17 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(*((_QWORD *)WPP_GLOBAL_Control + 3), v21, v20, *(_QWORD *)(v19 + 19368), 4);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v22 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v22;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 19368),
      4,
      1,
      24,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v5);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v28);
  return v5;
}
