/*
 * XREFs of ?OnSaDeviceCreation@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800E4A90
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800DEFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     ?IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4510 (-IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?IsBidirectionalSaDevice@CBtAudioResourceManagerBase@@IEAA_NW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800E4690 (-IsBidirectionalSaDevice@CBtAudioResourceManagerBase@@IEAA_NW4AUDIO_DIRECTION@@PEBUSaDeviceParam.c)
 */

void __fastcall CBtAudioResourceManagerBase::OnSaDeviceCreation(CBtAudioResourceManagerBase *a1, int a2, __int64 a3)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl) )
  {
    if ( CBtAudioResourceManagerBase::IsBidirectionalSaDevice((__int64)a1, a2, a3) )
      CBtAudioResourceManagerBase::IncrementBidirectionalSaDeviceCount(a1);
  }
}
