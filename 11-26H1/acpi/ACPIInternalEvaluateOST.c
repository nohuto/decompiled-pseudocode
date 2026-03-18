/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1400621FC
 * Callers:
 *     ACPIRootEvent @ 0x14004A8E0 (ACPIRootEvent.c)
 *     ACPICheckModuleStarted @ 0x140055694 (ACPICheckModuleStarted.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1400673B0 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIInitShutdownInProgress @ 0x140068B2C (ACPIInitShutdownInProgress.c)
 *     ACPINotifyOsShutdownWorker @ 0x140068C70 (ACPINotifyOsShutdownWorker.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x140069170 (AcpiShutdownNotificationTimerWorkItem.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, int a2, int a3)
{
  int v6; // esi
  __int64 *v7; // rbp
  int v8; // ebx
  __int64 v9; // r8
  const char *v10; // rax
  const char *v11; // rdx
  __int64 v12; // r8
  const char *v13; // rax
  const char *v14; // rdx
  _QWORD v16[16]; // [rsp+50h] [rbp-A8h] BYREF

  v6 = -1073741823;
  v7 = AMLIGetNamedChild(*(__int64 **)(a1 + 760), 1414745951);
  if ( v7 )
  {
    memset(v16, 0, 0x78uLL);
    LODWORD(v16[2]) = a2;
    WORD1(v16[0]) = 1;
    WORD1(v16[5]) = 1;
    LODWORD(v16[7]) = a3;
    WORD1(v16[10]) = 2;
    v16[14] = 0LL;
    v8 = AMLIAsyncEvalObject(v7, 0LL, 3, (__int64)v16, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v7);
    v6 = 0;
    if ( v8 != 259 )
      v6 = v8;
    if ( v6 < 0 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = byte_140075A82;
      v11 = byte_140075A82;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xFu,
          (__int64)&WPP_d6bb3916a2893b5fc21aa06e27a6e069_Traceguids,
          v6,
          a1,
          v10,
          v11);
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = byte_140075A82;
    v14 = byte_140075A82;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(a1 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x10u,
        (__int64)&WPP_d6bb3916a2893b5fc21aa06e27a6e069_Traceguids,
        a1,
        v13,
        v14);
  }
  return (unsigned int)v6;
}
