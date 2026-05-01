/*
 * XREFs of ??1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ @ 0x180373EB4
 * Callers:
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18037428C (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     _CToastCenterExperienceManager::ChangeDisplayContext_::_1_::dtor$0 @ 0x1806BEBCE (_CToastCenterExperienceManager--ChangeDisplayContext_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032CF4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_DisplayContextChanged::~EM_DisplayContextChanged(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ToastCenterTelemetry::EM_DisplayContextChanged::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
