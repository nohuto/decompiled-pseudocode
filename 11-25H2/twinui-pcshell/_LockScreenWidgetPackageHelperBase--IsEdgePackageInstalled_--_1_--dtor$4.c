/*
 * XREFs of _LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor$4 @ 0x1806D3CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~0x10u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 112));
  }
}
