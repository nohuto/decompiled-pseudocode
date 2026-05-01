/*
 * XREFs of _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x1806FB968
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ @ 0x1802BE33C (--1-$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 248) = *(_QWORD *)(a2 + 368) + 200LL;
  winrt::param::map<winrt::hstring,winrt::hstring>::~map<winrt::hstring,winrt::hstring>(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 248));
}
