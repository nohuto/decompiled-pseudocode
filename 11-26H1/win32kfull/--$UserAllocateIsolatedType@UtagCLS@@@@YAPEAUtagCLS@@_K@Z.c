/*
 * XREFs of ??$UserAllocateIsolatedType@UtagCLS@@@@YAPEAUtagCLS@@_K@Z @ 0x1401503B8
 * Callers:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x140150318 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400D3354 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagCLS>(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 *v4; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19832);
  result = 0LL;
  v4 = *(__int64 **)(v2 + 8);
  if ( v4 )
    return NSInstrumentation::CTypeIsolation<36864,144>::Allocate(v4);
  return result;
}
