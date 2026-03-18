/*
 * XREFs of ??$_lambda_invoker_cdecl_@PEAXPEAU_LOOKASIDE_LIST_EX@@@_lambda_2_@?1??Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ@SA?A_PPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x14000BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000BFC0 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall `NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize'::`2'::_lambda_2_::_lambda_invoker_cdecl_<void *,_LOOKASIDE_LIST_EX *>(
        PVOID Buffer,
        PLOOKASIDE_LIST_EX Lookaside)
{
  NSInstrumentation::CTypeIsolation<36864,144>::Free(&Lookaside[-1].L.AllocateEx, Buffer);
}
