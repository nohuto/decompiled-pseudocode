/*
 * XREFs of ??1CScrollButtonContainer@@UEAA@XZ @ 0x1804D7A3C
 * Callers:
 *     ??_ECScrollButtonContainer@@UEAAPEAXI@Z @ 0x1804D7AA0 (--_ECScrollButtonContainer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ @ 0x1802C76F4 (--1-$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ.c)
 */

void __fastcall CScrollButtonContainer::~CScrollButtonContainer(CScrollButtonContainer *this)
{
  WeakReference::CWeakRefSource<CSwitchItemElement>::~CWeakRefSource<CSwitchItemElement>((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
