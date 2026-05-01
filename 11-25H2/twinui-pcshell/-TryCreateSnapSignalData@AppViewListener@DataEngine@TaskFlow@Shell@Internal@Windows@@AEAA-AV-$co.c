/*
 * XREFs of ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1803F3060
 * Callers:
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1803F3450 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C1804 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1803ED2A0 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x1803F0E74 (--$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1803F1498 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?get_system_time@filetime@wil@@YA?AU_FILETIME@@XZ @ 0x1803F3668 (-get_system_time@filetime@wil@@YA-AU_FILETIME@@XZ.c)
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1803F514C (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
struct IApplicationView *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 WindowForView; // rax
  wil::filetime *v7; // rcx
  __int64 v8; // rsi
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _FILETIME system_time; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  struct IApplicationView *v16; // [rsp+78h] [rbp+10h]
  unsigned int v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v12 = 0LL;
  LOWORD(v15) = 0;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a4, a2);
  v8 = WindowForView;
  if ( WindowForView )
  {
    v13[1] = WindowForView;
    system_time = wil::filetime::get_system_time(v7);
    v10 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData)(
                       v13,
                       a3,
                       system_time,
                       v8);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
      &v12,
      v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>((__int64)&v17);
    LOBYTE(v15) = 1;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v15);
    v11 = v12;
    v12 = 0LL;
    *(_QWORD *)a2 = v11;
  }
  else
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle((__int64)v7);
    BYTE1(v15) = 1;
    *(_QWORD *)a2 = 0LL;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v15);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  return a2;
}
