/*
 * XREFs of ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1800FAE08
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034B8C (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180035C58 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1800FAF30 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 *     ??$emplace_back@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAAAEAUPlane@CDDisplayCachedScanout@@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802AA550 (--$emplace_back@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScanout@@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplayCachedScanout::Set(
        CDDisplayCachedScanout *this,
        unsigned int a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        __int64 a4,
        unsigned int a5,
        struct Windows::Devices::Display::Core::IDisplayScanout *a6)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v10; // rdi

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this != v8 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*(_QWORD *)this, v8);
    *((_QWORD *)this + 1) = *(_QWORD *)this;
  }
  if ( (_DWORD)v6 )
  {
    do
    {
      std::vector<CDDisplayCachedScanout::Plane>::emplace_back<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(this, a3);
      a3 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)a3 + 128);
      --v6;
    }
    while ( v6 );
  }
  *((_QWORD *)this + 4) = 1LL;
  v10 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)a6 + 8LL))(a6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
