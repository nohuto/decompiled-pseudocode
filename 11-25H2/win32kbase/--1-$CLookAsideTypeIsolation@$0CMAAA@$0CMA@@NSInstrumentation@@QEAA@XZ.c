/*
 * XREFs of ??1?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA@XZ @ 0x140241E74
 * Callers:
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402420EC (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA@XZ @ 0x140241F04 (--1-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CLookAsideTypeIsolation<180224,704>::~CLookAsideTypeIsolation<180224,704>(
        __int64 a1)
{
  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 48));
  return NSInstrumentation::CTypeIsolation<180224,704>::~CTypeIsolation<180224,704>(a1);
}
