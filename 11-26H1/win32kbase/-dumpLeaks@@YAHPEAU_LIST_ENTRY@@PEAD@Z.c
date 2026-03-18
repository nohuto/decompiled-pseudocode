/*
 * XREFs of ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401893FC
 * Callers:
 *     RIMUnInitialize @ 0x1401C3BE0 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400777D0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall dumpLeaks(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  int v5; // r8d
  bool v6; // si
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // si
  bool v12; // bp
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  v5 = (int)WPP_GLOBAL_Control;
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      10,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
      (__int64)a2);
  }
  do
  {
    v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, v5);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 19368),
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
