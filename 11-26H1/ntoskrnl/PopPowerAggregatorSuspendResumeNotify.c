/*
 * XREFs of PopPowerAggregatorSuspendResumeNotify @ 0x14077C994
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409F2CF8 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPowerAggregatorSuspendResumeNotify(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  int v6; // [rsp+30h] [rbp-18h]

  result = qword_140E677C8;
  v3 = 0LL;
  v4 = a1;
  v6 = -1;
  if ( (_BYTE)a2 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( qword_140E677C8 )
      guard_dispatch_icall_no_overrides((__int64)&v3, a2);
    result = qword_140E677C8;
    v5 = 2;
  }
  if ( result )
    return guard_dispatch_icall_no_overrides((__int64)&v3, a2);
  return result;
}
