/*
 * XREFs of ??1ForegroundStaging@@QEAA@XZ @ 0x1802CD134
 * Callers:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180224FDC (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180485958 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$28 @ 0x1806C8166 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$28.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ForegroundStaging::~ForegroundStaging(ForegroundStaging *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
