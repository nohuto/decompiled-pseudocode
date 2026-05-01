/*
 * XREFs of ?Provider@DragDropSimulatorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180556C4C
 * Callers:
 *     ??$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z @ 0x180554010 (--$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z @ 0x180554098 (--$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z @ 0x180554120 (--$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z @ 0x1805541A8 (--$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0CA@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CA@$$CBD$$QEAJ@Z @ 0x180554230 (--$FailureTrace@AEAY0CA@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CA@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0CL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CL@$$CBD$$QEAJ@Z @ 0x1805542B8 (--$FailureTrace@AEAY0CL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0CL@$$CBD$$QEAJ@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x180554B14 (--1-$_TlgActivityBase@V-$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0Is.c)
 *     ?NotifyFailure@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180556900 (-NotifyFailure@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_T.c)
 *     ?StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ @ 0x180557664 (-StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180557770 (-Stop@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     ?StopActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@MEAAXXZ @ 0x180557860 (-StopActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@MEAAXXZ.c)
 *     ?TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z @ 0x180557A98 (-TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z.c)
 *     ?TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z @ 0x180557BE0 (-TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x180557FA4 (-get@-$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceL.c)
 */

const struct _tlgProvider_t *__fastcall DragDropSimulatorTraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(
                                             a1,
                                             _lambda_a3088610fb5396f8b42a9a023b177495_::_lambda_invoker_cdecl_)
                                         + 8);
}
