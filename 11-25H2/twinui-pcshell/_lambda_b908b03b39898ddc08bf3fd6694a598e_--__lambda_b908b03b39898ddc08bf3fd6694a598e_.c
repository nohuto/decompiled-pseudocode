/*
 * XREFs of _lambda_b908b03b39898ddc08bf3fd6694a598e_::__lambda_b908b03b39898ddc08bf3fd6694a598e_ @ 0x1805BF1BC
 * Callers:
 *     wil::details::lambda_call__lambda_b908b03b39898ddc08bf3fd6694a598e___::_lambda_call__lambda_b908b03b39898ddc08bf3fd6694a598e___ @ 0x1805BF324 (wil--details--lambda_call__lambda_b908b03b39898ddc08bf3fd6694a598e___--_lambda_call__lambda_b908.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805C13D4 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_b908b03b39898ddc08bf3fd6694a598e_::__lambda_b908b03b39898ddc08bf3fd6694a598e_(
        volatile signed __int32 **a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 4);
  std::wstring::_Tidy_deallocate((void **)a1);
}
