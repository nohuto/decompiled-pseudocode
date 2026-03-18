/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159ED8
 * Callers:
 *     ?Destroy@UserTypeIsolationAllocators@@QEAAXXZ @ 0x1401B3E38 (-Destroy@UserTypeIsolationAllocators@@QEAAXXZ.c)
 *     ?Initialize@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401B8744 (-Initialize@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ @ 0x14015AE6C (--1-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<24576,96>::~CTypeIsolation<24576,96>();
  ExFreePoolWithTag(P, 0);
}
