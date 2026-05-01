/*
 * XREFs of _LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1_::_1_::dtor$18 @ 0x1806FB5EC
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__ResumeCoro_1_::_1_::dtor_18(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 200) = *(_QWORD *)(a2 + 288) + 232LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 200));
}
