/*
 * XREFs of ??1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ @ 0x140277604
 * Callers:
 *     ??_EUsb4HostRouterPoFxRefv2@DxgMonitor@@UEAAPEAXI@Z @ 0x140098B40 (--_EUsb4HostRouterPoFxRefv2@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004A500 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ @ 0x1402782A4 (-OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ.c)
 */

void __fastcall DxgMonitor::Usb4HostRouterPoFxRefv2::~Usb4HostRouterPoFxRefv2(
        DxgMonitor::Usb4HostRouterPoFxRefv2 *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = &DxgMonitor::Usb4HostRouterPoFxRefv2::`vftable';
  if ( !v1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 702;
  }
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 703;
  }
  DxgMonitor::Usb4HostRouterPoFxRefv2::OnCleanup(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((DxgMonitor::Usb4HostRouterPoFxRefv2 *)((char *)this + 48));
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)this + 4);
  ReferenceCounted::~ReferenceCounted(this);
}
