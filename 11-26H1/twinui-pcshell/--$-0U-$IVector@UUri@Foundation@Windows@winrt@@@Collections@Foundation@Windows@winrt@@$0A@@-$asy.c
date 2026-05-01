/*
 * XREFs of ??$?0U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$async_iterable@UUri@Foundation@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1805C3554
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::param::async_iterable<winrt::Windows::Foundation::Uri>::async_iterable<winrt::Windows::Foundation::Uri>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = 0LL;
  v3 = *a2;
  v5 = 0LL;
  if ( v3 )
    (**v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>,
      &v5);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)a1, &v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return a1;
}
