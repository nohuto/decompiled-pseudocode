/*
 * XREFs of ??1CPlaceModeButtonAcc@@MEAA@XZ @ 0x180549214
 * Callers:
 *     ??_GCPlaceModeButtonAcc@@MEAAPEAXI@Z @ 0x180549330 (--_GCPlaceModeButtonAcc@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall CPlaceModeButtonAcc::~CPlaceModeButtonAcc(CPlaceModeButtonAcc *this)
{
  *(_QWORD *)this = &CPlaceModeButtonAcc::`vftable'{for `IRawElementProviderSimple'};
  *((_QWORD *)this + 1) = &CPlaceModeButtonAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>'};
  *((_QWORD *)this + 2) = &CPlaceModeButtonAcc::`vftable'{for `IInvokeProvider'};
  *((_QWORD *)this + 3) = &CPlaceModeButtonAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPlaceModeButtonAcc>'};
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 72);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
}
