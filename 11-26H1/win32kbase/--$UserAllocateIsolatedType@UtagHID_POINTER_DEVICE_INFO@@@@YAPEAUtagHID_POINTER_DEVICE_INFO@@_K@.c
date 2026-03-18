/*
 * XREFs of ??$UserAllocateIsolatedType@UtagHID_POINTER_DEVICE_INFO@@@@YAPEAUtagHID_POINTER_DEVICE_INFO@@_K@Z @ 0x1401DC67C
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401DD4A0 (-Allocate@-$CTypeIsolation@$0FBAAA@$0FBA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<tagHID_POINTER_DEVICE_INFO>(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(BugCheckParameter4, a2, a3) + 19832);
  result = 0LL;
  if ( *(_QWORD *)(v4 + 144) )
  {
    if ( BugCheckParameter4 > 0x510 )
      KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0x510uLL, BugCheckParameter4);
    return NSInstrumentation::CTypeIsolation<331776,1296>::Allocate();
  }
  return result;
}
