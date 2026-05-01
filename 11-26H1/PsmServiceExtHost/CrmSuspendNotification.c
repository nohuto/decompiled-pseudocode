/*
 * XREFs of CrmSuspendNotification @ 0x1800672E0
 * Callers:
 *     PsmCrmSuspendNotification @ 0x1800672D0 (PsmCrmSuspendNotification.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmSuspendNotification(int a1)
{
  unsigned int *v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v1 = (unsigned int *)qword_1800E3820;
  if ( qword_1800E3820 )
    CempLockAcquireExclusive((__int64)qword_1800E3820 + 8);
  result = RtlReleaseSRWLockShared(&CrmGlobals);
  if ( v1 )
  {
    CrmStateMonitorStateSet(v1, &v3, 4uLL, 1);
    v1[4] = 0;
    return RtlReleaseSRWLockExclusive(v1 + 2);
  }
  return result;
}
