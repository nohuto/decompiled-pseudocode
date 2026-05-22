/*
 * XREFs of ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A90
 * Callers:
 *     _DWMInputRouter::UpdateFocusedInputTarget_::_1_::dtor$20 @ 0x1801D4032 (_DWMInputRouter--UpdateFocusedInputTarget_--_1_--dtor$20.c)
 *     _CUIHierarchy::OnWindowRemoved_::_1_::dtor$0 @ 0x1801D69F6 (_CUIHierarchy--OnWindowRemoved_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowWatcherStopped_::_1_::dtor$1 @ 0x1801D6A08 (_CUIHierarchy--OnWindowWatcherStopped_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$3 @ 0x1801D6A1A (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$3.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$1 @ 0x1801D6A62 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$4 @ 0x1801D6A74 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$4.c)
 *     _ViewHierarchyWithWindowManager::OnAppViewAdded_::_1_::dtor$0 @ 0x1801D6A86 (_ViewHierarchyWithWindowManager--OnAppViewAdded_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::OnAppViewAdded_::_1_::dtor$1 @ 0x1801D6A98 (_ViewHierarchyWithWindowManager--OnAppViewAdded_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::OnAppViewAdded_::_1_::dtor$2 @ 0x1801D6AAA (_ViewHierarchyWithWindowManager--OnAppViewAdded_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetActiveViewInstanceId_::_1_::dtor$0 @ 0x1801D6AE0 (_ViewHierarchyWithWindowManager--GetActiveViewInstanceId_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::OnWindowRemoved_::_1_::dtor$0 @ 0x1801D6AF2 (_ViewHierarchyWithWindowManager--OnWindowRemoved_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::OnWindowRemoved_::_1_::dtor$1 @ 0x1801D6B04 (_ViewHierarchyWithWindowManager--OnWindowRemoved_--_1_--dtor$1.c)
 *     _ViewHelper::GetWindowIdFromViewId_::_1_::dtor$1 @ 0x1801D6B16 (_ViewHelper--GetWindowIdFromViewId_--_1_--dtor$1.c)
 *     _ViewHelper::GetWindowIdFromViewId_::_1_::dtor$2 @ 0x1801D6B43 (_ViewHelper--GetWindowIdFromViewId_--_1_--dtor$2.c)
 *     _MPCTarget::OnUniversalPropertyChanged_::_1_::dtor$0 @ 0x1801D6B70 (_MPCTarget--OnUniversalPropertyChanged_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::OnWindowAdded_::_1_::dtor$1 @ 0x1801D6B82 (_ViewHierarchyWithWindowManager--OnWindowAdded_--_1_--dtor$1.c)
 *     _ViewHierarchyWithWindowManager::OnWindowAdded_::_1_::dtor$2 @ 0x1801D6B94 (_ViewHierarchyWithWindowManager--OnWindowAdded_--_1_--dtor$2.c)
 *     _ViewHelper::GetPresentationModeFromViewId_::_1_::dtor$0 @ 0x1801D6BCA (_ViewHelper--GetPresentationModeFromViewId_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor$0 @ 0x1801D6BDC (_ViewHierarchyWithWindowManager--GetActiveView_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$0 @ 0x1801D8A16 (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$0 @ 0x1801D8A4C (_CUIHierarchy--OnWindowAdded_--_1_--dtor$0.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$1 @ 0x1801D8A5E (_CUIHierarchy--OnWindowAdded_--_1_--dtor$1.c)
 *     _CUIHierarchy::OnWindowAdded_::_1_::dtor$5 @ 0x1801D8A70 (_CUIHierarchy--OnWindowAdded_--_1_--dtor$5.c)
 *     _ViewHelper::GetThreadIdFromViewId_::_1_::dtor$1 @ 0x1801D8BED (_ViewHelper--GetThreadIdFromViewId_--_1_--dtor$1.c)
 *     _ViewHelper::GetThreadIdFromViewId_::_1_::dtor$2 @ 0x1801D8C1A (_ViewHelper--GetThreadIdFromViewId_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::GetTopLevelHostView_::_1_::dtor$0 @ 0x1801D8C47 (_ViewHierarchyWithWindowManager--GetTopLevelHostView_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::GetTopLevelHostView_::_1_::dtor$2 @ 0x1801D8C59 (_ViewHierarchyWithWindowManager--GetTopLevelHostView_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher(
        winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *this)
{
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(this);
}
