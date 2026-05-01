/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801175B0
 * Callers:
 *     _TouchKeyboardExperienceManager::OnPositionChanged_::_1_::dtor$5 @ 0x1806CCC82 (_TouchKeyboardExperienceManager--OnPositionChanged_--_1_--dtor$5.c)
 *     _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$0 @ 0x1806CEB40 (_VirtualDesktopsApi--IsWindowOnCurrentVirtualDesktop_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::UpdateVisibileViewsBorder_::_1_::dtor$0 @ 0x1806D247A (_TouchKeyboardExperienceManager--UpdateVisibileViewsBorder_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$0 @ 0x1806D25B4 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$0 @ 0x1806D631C (_VirtualDesktopsApi--GetWindowDesktopId_--_1_--dtor$0.c)
 *     _CVirtualDesktop::IsViewVisible_::_1_::dtor$0 @ 0x1806D8696 (_CVirtualDesktop--IsViewVisible_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::dtor$0 @ 0x1806DE96D (_PenWorkspace--Discover--RecentAppsCache--GetSortedAppList_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x1806DF17B (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x1806EF6AF (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x1806EF802 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
