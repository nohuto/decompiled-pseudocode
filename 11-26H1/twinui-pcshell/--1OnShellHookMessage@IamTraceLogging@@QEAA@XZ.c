/*
 * XREFs of ??1OnShellHookMessage@IamTraceLogging@@QEAA@XZ @ 0x180040EC4
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$3 @ 0x1806CEC88 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::~OnShellHookMessage(IamTraceLogging::OnShellHookMessage *this)
{
  *(_QWORD *)this = &IamTraceLogging::OnShellHookMessage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
