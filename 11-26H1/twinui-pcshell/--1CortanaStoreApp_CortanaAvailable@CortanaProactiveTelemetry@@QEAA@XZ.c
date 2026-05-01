/*
 * XREFs of ??1CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18021A8C4
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800FB28C (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     _CortanaAvailability::CheckCortanaAvailability_::_1_::dtor$0 @ 0x1806D465E (_CortanaAvailability--CheckCortanaAvailability_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FB5B8 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::~CortanaStoreApp_CortanaAvailable(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
