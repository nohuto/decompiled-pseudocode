/*
 * XREFs of DxgkGetSharedSyncObjectType @ 0x14040B050
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1400268E4 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005E0A0 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14006A624 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1400A1C80 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1400A2A20 (-Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedSyncObjectType()
{
  return g_pDxgkSharedSyncObjectType;
}
