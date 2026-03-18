/*
 * XREFs of ??$UserAllocateIsolatedType@UtagMONITOR@@@@YAPEAUtagMONITOR@@_K@Z @ 0x1401DC7A8
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD328 (-Allocate@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagMONITOR>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 96) )
  {
    if ( BugCheckParameter4 > 0xA0 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0xA0uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<20480,160>::Allocate();
  }
  return result;
}
