/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6e64461b6651328ea871cea77f237b57__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805B6CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?OnTaskbarSettingChanged@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4TaskbarSettingChangedEvent@Dashboard@Shell@UI@WindowsUdk@3@@Z @ 0x1805B15A8 (-OnTaskbarSettingChanged@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboard.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_6e64461b6651328ea871cea77f237b57__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call(
        __int64 a1,
        void (__fastcall ****a2)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *))
{
  void (__fastcall ***v3)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *); // rcx
  bool v4; // bl
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp+28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ****v7)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp+38h]

  v3 = *a2;
  *a2 = 0LL;
  v5 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v3;
  v7 = &v5;
  v6 = 0LL;
  v4 = 0;
  if ( v3 )
  {
    (**v3)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v3,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>,
      &v6);
    if ( v6 )
      v4 = 1;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  if ( v4 )
    winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::OnTaskbarSettingChanged(
      &v5,
      (unsigned int *)(a1 + 8));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
}
