/*
 * XREFs of ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x1802B76FC
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800AFF8C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed_::_1_::dtor$0 @ 0x1806AA646 (_winrt--Windows--Internal--Shell--implementation--PinManager--IsPinAllowed_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B7728 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerIsPinAllowed::~PinManagerIsPinAllowed(
        PinManagerTelemetry::PinManagerIsPinAllowed *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
