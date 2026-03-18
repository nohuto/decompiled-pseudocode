/*
 * XREFs of ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_2_@?1??Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ@SA?A_PPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1400FF540
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400FF560 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall `NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize'::`2'::_lambda_2_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>(
        PVOID Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<180224,704>::Free(&Lookaside[-1].L.AllocateEx, Buffer);
}
