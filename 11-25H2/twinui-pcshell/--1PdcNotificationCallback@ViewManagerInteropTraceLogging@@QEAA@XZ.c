/*
 * XREFs of ??1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CD998
 * Callers:
 *     __lambda_279b59b1da187398d137b7ca9bd87eac_::operator()_::_1_::dtor$0 @ 0x1806ADC0E (__lambda_279b59b1da187398d137b7ca9bd87eac_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F698 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::PdcNotificationCallback::~PdcNotificationCallback(
        ViewManagerInteropTraceLogging::PdcNotificationCallback *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
