/*
 * XREFs of ??$UserAllocateIsolatedType@UtagMENU@@@@YAPEAUtagMENU@@_K@Z @ 0x140196E24
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140033954 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagMENU>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 *v6; // rcx

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  v6 = *(__int64 **)(v4 + 16);
  if ( v6 )
  {
    if ( BugCheckParameter4 > 0xA0 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0xA0uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<40960,160>::Allocate(v6);
  }
  return result;
}
