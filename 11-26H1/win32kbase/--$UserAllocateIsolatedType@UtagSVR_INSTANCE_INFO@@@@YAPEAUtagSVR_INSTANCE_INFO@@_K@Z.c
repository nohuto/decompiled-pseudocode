/*
 * XREFs of ??$UserAllocateIsolatedType@UtagSVR_INSTANCE_INFO@@@@YAPEAUtagSVR_INSTANCE_INFO@@_K@Z @ 0x1401DC80C
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DCEC8 (-Allocate@-$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagSVR_INSTANCE_INFO>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 72) )
  {
    if ( BugCheckParameter4 > 0x40 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x40uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<4096,64>::Allocate();
  }
  return result;
}
