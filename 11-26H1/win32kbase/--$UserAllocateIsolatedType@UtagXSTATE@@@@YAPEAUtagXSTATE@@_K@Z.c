/*
 * XREFs of ??$UserAllocateIsolatedType@UtagXSTATE@@@@YAPEAUtagXSTATE@@_K@Z @ 0x1401DC86C
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140180E14 (-Allocate@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagXSTATE>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 *v6; // rcx

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  v6 = *(__int64 **)(v4 + 88);
  if ( v6 )
  {
    if ( BugCheckParameter4 > 0x50 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x50uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<20480,80>::Allocate(v6);
  }
  return result;
}
