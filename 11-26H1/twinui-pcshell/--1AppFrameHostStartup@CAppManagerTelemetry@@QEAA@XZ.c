/*
 * XREFs of ??1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ @ 0x1802C497C
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180227FB4 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$0 @ 0x1806DEF6C (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007773C (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CAppManagerTelemetry::AppFrameHostStartup::~AppFrameHostStartup(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
