/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004A500
 * Callers:
 *     ??1DISPLAY_MUX_DEVICE@@QEAA@XZ @ 0x140089FBC (--1DISPLAY_MUX_DEVICE@@QEAA@XZ.c)
 *     ??1DISPLAY_MUX_MGR@@QEAA@XZ @ 0x14008A034 (--1DISPLAY_MUX_MGR@@QEAA@XZ.c)
 *     InvalidateChildRelationsOnAdapterCallback @ 0x1401CF3B0 (InvalidateChildRelationsOnAdapterCallback.c)
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     ??1USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x1402775A8 (--1USB4_POWERON_WORK_QUEUE@@QEAA@XZ.c)
 *     ??1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ @ 0x140277604 (--1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ.c)
 *     ?GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x140277F9C (-GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1402799D0 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>(
        DxgkCompositionObject **a1)
{
  DxgkCompositionObject *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return DxgkCompositionObject::Release(v1);
  return result;
}
