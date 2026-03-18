/*
 * XREFs of ??$UserAllocateIsolatedType@UtagKBDFILE@@@@YAPEAUtagKBDFILE@@_K@Z @ 0x1401DC6E0
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD03C (-Allocate@-$CTypeIsolation@$0BAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagKBDFILE>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 112) )
  {
    if ( BugCheckParameter4 > 0x80 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x80uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<4096,128>::Allocate();
  }
  return result;
}
