/*
 * XREFs of CrmSrvActivityWindowClosedReasonSubscribe @ 0x18002E5E0
 * Callers:
 *     CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x18002E5C0 (CrmRpcSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmpInProcActivityWindowClosedReasonSubscribe @ 0x180074230 (CrmpInProcActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18001D53C (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmLogSrvActivityWindowClosedReasonSubscribeStop @ 0x18002E6D8 (CrmLogSrvActivityWindowClosedReasonSubscribeStop.c)
 *     CrmLogSrvActivityWindowClosedReasonSubscribeStart @ 0x18002E7E4 (CrmLogSrvActivityWindowClosedReasonSubscribeStart.c)
 *     CrmRegistrationFindActivity @ 0x18002E880 (CrmRegistrationFindActivity.c)
 *     RmpWnfCreateStateNameForClient @ 0x18003056C (RmpWnfCreateStateNameForClient.c)
 */

__int64 __fastcall CrmSrvActivityWindowClosedReasonSubscribe(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  _DWORD *Activity; // rax
  volatile signed __int64 *v8; // rdi
  int StateNameForClient; // ebx
  _QWORD *v11; // r14

  v6 = 1601;
  CrmLogSrvActivityWindowClosedReasonSubscribeStart();
  CempLockAcquireExclusive(a2);
  Activity = (_DWORD *)CrmRegistrationFindActivity(a2, a1);
  v8 = (volatile signed __int64 *)Activity;
  if ( !Activity || (v6 = Activity[16], v11 = Activity + 38, Activity[38]) || Activity[39] )
  {
    StateNameForClient = -1073741811;
  }
  else
  {
    StateNameForClient = RmpWnfCreateStateNameForClient((PSID)(a2 + 72));
    if ( StateNameForClient >= 0 )
    {
      CrmRegistrationNotifyWindowClosedReasonChange(a2, (__int64)v8);
      *a3 = *v11;
    }
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v8 )
    CrmActivityDereference(v8);
  CrmLogSrvActivityWindowClosedReasonSubscribeStop(a2, v6, a1, (unsigned int)StateNameForClient);
  return (unsigned int)StateNameForClient;
}
