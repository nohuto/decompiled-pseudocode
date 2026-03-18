/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140329AA0
 * Callers:
 *     RfontIsolationInitialize @ 0x140329AD0 (RfontIsolationInitialize.c)
 *     RfontIsolationUninitialize @ 0x140329B80 (RfontIsolationUninitialize.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA@XZ @ 0x140329A18 (--1-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<237568,928>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<237568,928>::~CTypeIsolation<237568,928>((__int64)P);
  ExFreePoolWithTag(P, 0);
}
