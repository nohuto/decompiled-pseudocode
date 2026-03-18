/*
 * XREFs of ??1COverlayContext@@QEAA@XZ @ 0x18020A1B4
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A3EFC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x180245E38 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180176D44 (--1-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverlayC.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x18020A20C (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020A23C (-Reset@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(void **this)
{
  CResource *v2; // rcx

  COverlayContext::Reset((COverlayContext *)this);
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 2397));
  v2 = (CResource *)this[2392];
  if ( v2 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>(this + 1586);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>(this + 799);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>(this + 12);
}
