/*
 * XREFs of ??1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ @ 0x1805BF590
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1805C0950 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18016B0E4 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 */

void __fastcall TaskbarPinningTelemetry::CanPinToTaskbar::~CanPinToTaskbar(
        TaskbarPinningTelemetry::CanPinToTaskbar *this)
{
  *(_QWORD *)this = &TaskbarPinningTelemetry::CanPinToTaskbar::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
