/*
 * XREFs of ??1FillCandidate@SnapLayoutHelpers@@QEAA@XZ @ 0x1802C0C58
 * Callers:
 *     _CNetworkExperienceManager::RuntimeClassInitialize_::_1_::dtor$28 @ 0x1806CF96B (_CNetworkExperienceManager--RuntimeClassInitialize_--_1_--dtor$28.c)
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$5 @ 0x1806D6EA9 (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$6 @ 0x1806D6EBB (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$6.c)
 *     _AppViewDataSourceAdapter::InitializeTaskGroupItems_::_1_::dtor$25 @ 0x1806D9C22 (_AppViewDataSourceAdapter--InitializeTaskGroupItems_--_1_--dtor$25.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031____::_1_::dtor$0 @ 0x1806F22D1 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell--IWindowTabEx.c)
 *     __lambda_f24517619e04b8c6c046d1f7bd6f10fb_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer__::_1_::dtor$0 @ 0x1806F22E3 (__lambda_f24517619e04b8c6c046d1f7bd6f10fb_--operator()_winrt--Windows--System--Threading--Thread.c)
 *     _GamingPosturePositioner::DisplaySettingsChange_::_1_::dtor$4 @ 0x1806F2A73 (_GamingPosturePositioner--DisplaySettingsChange_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$1 @ 0x1806F8B17 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$1.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$4 @ 0x1806F8B29 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$5 @ 0x1806F8B3B (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$7 @ 0x1806F8B6E (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$7.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$9 @ 0x1806F8BA1 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$9.c)
 *     _VirtualDesktopSwitcherHost::StartPointerExitedTimer_::_1_::dtor$4 @ 0x180707732 (_VirtualDesktopSwitcherHost--StartPointerExitedTimer_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SnapLayoutHelpers::FillCandidate::~FillCandidate(__int64 *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(this);
}
