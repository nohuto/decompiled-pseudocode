/*
 * XREFs of ??1VirtualDesktopItem@@UEAA@XZ @ 0x1804ACB88
 * Callers:
 *     ??_GVirtualDesktopItem@@UEAAPEAXI@Z @ 0x1804ACCC0 (--_GVirtualDesktopItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F5B88 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall VirtualDesktopItem::~VirtualDesktopItem(VirtualDesktopItem *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi

  v1 = (unsigned __int64 *)((char *)this + 160);
  if ( *((_QWORD *)this + 19) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 19)
                                                                                                  + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 15); ++j )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 14)
                                                                                                  + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
  *((_DWORD *)this + 21) = -1073741823;
  ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>((__int64)this + 16);
}
