/*
 * XREFs of ??1factory_count_guard@impl@winrt@@QEAA@XZ @ 0x18007E118
 * Callers:
 *     _winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher_::_1_::dtor$1 @ 0x1801D69AE (_winrt--Windows--Internal--ApplicationModel--WindowManagement--WindowInProc--CreateWatcher_--_1_.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_::call_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_(__cdecl_)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics_const_&)__::_1_::dtor$3 @ 0x1801D69D2 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1801D69D2.c)
 *     _winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc::GetFromWindowId_::_1_::dtor$1 @ 0x1801D6C12 (_winrt--Windows--Internal--ApplicationModel--WindowManagement--AppViewInProc--GetFromWindowId_--.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::System::Threading::ThreadPool_winrt::Windows::System::Threading::IThreadPoolStatics_::call__lambda_4e2f6834dae5c2d9676db4968b0ab11c__&__::_1_::dtor$3 @ 0x1801D8963 (_winrt--impl--factory_cache_entry_winrt--Windows--System--Threading--ThreadPool_win_ea_1801D8963.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$24 @ 0x1801D8A3A (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$24.c)
 *     _DockableDeviceCollection::PopulateDeviceInfo_::_1_::dtor$9 @ 0x1801D9C5A (_DockableDeviceCollection--PopulateDeviceInfo_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::factory_count_guard::~factory_count_guard(volatile signed __int64 **this)
{
  _InterlockedDecrement64(*this);
}
