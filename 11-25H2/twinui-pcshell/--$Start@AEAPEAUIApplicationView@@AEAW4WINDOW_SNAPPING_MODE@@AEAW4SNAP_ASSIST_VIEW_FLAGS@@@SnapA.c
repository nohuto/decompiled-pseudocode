/*
 * XREFs of ??$Start@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@SnapAssistProcessing@CSnapComponentTelemetry@@SA?AV01@AEAPEAUIApplicationView@@AEAW4WINDOW_SNAPPING_MODE@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180581CCC
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023AE30 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180187898 (-StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018811C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall CSnapComponentTelemetry::SnapAssistProcessing::Start<IApplicationView * &,enum WINDOW_SNAPPING_MODE &,enum SNAP_ASSIST_VIEW_FLAGS &>(
        struct wil::details::IFailureCallback *a1,
        ApplicationViewTraceLoggingHelpers **a2,
        unsigned int *a3,
        int *a4)
{
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    (__int64)"SnapAssistProcessing");
  *(_QWORD *)a1 = &CSnapComponentTelemetry::SnapAssistProcessing::`vftable';
  CSnapComponentTelemetry::SnapAssistProcessing::StartActivity((__int64)a1, *a2, (unsigned __int16 **)*a3, *a4);
  return a1;
}
