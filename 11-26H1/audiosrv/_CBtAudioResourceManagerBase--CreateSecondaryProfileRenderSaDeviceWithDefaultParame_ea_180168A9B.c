/*
 * XREFs of _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x180168A9B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 160));
}
