/*
 * XREFs of BapdpKsrCompleteScenarioPhase0 @ 0x1406CE610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenarioPhase0(int a1, int a2)
{
  __int64 v2; // rdx

  v2 = a2 & 0x1000000;
  if ( (a1 & 0x1000000) == (_DWORD)v2 && ExpSysDbgLock.SavedApcState.Process )
    return guard_dispatch_icall_no_overrides((unsigned int)v2, v2);
  else
    return 3221225659LL;
}
