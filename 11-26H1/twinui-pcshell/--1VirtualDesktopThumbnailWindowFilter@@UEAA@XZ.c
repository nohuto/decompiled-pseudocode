/*
 * XREFs of ??1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ @ 0x1804AB8E0
 * Callers:
 *     ??_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z @ 0x1804ABA00 (--_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___ @ 0x1802A3740 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 */

void __fastcall VirtualDesktopThumbnailWindowFilter::~VirtualDesktopThumbnailWindowFilter(
        VirtualDesktopThumbnailWindowFilter *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)((char *)this + 72);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 8) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___((__int64)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
