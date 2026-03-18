/*
 * XREFs of ?Destroy@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14024218C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401209EC (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140157328 (-Create@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA@XZ @ 0x140241F04 (--1-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA@XZ @ 0x140241EA4 (--1-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<180224,704>::Destroy(_QWORD *P)
{
  NSInstrumentation::CSectionEntry<180224,704>::~CSectionEntry<180224,704>(P);
  ExFreePoolWithTag(P, 0);
}
