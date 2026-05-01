/*
 * XREFs of CrmStateMonitorTimeSinceLogonReset @ 0x18001D3FC
 * Callers:
 *     CrmSessionUserNotification @ 0x18001D49C (CrmSessionUserNotification.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonReset(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  TpSetTimer(*(_QWORD *)(a1 + 72), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(a1 + 72), 1LL);
  v4 = 0LL;
  CrmStateMonitorStateSet(a1, &v4, 8LL);
  v2 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 64) = 30LL;
  v5 = -300000000LL;
  return TpSetTimer(v2, &v5, 0LL, 0LL);
}
