/*
 * XREFs of _Util::TryOpenFileMappingAsStreamForWindowAsync_::_1_::dtor$0 @ 0x1806DB486
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 704));
}
