/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180030CA4
 * Callers:
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180030AC4 (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x180030C0C (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x180030CB0 (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180054A84 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180054BDC (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180055D84 (-GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x18008B0C0 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?make_weak_ref@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008DC0C (-make_weak_ref@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x1800E62A0 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](unsigned __int64 a1, const struct std::nothrow_t *a2)
{
  return DefaultHeap::Alloc(a1);
}
