/*
 * XREFs of ??1ControlGained@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1803F762C
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803F7EE0 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     _HolographicPositioner::ControlGained_::_1_::dtor$4 @ 0x1806C1ABF (_HolographicPositioner--ControlGained_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803F85D4 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

void __fastcall HolographicPositionerTelemetry::ControlGained::~ControlGained(
        HolographicPositionerTelemetry::ControlGained *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ControlGained::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
