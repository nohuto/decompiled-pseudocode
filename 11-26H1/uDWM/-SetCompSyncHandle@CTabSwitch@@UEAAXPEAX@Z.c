/*
 * XREFs of ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800C2A80
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z @ 0x18003EF94 (-StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800E4354 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 */

void __fastcall CTabSwitch::SetCompSyncHandle(CTabSwitch *this, void *a2)
{
  CAnimationScheduler::StopWindowTrackingForStoryboard(
    *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
    this);
  CWindowList::SetCommitHandle(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2);
  CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
}
