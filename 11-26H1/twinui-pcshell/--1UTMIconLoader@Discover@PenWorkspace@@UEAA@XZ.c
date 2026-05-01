/*
 * XREFs of ??1UTMIconLoader@Discover@PenWorkspace@@UEAA@XZ @ 0x1803EF5F4
 * Callers:
 *     ??_EUTMIconLoader@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803EF630 (--_EUTMIconLoader@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PenWorkspace::Discover::UTMIconLoader::~UTMIconLoader(PenWorkspace::Discover::UTMIconLoader *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 5);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
