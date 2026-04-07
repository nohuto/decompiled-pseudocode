/*
 * XREFs of ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800BDB84
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C0C30 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C1010 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 *     _CProjectionBorderManager::StartVirtualMonitorCapture_::_1_::dtor$1 @ 0x1800ED147 (_CProjectionBorderManager--StartVirtualMonitorCapture_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096F80 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
