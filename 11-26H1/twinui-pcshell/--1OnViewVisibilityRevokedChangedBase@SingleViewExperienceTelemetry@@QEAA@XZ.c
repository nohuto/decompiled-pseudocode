/*
 * XREFs of ??1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180174794
 * Callers:
 *     ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180174590 (-OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     _CSingleViewShellExperience::OnViewVisibilityRevokedChangedBase_::_1_::dtor$0 @ 0x1806D7387 (_CSingleViewShellExperience--OnViewVisibilityRevokedChangedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180068090 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::~OnViewVisibilityRevokedChangedBase(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
