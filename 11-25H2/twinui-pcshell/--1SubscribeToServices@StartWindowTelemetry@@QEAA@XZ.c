/*
 * XREFs of ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x1802CDA48
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BDC80 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _XamlLauncher::SubscribeToServices_::_1_::dtor$0 @ 0x1806B1BB8 (_XamlLauncher--SubscribeToServices_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004797C (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall StartWindowTelemetry::SubscribeToServices::~SubscribeToServices(
        StartWindowTelemetry::SubscribeToServices *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::SubscribeToServices::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
