/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1400F2168
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFC80 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C3C (RIMCmAddContactSuppressionReasons.c)
 */

__int64 __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2)
{
  int v3; // r8d
  __int64 result; // rax
  __int64 v5; // rdx
  bool v6; // di
  bool v7; // si
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  __int16 v12; // [rsp+30h] [rbp-28h]
  unsigned int v13; // [rsp+40h] [rbp-18h]

  v3 = a2[611] & 2;
  if ( (a2[611] & 0x1000000) == 0 || v3 )
  {
    result = a2[2];
    if ( (result & 0x40) != 0 && v3 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 0x40u);
      v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *a2;
        v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 19336);
        v12 = 44;
        goto LABEL_22;
      }
    }
  }
  else
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 64LL);
    v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *a2;
      v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v5) + 19336);
      v12 = 43;
LABEL_22:
      LOBYTE(v9) = v7;
      LOBYTE(v8) = v6;
      return WPP_RECORDER_AND_TRACE_SF_d(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v8,
               v9,
               v10,
               4,
               1,
               v12,
               (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
               v13);
    }
  }
  return result;
}
