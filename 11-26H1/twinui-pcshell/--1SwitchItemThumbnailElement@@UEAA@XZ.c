/*
 * XREFs of ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1804BF7B4
 * Callers:
 *     ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x1804BFA00 (--_ESwitchItemThumbnailElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ @ 0x1802C76F4 (--1-$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ.c)
 */

void __fastcall SwitchItemThumbnailElement::~SwitchItemThumbnailElement(SwitchItemThumbnailElement *this)
{
  WeakReference::CWeakRefSource<CSwitchItemElement>::~CWeakRefSource<CSwitchItemElement>((__int64 *)this + 75);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 73);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 72);
  *((_DWORD *)this + 73) = -1073741823;
  CShrinkButtonElement::~CShrinkButtonElement(this);
}
