/*
 * XREFs of ??$UserAllocateIsolatedType@UtagTIMER@@@@YAPEAUtagTIMER@@_K@Z @ 0x1400B98EC
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400B9AFC (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagTIMER>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 128) )
  {
    if ( BugCheckParameter4 > 0x90 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x90uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<36864,144>::Allocate();
  }
  return result;
}
