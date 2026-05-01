/*
 * XREFs of ??1?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D16A0
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$3 @ 0x1806D1F18 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806D1F18.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowSuggestions_::_1_::dtor$0 @ 0x1806D1F90 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806D1F90.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<winrt::com_ptr<IApplicationView>>::~vector<winrt::com_ptr<IApplicationView>>(__int64 a1)
{
  std::vector<winrt::com_ptr<IApplicationView>>::_Tidy(a1);
}
