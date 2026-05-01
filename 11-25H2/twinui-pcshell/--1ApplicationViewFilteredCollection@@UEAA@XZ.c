/*
 * XREFs of ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x180598E88
 * Callers:
 *     ??_EApplicationViewFilteredCollection@@UEAAPEAXI@Z @ 0x180599020 (--_EApplicationViewFilteredCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18008BD68 (--1CGITRegistrationList@@QEAA@XZ.c)
 *     ??1?$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistration@@@EventRegistrationHelpers@@QEAA@XZ @ 0x18049DB34 (--1-$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistra.c)
 */

void __fastcall ApplicationViewFilteredCollection::~ApplicationViewFilteredCollection(
        ApplicationViewFilteredCollection *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi

  CGITRegistrationList::~CGITRegistrationList((ApplicationViewFilteredCollection *)((char *)this + 128));
  EventRegistrationHelpers::EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>::~EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>((__int64)this + 112);
  v2 = (unsigned __int64 *)((char *)this + 88);
  if ( *((_QWORD *)this + 10) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*((_QWORD *)this + 10) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this + 32);
}
