/*
 * XREFs of ??$UserFreeIsolatedType@UtagCLS@@@@YAXPEAUtagCLS@@@Z @ 0x1401502DC
 * Callers:
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x14014FC0C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x140150318 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400D207C (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall UserFreeIsolatedType<tagCLS>(void *a1, __int64 a2)
{
  __int64 *v3; // rcx

  v3 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19832) + 8LL);
  if ( v3 )
    NSInstrumentation::CTypeIsolation<36864,144>::Free(v3, a1);
}
