/*
 * XREFs of rimDeviceResetApc @ 0x140033010
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverDeviceResetRequest @ 0x140032DCC (RIMDeliverDeviceResetRequest.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ?CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400332B0 (-CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall rimDeviceResetApc(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // edx
  __int64 v6; // rdx
  bool v7; // di
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  _BYTE v16[256]; // [rsp+50h] [rbp-108h] BYREF
  char v17; // [rsp+160h] [rbp+8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v17, v5);
  InputTraceLogging::RIM::CompleteDeviceResetRequest((const struct RIMDEV *)ApcContext);
  v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      12,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v12 = *((_QWORD *)ApcContext + 40);
    RIMLockExclusive(v12 + 104);
    v13 = *((_DWORD *)ApcContext + 42);
    if ( (v13 & 0x200000) == 0 )
    {
      *((_DWORD *)ApcContext + 42) = v13 | 0x200000;
      ZwSetEvent(*(HANDLE *)(v12 + 344), 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext);
    RIMUnlockExclusive(v12 + 104, v14, v15);
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v17);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
}
