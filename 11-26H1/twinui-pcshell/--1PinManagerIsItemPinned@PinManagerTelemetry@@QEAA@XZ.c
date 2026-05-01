/*
 * XREFs of ??1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3810
 * Callers:
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1805E6F50 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$0 @ 0x1806FE45F (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802985F8 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerIsItemPinned::~PinManagerIsItemPinned(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&PinManagerTelemetry::PinManagerIsItemPinned::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
