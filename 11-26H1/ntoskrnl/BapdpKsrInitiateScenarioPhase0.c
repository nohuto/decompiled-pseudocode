/*
 * XREFs of BapdpKsrInitiateScenarioPhase0 @ 0x1406CE650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrInitiateScenarioPhase0(int a1, int a2)
{
  unsigned int v2; // eax

  v2 = a2 & 0x1000000;
  if ( (a1 & 0x1000000) != 0 || !v2 )
    return 3221225485LL;
  if ( ExpSysDbgLock.SavedApcState.ApcListHead[1].Blink )
    return guard_dispatch_icall_no_overrides(v2, 0LL);
  return 3221225659LL;
}
