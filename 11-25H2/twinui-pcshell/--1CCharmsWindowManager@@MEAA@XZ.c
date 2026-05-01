/*
 * XREFs of ??1CCharmsWindowManager@@MEAA@XZ @ 0x1802B3190
 * Callers:
 *     ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x18023C7A0 (--_ECCharmsWindowManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CCharmsWindowManager::~CCharmsWindowManager(CCharmsWindowManager *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi

  *(_QWORD *)this = &CCharmsWindowManager::`vftable';
  *((_QWORD *)this + 3) = &CCharmsWindowManager::`vftable'{for `IImmersiveCharmsWindowManager'};
  *((_QWORD *)this + 4) = &CCharmsWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICharmWindowManagerInternal>'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  *((_QWORD *)this + 6) = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v2 = (unsigned __int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 7) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 7) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
