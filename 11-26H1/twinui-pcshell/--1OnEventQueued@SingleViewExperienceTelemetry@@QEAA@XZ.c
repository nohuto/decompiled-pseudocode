/*
 * XREFs of ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1801752CC
 * Callers:
 *     _CSingleViewShellExperience::OnEventQueued_::_1_::dtor$0 @ 0x1806D055B (_CSingleViewShellExperience--OnEventQueued_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180068090 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnEventQueued::~OnEventQueued(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
