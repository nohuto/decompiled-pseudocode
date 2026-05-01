/*
 * XREFs of _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_ @ 0x1805E3194
 * Callers:
 *     wil::details::lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___::_lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___ @ 0x1805E32F8 (wil--details--lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___--_lambda_call__lambda_ae5f.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5508 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_(__int64 a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 32));
  return std::wstring::_Tidy_deallocate((_QWORD *)a1);
}
