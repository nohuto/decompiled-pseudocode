/*
 * XREFs of ??$UserAllocateIsolatedType@UtagWND@@@@YAPEAUtagWND@@_K@Z @ 0x1400B9CC4
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14016C890 (-Allocate@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagWND>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 24) )
  {
    if ( BugCheckParameter4 > 0x1A0 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x1A0uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<106496,416>::Allocate();
  }
  return result;
}
