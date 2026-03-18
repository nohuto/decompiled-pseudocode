/*
 * XREFs of ??$UserAllocateIsolatedType@UtagDDECONV@@@@YAPEAUtagDDECONV@@_K@Z @ 0x1401DC61C
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD1B4 (-Allocate@-$CTypeIsolation@$0DAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagDDECONV>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 80) )
  {
    if ( BugCheckParameter4 > 0x60 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x60uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<12288,96>::Allocate();
  }
  return result;
}
