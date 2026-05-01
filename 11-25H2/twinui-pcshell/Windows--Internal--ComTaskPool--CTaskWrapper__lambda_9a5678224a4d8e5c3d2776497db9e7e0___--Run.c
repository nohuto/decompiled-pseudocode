/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a5678224a4d8e5c3d2776497db9e7e0___::Run @ 0x18034E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180245D84 (-UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180352AF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 *     ?UpdateNexusChordEnablement@NexusPolicyManager@@QEAAXXZ @ 0x18035B0F8 (-UpdateNexusChordEnablement@NexusPolicyManager@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a5678224a4d8e5c3d2776497db9e7e0___::Run(
        __int64 a1)
{
  GamingOverlayExperienceManager *v1; // rbx
  NexusPolicyManager *v2; // rcx

  v1 = *(GamingOverlayExperienceManager **)(a1 + 16);
  GamingOverlayExperienceManager::UpdateGamepadIntervalValues(v1);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    if ( *((_QWORD *)v1 + 121) )
      NexusPolicyManager::UpdateNexusChordEnablement(v2);
  }
}
