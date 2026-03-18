/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x14012C518
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     RIMIsPointerUpTransition @ 0x14012C89C (RIMIsPointerUpTransition.c)
 *     EtwTraceTouchPadConfidenceCleared @ 0x14012C8C0 (EtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2, int a3)
{
  __int64 result; // rax
  unsigned int *v7; // rbx
  bool v8; // bp
  bool v9; // r14
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  unsigned int IsContactDeliveringPointerData; // eax
  unsigned int v14; // eax
  __int16 v15; // [rsp+30h] [rbp-28h]
  unsigned int v16; // [rsp+40h] [rbp-18h]

  if ( a3 )
  {
    v7 = a2 + 611;
    goto LABEL_8;
  }
  result = *(unsigned int *)(a1 + 368);
  if ( (result & 4) != 0 )
  {
    v7 = a2 + 611;
    if ( (a2[611] & 0x4000) == 0 )
    {
LABEL_8:
      if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData((__int64)a2);
        v14 = RIMIsPointerUpTransition(*v7, a2[671], IsContactDeliveringPointerData);
        EtwTraceTouchPadConfidenceCleared(*a2, v14);
      }
      if ( a3 )
      {
        v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_19;
        v16 = *a2;
        v12 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3) + 19368);
        v15 = 41;
      }
      else
      {
        v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_19;
        v16 = *a2;
        v12 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3) + 19368);
        v15 = 42;
      }
      LOBYTE(v11) = v9;
      LOBYTE(v10) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v11,
        v12,
        4,
        1,
        v15,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v16);
LABEL_19:
      result = RIMCmAddContactSuppressionReasons(a1, a2, 16LL);
      a2[611] |= 0x8000u;
    }
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = a2[2];
    if ( (result & 0x10) != 0 )
    {
      result = a2[611] & 0x1004000;
      if ( (_DWORD)result == 16793600 )
        return RIMCmRemoveContactSuppressionReasons(a1, a2, 0x10u);
    }
  }
  return result;
}
