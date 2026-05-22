/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@XPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@std@@EEAAX_N@Z @ 0x18007D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc<_lambda_329431f877b8a1cf1c33d43387e7f0d1_,void,_MIT_BASE_INPUT_OBSERVER_PACKET const *>::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( a2 )
    return std::_Deallocate<16>(a1, 16LL);
  return result;
}
