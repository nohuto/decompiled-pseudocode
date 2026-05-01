/*
 * XREFs of ??1SwitchItem@@UEAA@XZ @ 0x1804BD294
 * Callers:
 *     ??_ESwitchItem@@UEAAPEAXI@Z @ 0x1804BD390 (--_ESwitchItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F0AD8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??1?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1804BD194 (--1-$ObservableProperty@V-$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAA@XZ.c)
 */

void __fastcall SwitchItem::~SwitchItem(SwitchItem *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

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
  ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>::~ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>((__int64)this + 104);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 12);
  *((_DWORD *)this + 23) = -1073741823;
  ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>((__int64)this + 16);
}
