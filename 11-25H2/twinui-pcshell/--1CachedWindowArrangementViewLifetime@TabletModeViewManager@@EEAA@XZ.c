/*
 * XREFs of ??1CachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAA@XZ @ 0x1804FCDB4
 * Callers:
 *     ??_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z @ 0x1804FCF70 (--_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::~CachedWindowArrangementViewLifetime(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &TabletModeViewManager::CachedWindowArrangementViewLifetime::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( SHIsSameObject(*(struct IUnknown **)(v2 + 136), *((struct IUnknown **)this + 3)) )
  {
    IUnknown_SetSite(*(IUnknown **)(v2 + 136), 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v2 + 136));
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
