/*
 * XREFs of ??1?$CInterfaceArray@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ @ 0x1800B1214
 * Callers:
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$4 @ 0x180165E00 (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$4.c)
 *     _CMonitorManager::HandleDeviceRemoved_::_1_::dtor$0 @ 0x180165EC9 (_CMonitorManager--HandleDeviceRemoved_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>::~CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>(
        __int64 a1)
{
  ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(a1);
}
