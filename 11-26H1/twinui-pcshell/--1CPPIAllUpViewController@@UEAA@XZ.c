/*
 * XREFs of ??1CPPIAllUpViewController@@UEAA@XZ @ 0x1804BCD24
 * Callers:
 *     ??_ECPPIAllUpViewController@@UEAAPEAXI@Z @ 0x1804BCD50 (--_ECPPIAllUpViewController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CPPIAllUpViewController::~CPPIAllUpViewController(CPPIAllUpViewController *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 29) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
}
