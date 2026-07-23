/*
 * XREFs of HalpTimerQueryHostPerformanceCounter @ 0x14057A130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerQueryHostPerformanceCounter(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !HalpPerformanceCounter || *(_DWORD *)(HalpPerformanceCounter + 228) != 8 || !qword_140FBB550 || !qword_140FBB3E8 )
    return 3221225659LL;
  v3 = guard_dispatch_icall_no_overrides(0LL, a2);
  *a1 = guard_dispatch_icall_no_overrides(v5, v4) + v3;
  return 0LL;
}
