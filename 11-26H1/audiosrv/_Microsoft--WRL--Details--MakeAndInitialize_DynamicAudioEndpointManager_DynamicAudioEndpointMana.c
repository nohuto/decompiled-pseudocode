/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_DynamicAudioEndpointManager_DynamicAudioEndpointManager__::_1_::dtor$1 @ 0x1801683ED
 * Callers:
 *     <none>
 * Callees:
 *     ?ReloadVolumeState@CVolumeControlBase@@UEAAXXZ @ 0x1800864B0 (-ReloadVolumeState@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_DynamicAudioEndpointManager_DynamicAudioEndpointManager__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ReloadVolumeState(*(CVolumeControlBase **)(a2 + 80));
}
