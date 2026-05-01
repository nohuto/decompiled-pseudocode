/*
 * XREFs of ?SetValue@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIInspectable@Foundation@Windows@3@@Z @ 0x1805DDEE0
 * Callers:
 *     ?SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z @ 0x1805DDE6C (-SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SetValue(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v11 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::SystemSettings::DataModel::ISettingItem>, &v11);
    v7 = v11;
    v12 = v11;
  }
  else
  {
    v6 = 0;
    v12 = 0LL;
    v7 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult((int *)&v11, v6, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 112LL))(v7, *a2, *a3);
  winrt::check_hresult((int *)&v11, v8, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}
