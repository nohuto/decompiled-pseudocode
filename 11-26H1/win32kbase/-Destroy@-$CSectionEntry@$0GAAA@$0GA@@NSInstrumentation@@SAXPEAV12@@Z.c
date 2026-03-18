/*
 * XREFs of ?Destroy@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015AEF4
 * Callers:
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A414 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ @ 0x14015AE6C (--1-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x14015AF20 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<24576,96>::Destroy(PVOID P)
{
  NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>();
  ExFreePoolWithTag(P, 0);
}
