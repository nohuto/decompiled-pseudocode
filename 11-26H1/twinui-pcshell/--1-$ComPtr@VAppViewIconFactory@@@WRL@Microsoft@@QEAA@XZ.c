/*
 * XREFs of ??1?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x18029211C
 * Callers:
 *     _AppViewIconFactory::CreateInstance_::_1_::dtor$0 @ 0x1806DE069 (_AppViewIconFactory--CreateInstance_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView___&_IApplicationViewIconLoader___&__::_1_::dtor$0 @ 0x1806DE0B7 (_wil--MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView___-_IApplicationViewIconLoade.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconFactory>::~ComPtr<AppViewIconFactory>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(a1);
}
