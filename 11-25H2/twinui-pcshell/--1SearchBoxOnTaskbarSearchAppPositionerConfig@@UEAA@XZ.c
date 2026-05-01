/*
 * XREFs of ??1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ @ 0x1803C5D18
 * Callers:
 *     ??_GSearchBoxOnTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803C5D90 (--_GSearchBoxOnTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::~SearchBoxOnTaskbarSearchAppPositionerConfig(
        SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
  *(_QWORD *)this = &ISearchAppPositionerConfig::`vftable';
}
