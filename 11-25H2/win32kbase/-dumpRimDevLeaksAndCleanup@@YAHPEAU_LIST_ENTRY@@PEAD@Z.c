/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401D62EC
 * Callers:
 *     RIMUnInitialize @ 0x1401D6C30 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400B4D10 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  struct _LIST_ENTRY *v9; // rbx
  char v10; // si
  bool v11; // bp
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // si
  bool v16; // bp
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  struct _LIST_ENTRY *Blink; // rsi
  __int64 v21; // rbx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      2,
      1,
      12,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
      (__int64)"RIMDevObj leaks");
  }
  do
  {
    v9 = Flink - 1;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19336),
        2,
        1,
        13,
        (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
        (_BYTE)Flink - 16);
    }
    Flink = Flink->Flink;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 19336),
        2,
        1,
        14,
        (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids);
    }
    if ( BYTE1(v9->Blink) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 162);
    Blink = v9[24].Blink;
    v21 = (unsigned __int64)&v9[4].Blink & -(__int64)(v9 != 0LL);
    if ( !Blink )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 170);
    RIMFreeSpecificDevWorker((__int64)Blink, v21);
    ObfDereferenceObject(Blink);
  }
  while ( Flink != a1 );
  return 1LL;
}
