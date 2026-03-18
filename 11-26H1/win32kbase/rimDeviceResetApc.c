/*
 * XREFs of rimDeviceResetApc @ 0x1400599D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x140059B58 (-CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMDeliverDeviceResetRequest @ 0x14005B0E0 (RIMDeliverDeviceResetRequest.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ApiSetEnterEditionCrit @ 0x1401C50EC (ApiSetEnterEditionCrit.c)
 *     ApiSetLeaveEditionCrit @ 0x140228290 (ApiSetLeaveEditionCrit.c)
 */

void __fastcall rimDeviceResetApc(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // r14d
  int v6; // edx
  int v7; // ecx
  bool v8; // di
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rsi
  int v14; // eax
  _BYTE v15[256]; // [rsp+50h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  v5 = ApiSetEnterEditionCrit();
  InputTraceLogging::RIM::CompleteDeviceResetRequest((const struct RIMDEV *)ApcContext);
  v8 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    v7 = *((_DWORD *)WPP_GLOBAL_Control + 11);
    if ( (v7 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v8 = 1;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v7, v6, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      12,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v13 = *((_QWORD *)ApcContext + 40);
    RIMLockExclusive(v13 + 104);
    v14 = *((_DWORD *)ApcContext + 42);
    if ( (v14 & 0x200000) == 0 )
    {
      *((_DWORD *)ApcContext + 42) = v14 | 0x200000;
      ZwSetEvent(*(HANDLE *)(v13 + 344), 0LL);
    }
    RIMDeliverDeviceResetRequest(ApcContext);
    RIMUnlockExclusive(v13 + 104);
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  if ( !v5 )
    ApiSetLeaveEditionCrit();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
}
