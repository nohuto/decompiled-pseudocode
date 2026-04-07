/*
 * XREFs of ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18004E404
 * Callers:
 *     _CTopLevelWindow::CloneVisualTreeForLivePreview_::_1_::dtor$0 @ 0x1800EBC6B (_CTopLevelWindow--CloneVisualTreeForLivePreview_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C7F8 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
