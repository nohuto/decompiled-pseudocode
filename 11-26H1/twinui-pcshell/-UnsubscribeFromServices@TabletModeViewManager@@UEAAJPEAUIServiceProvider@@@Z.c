/*
 * XREFs of ?UnsubscribeFromServices@TabletModeViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180520DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModeViewManager::UnsubscribeFromServices(
        TabletModeViewManager *this,
        struct IServiceProvider *a2)
{
  (*(void (__fastcall **)(char *, struct IServiceProvider *))(*((_QWORD *)this + 8) + 64LL))((char *)this + 64, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  return 0LL;
}
