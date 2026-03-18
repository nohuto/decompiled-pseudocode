/*
 * XREFs of ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x14014C58C
 * Callers:
 *     RIMUnInitialize @ 0x1401D6C30 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400B4D10 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

__int64 __fastcall dumpLeaks(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  bool v5; // si
  bool v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // si
  bool v11; // bp
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      10,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
      (__int64)a2);
  }
  do
  {
    v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19336),
        4,
        1,
        11,
        (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
        (_BYTE)Flink - 16);
    }
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  return 1LL;
}
