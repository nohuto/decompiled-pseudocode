/*
 * XREFs of ??1FillCandidate@SnapLayoutHelpers@@QEAA@XZ @ 0x1802C94C8
 * Callers:
 *     _CNetworkExperienceManager::RuntimeClassInitialize_::_1_::dtor$30 @ 0x1806AAC7A (_CNetworkExperienceManager--RuntimeClassInitialize_--_1_--dtor$30.c)
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$5 @ 0x1806AB297 (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$6 @ 0x1806AB2A9 (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$6.c)
 *     _AppViewDataSourceAdapter::InitializeTaskGroupItems_::_1_::dtor$25 @ 0x1806AD378 (_AppViewDataSourceAdapter--InitializeTaskGroupItems_--_1_--dtor$25.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031____::_1_::dtor$0 @ 0x1806CA40F (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell--IWindowTabEx.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$1 @ 0x1806D0308 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$1.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$4 @ 0x1806D031A (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$5 @ 0x1806D032C (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$7 @ 0x1806D035F (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$7.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$9 @ 0x1806D0392 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$9.c)
 *     _VirtualDesktopSwitcherHost::StartPointerExitedTimer_::_1_::dtor$4 @ 0x1806DEB31 (_VirtualDesktopSwitcherHost--StartPointerExitedTimer_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SnapLayoutHelpers::FillCandidate::~FillCandidate(__int64 *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(this);
}
