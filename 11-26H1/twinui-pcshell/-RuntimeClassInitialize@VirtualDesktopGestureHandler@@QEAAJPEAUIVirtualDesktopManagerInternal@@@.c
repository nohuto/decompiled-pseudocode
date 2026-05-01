/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopGestureHandler@@QEAAJPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1801E76D8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGestureHandler@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1801E761C (--$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@D.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil@@QEAA_NXZ @ 0x180563860 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::RuntimeClassInitialize(
        VirtualDesktopGestureHandler *this,
        struct IVirtualDesktopManagerInternal *a2)
{
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchpadPublicApis3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TouchpadPublicApis3>::GetImpl'::`2'::impl) )
    RegisterTouchPadCapable(1LL);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a2);
  return 0LL;
}
