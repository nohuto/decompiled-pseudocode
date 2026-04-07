/*
 * XREFs of ??$query_to@UICompositionColorBrush@Composition@UI@Windows@@@?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18004D0B8
 * Callers:
 *     ??$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800845B8 (--$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUI.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::query_to<Windows::UI::Composition::ICompositionColorBrush>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // r9

  v2 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a2);
  return (**v3)(v3, &GUID_2b264c5e_bf35_4831_8642_cf70c20fff2f, v2);
}
