/*
 * XREFs of ??1?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA@XZ @ 0x1401B6F58
 * Callers:
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14019B5EC (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x140159F04 (--1-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLookAsideTypeIsolation<180224,704>::~CLookAsideTypeIsolation<180224,704>(
        __int64 a1)
{
  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 48));
  NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>(a1);
}
