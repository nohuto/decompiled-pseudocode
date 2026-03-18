/*
 * XREFs of ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015B470
 * Callers:
 *     ?Create@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV?$CTypeIsolation@$0JAAA@$0JA@@2@XZ @ 0x140241F8C (-Create@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV-$CTypeIsolation@$0JAAA@.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SAXPEAPEAE@Z @ 0x1402421B8 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 * Callees:
 *     ??1?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA@XZ @ 0x14019C270 (--1-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(PVOID P)
{
  NSInstrumentation::CLookAsideTypeIsolation<36864,144>::~CLookAsideTypeIsolation<36864,144>();
  ExFreePoolWithTag(P, 0);
}
