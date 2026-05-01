/*
 * XREFs of ??1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18045E7D4
 * Callers:
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18045E800 (--1FocusHoldingTank@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800974F4 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall StartWindowTelemetry::DestroyHoldingTankWindow::~DestroyHoldingTankWindow(
        StartWindowTelemetry::DestroyHoldingTankWindow *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::DestroyHoldingTankWindow::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
