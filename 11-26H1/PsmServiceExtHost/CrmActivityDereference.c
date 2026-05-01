/*
 * XREFs of CrmActivityDereference @ 0x180020BC8
 * Callers:
 *     CrmRegistrationRemoveActivity @ 0x1800206C8 (CrmRegistrationRemoveActivity.c)
 *     CrmSrvActivityFree @ 0x180020838 (CrmSrvActivityFree.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18002D748 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18002E5E0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x180032000 (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmRegistrationCreateActivity @ 0x180033DFC (CrmRegistrationCreateActivity.c)
 *     CrmSrvActivityAllocate @ 0x180034360 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180034760 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 */

char __fastcall CrmActivityDereference(volatile signed __int64 *P)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64(P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CrmActivityCleanup(P);
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)P);
  }
  return v6;
}
