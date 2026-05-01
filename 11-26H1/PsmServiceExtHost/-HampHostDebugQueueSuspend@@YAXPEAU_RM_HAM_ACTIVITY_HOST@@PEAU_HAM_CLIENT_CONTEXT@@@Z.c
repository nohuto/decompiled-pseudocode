/*
 * XREFs of ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180078D90
 * Callers:
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007E394 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003F3F8 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 */

void __fastcall HampHostDebugQueueSuspend(struct _RM_HAM_ACTIVITY_HOST *a1, struct _HAM_CLIENT_CONTEXT *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  HampHostAcquireLockExclusiveEx(a1, 0);
  v4 = (__int64 *)((char *)a1 + 664);
  while ( (*v4 & 0x10000000000000LL) != 0 )
  {
    v6 = *v4;
    HampHostReleaseLockExclusive(a1);
    RtlWaitOnAddress((char *)a1 + 664, &v6, 8LL);
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *v4 |= 0x10000000000000uLL;
  HampHostIssueStopRequests((__int64)a1, 1u, 7u, 0, 5u, 0, 0, 0LL, v5, (__int64)a2);
  HampHostCheckQueueStateWorker(a1, 0);
  HampHostReleaseLockExclusive(a1);
}
