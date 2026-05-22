/*
 * XREFs of ??1MPCSpatialGestureRecognizerHandler@@UEAA@XZ @ 0x1800C2528
 * Callers:
 *     ??_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z @ 0x1800C25B0 (--_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UnregisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x1800C43D4 (-UnregisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::~MPCSpatialGestureRecognizerHandler(
        MPCSpatialGestureRecognizerHandler *this)
{
  *(_QWORD *)this = &MPCSpatialGestureRecognizerHandler::`vftable';
  MPCSpatialGestureRecognizerHandler::UnregisterSpatialEventHandlers(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
