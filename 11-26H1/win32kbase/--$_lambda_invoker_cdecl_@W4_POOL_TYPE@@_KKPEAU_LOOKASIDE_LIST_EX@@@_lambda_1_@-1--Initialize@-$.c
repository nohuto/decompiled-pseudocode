/*
 * XREFs of ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_1_@?1??Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ@SAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1400B9AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400B9AFC (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall `NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize'::`2'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return NSInstrumentation::CTypeIsolation<36864,144>::Allocate(&Lookaside[-1].L.AllocateEx, NumberOfBytes, Tag);
}
