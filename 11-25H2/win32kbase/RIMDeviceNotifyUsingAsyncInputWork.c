/*
 * XREFs of RIMDeviceNotifyUsingAsyncInputWork @ 0x1401F0720
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401EC6E4 (W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 *     W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401EC84C (W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x140113DD0 (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E4E20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 */

__int64 __fastcall RIMDeviceNotifyUsingAsyncInputWork(__int64 a1, __int64 a2)
{
  struct _KTHREAD **v4; // r14
  unsigned int v5; // r12d
  char v6; // si
  bool v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct RIMAsyncWorkItem *v13; // rax
  __int64 v14; // rdx
  char v15; // r15
  char v16; // r13
  __int64 v17; // rax
  char v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  int SourceString; // [rsp+28h] [rbp-170h]
  _BYTE v25[256]; // [rsp+70h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v25);
  v4 = *(struct _KTHREAD ***)(a2 + 320);
  v5 = 0;
  if ( v4[5] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 544);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(a2, *(_DWORD *)(a2 + 48));
    UserSessionState = W32GetUserSessionState(v9, v8);
    LOBYTE(v11) = v7;
    LOBYTE(v12) = v6;
    WPP_RECORDER_AND_TRACE_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, *(_QWORD *)(UserSessionState + 19336));
  }
  v13 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(
                                     v4,
                                     *(_QWORD **)(a2 + 32),
                                     *(_DWORD *)(*(_QWORD *)(a2 + 32) + 120LL),
                                     0LL,
                                     (_OWORD *)(a1 + 4),
                                     0LL,
                                     0,
                                     1);
  if ( v13 )
  {
    RIMQueueAndSignalAsyncWorkItem((struct RawInputManagerObject *)v4, v13);
  }
  else
  {
    v5 = -1073741801;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v16,
        *(_QWORD *)(v17 + 19336),
        4u,
        SourceString,
        0x17u,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v18 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v18;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 19336),
      4,
      1,
      24,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v5);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v25);
  return v5;
}
