/*
 * XREFs of ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18021D06C
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001A1A8 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::Hide_::_1_::dtor$0 @ 0x1806CCD32 (_CToastCenterExperienceManager--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C32C (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_HideActivity::~EM_HideActivity(ToastCenterTelemetry::EM_HideActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_HideActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
