/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18010E6C0
 * Callers:
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$0 @ 0x1806A4FB4 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnPositionChanged_::_1_::dtor$5 @ 0x1806A4FD8 (_TouchKeyboardExperienceManager--OnPositionChanged_--_1_--dtor$5.c)
 *     _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$0 @ 0x1806A5C00 (_VirtualDesktopsApi--IsWindowOnCurrentVirtualDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$0 @ 0x1806AFCAD (_VirtualDesktopsApi--GetWindowDesktopId_--_1_--dtor$0.c)
 *     _CVirtualDesktop::IsViewVisible_::_1_::dtor$0 @ 0x1806B10A9 (_CVirtualDesktop--IsViewVisible_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::UpdateVisibileViewsBorder_::_1_::dtor$0 @ 0x1806B1E03 (_TouchKeyboardExperienceManager--UpdateVisibileViewsBorder_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x1806B7E25 (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x1806C7731 (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x1806C7884 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
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
