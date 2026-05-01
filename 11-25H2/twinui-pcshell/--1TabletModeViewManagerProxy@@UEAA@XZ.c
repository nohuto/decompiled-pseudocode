/*
 * XREFs of ??1TabletModeViewManagerProxy@@UEAA@XZ @ 0x18048D564
 * Callers:
 *     ??_ETabletModeViewManagerProxy@@UEAAPEAXI@Z @ 0x18048D590 (--_ETabletModeViewManagerProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall TabletModeViewManagerProxy::~TabletModeViewManagerProxy(TabletModeViewManagerProxy *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
