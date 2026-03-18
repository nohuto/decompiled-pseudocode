/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x14012C12C
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 */

void __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3, int a4)
{
  unsigned int v6; // esi
  __int64 v7; // r8
  bool v8; // r14
  bool v9; // r15
  int v10; // ebx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // si
  bool v15; // r14
  int v16; // ebx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx

  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
      return;
    }
    v6 = 2;
    if ( (a2[611] & 6) == 2 )
    {
      v6 = 32;
    }
    else
    {
      v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = *a2;
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
        LOBYTE(v12) = v9;
        LOBYTE(v13) = v8;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 19368),
          4,
          1,
          45,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v10);
      }
    }
    v7 = v6;
    goto LABEL_11;
  }
  if ( a3 || a4 )
  {
    v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *a2;
      v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
      LOBYTE(v18) = v15;
      LOBYTE(v19) = v14;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 19368),
        4,
        1,
        46,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v16);
    }
    v7 = 2LL;
LABEL_11:
    RIMCmAddContactSuppressionReasons(a1, a2, v7);
    a2[611] |= 0x8000u;
  }
}
