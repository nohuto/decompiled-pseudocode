/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___::_ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___ @ 0x1802EFDA8
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___::_scalar_deleting_destructor_ @ 0x1802F0CA0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_1b91a7a6515db6d6d7_ea_1802F0CA0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___::_ShellPositionerCallback__lambda_1b91a7a6515db6d6d798acc687776bab___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
