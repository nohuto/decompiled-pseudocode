/*
 * XREFs of ?StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z @ 0x180029E98
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800C8A60 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationScheduler::StopWindowTrackingForStoryboard(
        CAnimationScheduler *this,
        const struct CStoryboard *a2)
{
  CWindowPropertyTracker::StopTrackingStoryboard((CAnimationScheduler *)((char *)this + 48), a2);
}
