/*
 * XREFs of ??1CBitmapSourceArray@@QEAA@XZ @ 0x18007998C
 * Callers:
 *     _CWindowData::NotifyRepresentationChanged_::_1_::dtor$0 @ 0x1800EB230 (_CWindowData--NotifyRepresentationChanged_--_1_--dtor$0.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$3 @ 0x1800EB242 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$3.c)
 *     _CTopLevelWindow::ValidateVisual_::_1_::dtor$2 @ 0x1800EB300 (_CTopLevelWindow--ValidateVisual_--_1_--dtor$2.c)
 *     _CLoginTransition::StartAnimation_::_1_::dtor$0 @ 0x1800EB4B0 (_CLoginTransition--StartAnimation_--_1_--dtor$0.c)
 *     _CLivePreview::_CollectWindows_::_1_::dtor$0 @ 0x1800EB544 (_CLivePreview--_CollectWindows_--_1_--dtor$0.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$4 @ 0x1800EB742 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$4.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$5 @ 0x1800EB758 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$5.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$6 @ 0x1800EB76A (_CTouchDragVisual--UpdateVisual_--_1_--dtor$6.c)
 *     _CTouchDragVisual::UpdateVisual_::_1_::dtor$7 @ 0x1800EB780 (_CTouchDragVisual--UpdateVisual_--_1_--dtor$7.c)
 *     _CTouchDragVisualHelper::TriangulatePathGeometry_::_1_::dtor$0 @ 0x1800EB796 (_CTouchDragVisualHelper--TriangulatePathGeometry_--_1_--dtor$0.c)
 *     _Mesh2D::Mesh2D_::_1_::dtor$0 @ 0x1800EB7A8 (_Mesh2D--Mesh2D_--_1_--dtor$0.c)
 *     _Mesh2D::Mesh2D_::_1_::dtor$1 @ 0x1800EB7BA (_Mesh2D--Mesh2D_--_1_--dtor$1.c)
 *     _Mesh2D::Mesh2D_::_1_::dtor$2 @ 0x1800EB7D0 (_Mesh2D--Mesh2D_--_1_--dtor$2.c)
 *     _CTopLevelWindow::WindowFrame::WindowFrame_::_1_::dtor$0 @ 0x1800EB7F8 (_CTopLevelWindow--WindowFrame--WindowFrame_--_1_--dtor$0.c)
 *     _CTopLevelWindow::WindowFrame::WindowFrame_::_1_::dtor$1 @ 0x1800EB80E (_CTopLevelWindow--WindowFrame--WindowFrame_--_1_--dtor$1.c)
 *     _CTopLevelWindow::WindowFrame::WindowFrame_::_1_::dtor$2 @ 0x1800EB824 (_CTopLevelWindow--WindowFrame--WindowFrame_--_1_--dtor$2.c)
 *     _CTopLevelWindow::WindowFrame::WindowFrame_::_1_::dtor$3 @ 0x1800EB83A (_CTopLevelWindow--WindowFrame--WindowFrame_--_1_--dtor$3.c)
 *     _CTopLevelWindow::WindowFrame::WindowFrame_::_1_::dtor$4 @ 0x1800EB850 (_CTopLevelWindow--WindowFrame--WindowFrame_--_1_--dtor$4.c)
 *     _CTopLevelWindow::WindowFrame::WindowFrame_::_1_::dtor$5 @ 0x1800EB869 (_CTopLevelWindow--WindowFrame--WindowFrame_--_1_--dtor$5.c)
 *     _CLivePreview::_AnimateOpaqueVisuals_::_1_::dtor$0 @ 0x1800EBD5C (_CLivePreview--_AnimateOpaqueVisuals_--_1_--dtor$0.c)
 *     _CDWMDXGIAdapter::CDWMDXGIAdapter_::_1_::dtor$1 @ 0x1800EC11F (_CDWMDXGIAdapter--CDWMDXGIAdapter_--_1_--dtor$1.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$0 @ 0x1800EC222 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$0.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$2 @ 0x1800EC246 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$2.c)
 *     _CDWMDisplaySet::IsEquivalentRotated_::_1_::dtor$0 @ 0x1800EC2D6 (_CDWMDisplaySet--IsEquivalentRotated_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartSecondAnimation_::_1_::dtor$3 @ 0x1800EC2E8 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--Start_ea_1800EC2E8.c)
 *     _CProjectionBorderManager::_AddProjectionBorderForAllDisplays_::_1_::dtor$1 @ 0x1800EC84F (_CProjectionBorderManager--_AddProjectionBorderForAllDisplays_--_1_--dtor$1.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$2 @ 0x1800EDA91 (_CWindowList--_CWindowList_--_1_--dtor$2.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$4 @ 0x1800EDAC3 (_CWindowList--_CWindowList_--_1_--dtor$4.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$6 @ 0x1800EDAF5 (_CWindowList--_CWindowList_--_1_--dtor$6.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$9 @ 0x1800EDB40 (_CWindowList--_CWindowList_--_1_--dtor$9.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$12 @ 0x1800EDB8B (_CWindowList--_CWindowList_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CBitmapSourceArray::~CBitmapSourceArray(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
