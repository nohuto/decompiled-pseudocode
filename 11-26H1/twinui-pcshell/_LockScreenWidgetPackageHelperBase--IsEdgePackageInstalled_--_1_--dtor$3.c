/*
 * XREFs of _LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor$3 @ 0x1806FBCCE
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~8u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 120));
  }
}
