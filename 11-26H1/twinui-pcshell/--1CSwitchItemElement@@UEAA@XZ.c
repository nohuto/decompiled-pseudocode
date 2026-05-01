/*
 * XREFs of ??1CSwitchItemElement@@UEAA@XZ @ 0x1804B5464
 * Callers:
 *     ??_ECSwitchItemElement@@UEAAPEAXI@Z @ 0x1804B5620 (--_ECSwitchItemElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ @ 0x1802C76F4 (--1-$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ.c)
 */

void __fastcall CSwitchItemElement::~CSwitchItemElement(CSwitchItemElement *this)
{
  WeakReference::CWeakRefSource<CSwitchItemElement>::~CWeakRefSource<CSwitchItemElement>((__int64 *)this + 83);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 78);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 77);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 76);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 75);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 73);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 72);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 71);
  *((_DWORD *)this + 61) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
