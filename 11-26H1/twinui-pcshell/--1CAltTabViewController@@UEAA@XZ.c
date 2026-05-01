/*
 * XREFs of ??1CAltTabViewController@@UEAA@XZ @ 0x1804B6798
 * Callers:
 *     ??_GCAltTabViewController@@UEAAPEAXI@Z @ 0x1804B6880 (--_GCAltTabViewController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CAltTabViewController::~CAltTabViewController(CAltTabViewController *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 29) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
}
