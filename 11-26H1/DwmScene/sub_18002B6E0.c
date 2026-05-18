/*
 * XREFs of sub_18002B6E0 @ 0x18002B6E0
 * Callers:
 *     sub_18002CDE0 @ 0x18002CDE0 (sub_18002CDE0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x18006F674 (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 */

LPVOID __fastcall sub_18002B6E0(LPVOID lpMem, char a2)
{
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
