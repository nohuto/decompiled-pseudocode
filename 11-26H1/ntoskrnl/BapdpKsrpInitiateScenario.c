/*
 * XREFs of BapdpKsrpInitiateScenario @ 0x1406CE6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrpInitiateScenario(int a1, int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // eax

  v3 = 0x1000000LL;
  v4 = a2 & 0x1000000;
  if ( (a1 & 0x1000000) != 0 || !v4 )
    return 3221225485LL;
  if ( !ExpSysDbgLock.SavedApcState.ApcListHead[1].Blink )
    return 3221225659LL;
  LOBYTE(v3) = 1;
  return guard_dispatch_icall_no_overrides(v4, v3);
}
