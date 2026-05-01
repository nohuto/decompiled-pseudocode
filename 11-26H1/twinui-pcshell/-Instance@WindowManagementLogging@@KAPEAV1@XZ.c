/*
 * XREFs of ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800704FC
 * Callers:
 *     ?StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ @ 0x18006F278 (-StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x18006F420 (-StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ??$HitTestPartNotifyEvent@AEB_KAEBHAEBE@CSnapComponentTelemetry@@SAXAEB_KAEBHAEBE@Z @ 0x18006FB68 (--$HitTestPartNotifyEvent@AEB_KAEBHAEBE@CSnapComponentTelemetry@@SAXAEB_KAEBHAEBE@Z.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x18006FC9C (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18007CD18 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ??$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z @ 0x1800E34F0 (--$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

struct WindowManagementLogging *WindowManagementLogging::Instance(void)
{
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  if ( __std_init_once_begin_initialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v2, &v3) && v2 )
  {
    qword_1808DB458 = 0LL;
    v3 = &qword_1808DB450;
    qword_1808DB450 = &GamingPostureUXTelemetryProvider::`vftable';
    byte_1808DB460 = 0;
    dword_1808DB464 = 0;
    qword_1808DB468 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DB450, qword_1808DB468, v1);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1808DB450);
  }
  return (struct WindowManagementLogging *)v3;
}
