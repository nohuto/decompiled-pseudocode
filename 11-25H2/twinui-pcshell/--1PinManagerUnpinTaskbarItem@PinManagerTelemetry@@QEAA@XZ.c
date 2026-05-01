/*
 * XREFs of ??1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805BF884
 * Callers:
 *     ?UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805C82E0 (-UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::UnpinTaskbarItem_::_1_::dtor$4 @ 0x1806D69D0 (_winrt--Windows--Internal--Shell--implementation--PinManager--UnpinTaskbarItem_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805C14C8 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerUnpinTaskbarItem::~PinManagerUnpinTaskbarItem(
        PinManagerTelemetry::PinManagerUnpinTaskbarItem *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerUnpinTaskbarItem::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
