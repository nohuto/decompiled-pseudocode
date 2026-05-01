/*
 * XREFs of ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x1802C4B60
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     _XamlLauncher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1806EE0DF (_XamlLauncher--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800974F4 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization(
        StartWindowTelemetry::PerformDelayedInitialization *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
