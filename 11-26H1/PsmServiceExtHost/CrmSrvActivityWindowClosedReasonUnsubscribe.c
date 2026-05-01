/*
 * XREFs of CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18002D748
 * Callers:
 *     CrmpInProcActivityWindowClosedReasonUnsubscribe @ 0x18002D730 (CrmpInProcActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmLogSrvActivityWindowClosedReasonUnsubscribeStart @ 0x18002D928 (CrmLogSrvActivityWindowClosedReasonUnsubscribeStart.c)
 *     CrmRegistrationFindActivity @ 0x18002E880 (CrmRegistrationFindActivity.c)
 */

__int64 __fastcall CrmSrvActivityWindowClosedReasonUnsubscribe(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _DWORD *Activity; // rax
  volatile signed __int64 *v6; // rbx
  _QWORD *v7; // rdi
  unsigned int v8; // edi

  v4 = 1601;
  CrmLogSrvActivityWindowClosedReasonUnsubscribeStart();
  CempLockAcquireExclusive(a2);
  Activity = (_DWORD *)CrmRegistrationFindActivity(a2, a1);
  v6 = (volatile signed __int64 *)Activity;
  if ( Activity && ((v4 = Activity[16], v7 = Activity + 38, Activity[38]) || Activity[39]) )
  {
    NtDeleteWnfStateName(Activity + 38);
    *v7 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v6 )
    CrmActivityDereference(v6);
  return CrmLogSrvActivityWindowClosedReasonUnsubscribeStop(a2, v4, a1, v8);
}
