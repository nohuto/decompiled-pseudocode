/*
 * XREFs of ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800164A4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18003CE98 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003D214 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x18003F384 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180051450 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180054A84 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180055D84 (-GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x1800651C0 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180070890 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18008E5C0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800A97D0 (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800BE7CC (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     _CWindowList::GetSyncedWindowData_::_1_::dtor$0 @ 0x1800E7270 (_CWindowList--GetSyncedWindowData_--_1_--dtor$0.c)
 *     _CWindowSnapshot::Initialize_::_1_::dtor$0 @ 0x1800E76AC (_CWindowSnapshot--Initialize_--_1_--dtor$0.c)
 *     _CDisplayDisconnectAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800E7AB6 (_CDisplayDisconnectAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDWMDisplaySet::EnumerateOutputs_::_1_::dtor$0 @ 0x1800E7BD4 (_CDWMDisplaySet--EnumerateOutputs_--_1_--dtor$0.c)
 *     _CResourceProxy::CreateFromSharedHandle_CVisualProxy__::_1_::dtor$1 @ 0x1800E7CC5 (_CResourceProxy--CreateFromSharedHandle_CVisualProxy__--_1_--dtor$1.c)
 *     _CResourceProxy::Create_CVisualProxy__::_1_::dtor$1 @ 0x1800E7CFD (_CResourceProxy--Create_CVisualProxy__--_1_--dtor$1.c)
 *     _CBitmapSource::CreateFromWicBitmapSource_::_1_::dtor$1 @ 0x1800E8C7A (_CBitmapSource--CreateFromWicBitmapSource_--_1_--dtor$1.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800E9029 (_CDisplaySecondaryOnlyToExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CTransitionVisualController::CreateDesktopSnapshotComponent_::_1_::dtor$0 @ 0x1800E91E3 (_CTransitionVisualController--CreateDesktopSnapshotComponent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDisplayBlackCurtainAnimatedVisual::operator delete(void *a1, const struct std::nothrow_t *a2)
{
  DefaultHeap::Free(a1);
}
