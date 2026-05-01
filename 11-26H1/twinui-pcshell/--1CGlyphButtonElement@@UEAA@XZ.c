/*
 * XREFs of ??1CGlyphButtonElement@@UEAA@XZ @ 0x1804CF8BC
 * Callers:
 *     ??_ECGlyphButtonElement@@UEAAPEAXI@Z @ 0x1804CFCD0 (--_ECGlyphButtonElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CGlyphButtonElement::~CGlyphButtonElement(CGlyphButtonElement *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 49);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
