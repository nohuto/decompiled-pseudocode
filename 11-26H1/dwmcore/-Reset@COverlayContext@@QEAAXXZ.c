/*
 * XREFs of ?Reset@COverlayContext@@QEAAXXZ @ 0x18020A23C
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18020A120 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18020A1B4 (--1COverlayContext@@QEAA@XZ.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x180126B70 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180177280 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?DisableHardwareCursor@COverlayContext@@IEAAXXZ @ 0x18021C0E8 (-DisableHardwareCursor@COverlayContext@@IEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@IEAAXXZ @ 0x18021E3C4 (-ClearDirectFlip@COverlayContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  __int64 *v1; // r14
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int128 v5; // xmm0

  v1 = (__int64 *)((char *)this + 12688);
  v3 = *((_QWORD *)this + 1586);
  v4 = *((_QWORD *)this + 1587);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 16) + 288LL))(
      *(_QWORD *)(v3 + 16),
      *(_QWORD *)(v3 + 24));
    v3 += 392LL;
  }
  *((_QWORD *)this + 2415) = 0LL;
  *((_QWORD *)this + 2414) = 0LL;
  *((_BYTE *)this + 19352) = 0;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 12);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 799);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(v1);
  COverlayContext::DisableHardwareCursor(this);
  *((_QWORD *)this + 2391) = 0LL;
  v5 = *((_OWORD *)this + 1188);
  *((_WORD *)this + 9526) = 1;
  *((_OWORD *)this + 1189) = v5;
  *((_BYTE *)this + 19124) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 19176));
  COverlayContext::ClearDirectFlip(this);
  *((_BYTE *)this + 19354) = 0;
}
