/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__tlgProvider_t_const___&_bool_&__::_1_::dtor$1 @ 0x18016B193
 * Callers:
 *     <none>
 * Callees:
 *     ?ReloadVolumeState@CVolumeControlBase@@UEAAXXZ @ 0x1800864B0 (-ReloadVolumeState@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__tlgProvider_t_const_____bool____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ReloadVolumeState(*(CVolumeControlBase **)(a2 + 88));
}
