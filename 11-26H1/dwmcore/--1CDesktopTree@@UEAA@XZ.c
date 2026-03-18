/*
 * XREFs of ??1CDesktopTree@@UEAA@XZ @ 0x18025FE94
 * Callers:
 *     ??_GCDesktopTree@@UEAAPEAXI@Z @ 0x1802467D0 (--_GCDesktopTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180054C0C (--1-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800AEE58 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??1?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180140ECC (--1-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expan.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18021BDDC (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ @ 0x180245DC4 (--1-$unique_ptr@VCComposeTop@@U-$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180245DE4 (--1-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_pol.c)
 */

void __fastcall CDesktopTree::~CDesktopTree(CDesktopTree *this)
{
  CVisual **v1; // rdi
  bool v3; // zf

  v1 = (CVisual **)((char *)this + 2640);
  v3 = *((_QWORD *)this + 330) == 0LL;
  *(_QWORD *)this = &CDesktopTree::`vftable';
  if ( !v3 )
  {
    CDesktopTree::SetRoot((CVisual **)this, 0LL);
    CVisual::SetVisualTreeNoRef(*v1, 0LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v1);
  }
  *((_QWORD *)this + 9) = 0LL;
  detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>((__int64 *)this + 598);
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::~vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>((__int64 *)this + 515);
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>((__int64 *)this + 507);
  std::unique_ptr<CComposeTop>::~unique_ptr<CComposeTop>((_QWORD *)this + 506);
  COcclusionContext::~COcclusionContext((CDesktopTree *)((char *)this + 2648));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v1);
  CVisualTree::~CVisualTree(this);
}
