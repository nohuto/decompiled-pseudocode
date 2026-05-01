/*
 * XREFs of ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1802CB640
 * Callers:
 *     ??_GDelayedTileActivationCallSite@@UEAAPEAXI@Z @ 0x18023D900 (--_GDelayedTileActivationCallSite@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804D5C70 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CopyToViewValueSetBase::~CopyToViewValueSetBase(CopyToViewValueSetBase *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this + 24);
}
