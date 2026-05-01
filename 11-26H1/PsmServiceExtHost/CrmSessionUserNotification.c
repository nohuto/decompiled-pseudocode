/*
 * XREFs of CrmSessionUserNotification @ 0x18001D49C
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x18001D490 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     CrmStateMonitorTimeSinceLogonReset @ 0x18001D3FC (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmGlobalsRundown @ 0x18001DCB4 (CrmGlobalsRundown.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmSessionUserNotification(int a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdi

  if ( a1 == 6 )
    return CrmGlobalsRundown();
  if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(&CrmGlobals);
    v2 = qword_1800E3830;
    if ( qword_1800E3830 )
      CempLockAcquireExclusive((char *)qword_1800E3830 + 8);
    result = RtlReleaseSRWLockShared(&CrmGlobals);
    if ( v2 )
    {
      CrmStateMonitorTimeSinceLogonReset((__int64)v2);
      v2[4] = 0;
      return RtlReleaseSRWLockExclusive(v2 + 2);
    }
  }
  return result;
}
