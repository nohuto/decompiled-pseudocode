/*
 * XREFs of ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180051148
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18002EBBC (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::__lambda_b534361c50cb4958853f48f5e7b1e06a_ @ 0x180051174 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--__lambda_b534361c50cb4958853f48f5e7b1e06a_.c)
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$0 @ 0x1806A5B0F (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020994 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::Reactivate::~Reactivate(SingleViewExperienceTelemetry::Reactivate *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
