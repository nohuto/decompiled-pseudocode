/*
 * XREFs of ??$UserAllocateIsolatedType@UtagSMWP@@@@YAPEAUtagSMWP@@_K@Z @ 0x1400B9D90
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400B9DF4 (-Allocate@-$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagSMWP>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 48) )
  {
    if ( BugCheckParameter4 > 0x30 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x30uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<12288,48>::Allocate();
  }
  return result;
}
