/*
 * XREFs of ??1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F00BC
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1802F5800 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::WindowProvided::~WindowProvided(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CAppViewManagerTelemetry::WindowProvided::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
