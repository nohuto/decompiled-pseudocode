/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401FDC70
 * Callers:
 *     RIMUnInitialize @ 0x1401C3BE0 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400777D0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *Flink; // rdi
  CTouchProcessor **v6; // r8
  char v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct _LIST_ENTRY *v12; // rsi
  char v13; // bl
  bool v14; // bp
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  char v18; // bl
  bool v19; // bp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  struct _LIST_ENTRY *Blink; // rbx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  v6 = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(
                         (_DWORD)a1,
                         (unsigned int)&WPP_RECORDER_INITIALIZED,
                         (unsigned int)&WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      2,
      1,
      12,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
      (__int64)"RIMDevObj leaks");
    v6 = &WPP_GLOBAL_Control;
  }
  do
  {
    v12 = Flink - 1;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              (unsigned int)&WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19368),
        2,
        1,
        13,
        (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
        (_BYTE)Flink - 16);
      v6 = &WPP_GLOBAL_Control;
    }
    Flink = Flink->Flink;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              (unsigned int)&WPP_GLOBAL_Control);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 19368),
        2,
        1,
        14,
        (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids);
    }
    if ( BYTE1(v12->Blink) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 162);
    Blink = v12[24].Blink;
    if ( !Blink )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 170);
    RIMFreeSpecificDevWorker((__int64)Blink, (unsigned __int64)&v12[4].Blink & -(__int64)(v12 != 0LL), (__int64)v6, a4);
    ObfDereferenceObject(Blink);
    v6 = &WPP_GLOBAL_Control;
  }
  while ( Flink != a1 );
  return 1LL;
}
