/*
 * XREFs of BapdpKsrCompleteScenario @ 0x1406CE5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenario(int a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a1 & 0x1000000;
  if ( (_DWORD)v2 && (a2 & 0x1000000) == 0 && *(_QWORD *)&ExpSysDbgLock.SchedulerApc.Type )
    return guard_dispatch_icall_no_overrides(v2, a2);
  else
    return 3221225659LL;
}
