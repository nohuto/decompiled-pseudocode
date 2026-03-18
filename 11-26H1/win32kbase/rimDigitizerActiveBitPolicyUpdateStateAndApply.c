/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x140138B04
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 */

__int64 __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2)
{
  int v3; // r8d
  __int64 result; // rax
  int v5; // edx
  int v6; // r8d
  bool v7; // di
  bool v8; // si
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  int v12; // edx
  int v13; // r8d
  __int16 v14; // [rsp+30h] [rbp-28h]
  unsigned int v15; // [rsp+40h] [rbp-18h]

  v3 = a2[611] & 2;
  if ( (a2[611] & 0x1000000) == 0 || v3 )
  {
    result = a2[2];
    if ( (result & 0x40) != 0 && v3 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 0x40u);
      v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *a2;
        v11 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13) + 19368);
        v14 = 44;
        goto LABEL_22;
      }
    }
  }
  else
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 0x40u);
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *a2;
      v11 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6) + 19368);
      v14 = 43;
LABEL_22:
      LOBYTE(v10) = v8;
      LOBYTE(v9) = v7;
      return WPP_RECORDER_AND_TRACE_SF_d(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v9,
               v10,
               v11,
               4,
               1,
               v14,
               (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
               v15);
    }
  }
  return result;
}
