/*
 * XREFs of ??1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805BF8B0
 * Callers:
 *     ?UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805C8430 (-UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEM.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::UpdatePinnedTaskbarItem_::_1_::dtor$4 @ 0x1806D6A21 (_winrt--Windows--Internal--Shell--implementation--PinManager--UpdatePinnedTaskbarIt_ea_1806D6A21.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805C14C8 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::~PinManagerUpdatePinnedTaskbarItem(
        PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
