/*
 * XREFs of ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800D59F8
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D54A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801B52D4 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::DirectFlipEarlyWakeupReady(COverlayContext *this)
{
  CDirectFlipInfo *v2; // rcx
  struct IOverlaySwapChain *v4; // rax

  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 2411);
  if ( !v2 || !CDirectFlipInfo::RenderingRealizationChanged(v2) )
    return 0;
  v4 = (struct IOverlaySwapChain *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
  return CDirectFlipInfo::UseSyncIntervalAndAllowTearing(*((CDirectFlipInfo **)this + 2411), v4);
}
