/*
 * XREFs of ??$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800BD70C
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2320 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C25A0 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180094CAC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800C0A6C (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 */

// Hidden C++ exception states: #wind=1
WindowFrameLoggingTelemetry::StopDisplayCapture *__fastcall WindowFrameLoggingTelemetry::StopDisplayCapture::Start<unsigned int,unsigned int>(
        WindowFrameLoggingTelemetry::StopDisplayCapture *this,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"StopDisplayCapture");
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StopDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StopDisplayCapture::StartActivity(this, *a2, *a3);
  return this;
}
