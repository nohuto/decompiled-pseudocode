/*
 * XREFs of ?GetCurrentScaleFactor@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAI@Z @ 0x18024E770
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x1804762E0 (-GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA-AW4DEVICE_SCALE_FACTOR@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetCurrentScaleFactor(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum DEVICE_SCALE_FACTOR *a2)
{
  enum DEVICE_SCALE_FACTOR ScaleFactor; // eax

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    ScaleFactor = KeyboardHosting::MonitorInformation::GetScaleFactor((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
  else
    ScaleFactor = *((_DWORD *)this + 64);
  *a2 = ScaleFactor;
  return 0LL;
}
