/*
 * XREFs of ??$query_to@UICompositionSurfaceBrush2@Composition@UI@Windows@@@?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICompositionSurfaceBrush2@Composition@UI@Windows@@@Z @ 0x180075B5C
 * Callers:
 *     ?SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009BC60 (-SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::query_to<Windows::UI::Composition::ICompositionSurfaceBrush2>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // r9

  v2 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a2);
  return (**v3)(v3, &GUID_d27174d5_64f5_4692_9dc7_71b61d7e5880, v2);
}
