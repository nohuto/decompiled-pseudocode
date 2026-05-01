/*
 * XREFs of ??1CGITRegistrationList@@QEAA@XZ @ 0x180086620
 * Callers:
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x180086558 (--1FullScreenPositioner@@UEAA@XZ.c)
 *     ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1801CF900 (--1CPerMonitorDesktopVisibilityService@@UEAA@XZ.c)
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x180286BC4 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 *     ??1CFullScreenManager@@UEAA@XZ @ 0x180322580 (--1CFullScreenManager@@UEAA@XZ.c)
 *     ??1ViewPresentationMediator@@UEAA@XZ @ 0x180448F70 (--1ViewPresentationMediator@@UEAA@XZ.c)
 *     ??1MultitaskingViewVisibilityService@@UEAA@XZ @ 0x1804989F4 (--1MultitaskingViewVisibilityService@@UEAA@XZ.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x1804B0A60 (--1ObservableObjectArray@@QEAA@XZ.c)
 *     ??1TabletModePositionerManager@@UEAA@XZ @ 0x1805145BC (--1TabletModePositionerManager@@UEAA@XZ.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18059D8EC (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x1805BD100 (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
 *     _ViewPresentationMediator::ViewPresentationMediator_::_1_::dtor$4 @ 0x1806DA7AB (_ViewPresentationMediator--ViewPresentationMediator_--_1_--dtor$4.c)
 *     _ObservableObjectArray::ObservableObjectArray_::_1_::dtor$1 @ 0x1806F12D9 (_ObservableObjectArray--ObservableObjectArray_--_1_--dtor$1.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$13 @ 0x1806F81B3 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$13.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CGITRegistrationList::~CGITRegistrationList(CGITRegistrationList *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
