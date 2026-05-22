/*
 * XREFs of ?OnDeviceQueryRemove@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFBF0
 * Callers:
 *     ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DF700 (-OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB6E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     ?LogRawInputDeviceQueryRemove@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800DFA98 (-LogRawInputDeviceQueryRemove@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceQueryRemove(HIDDeviceCollection *this, int a2)
{
  __int64 v4; // rcx
  struct RIMDevice *v6; // [rsp+50h] [rbp+18h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl) )
  {
    v6 = 0LL;
    if ( (int)RIMDeviceCollection::FindDevice(this, a2, 0LL, &v6, 0LL) >= 0 )
    {
      v4 = *((_QWORD *)v6 + 4);
      if ( v4 )
        RawInputProvidersTelemetry::LogRawInputDeviceQueryRemove(
          *(_DWORD *)(v4 + 4),
          *(_WORD *)(v4 + 32),
          *(_WORD *)(v4 + 34),
          *(_WORD *)(v4 + 36));
    }
  }
  return 0LL;
}
