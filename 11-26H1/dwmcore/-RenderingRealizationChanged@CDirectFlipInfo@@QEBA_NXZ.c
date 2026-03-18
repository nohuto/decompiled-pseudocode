/*
 * XREFs of ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D54A8
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1800D4F00 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800D59F8 (-DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800ED670 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180195420 (-GetClearMode@CLegacyRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDirectFlipInfo::RenderingRealizationChanged(CDirectFlipInfo *this)
{
  __int64 v2; // rcx
  unsigned __int64 CurrentFrameId; // rsi
  int v5; // eax
  bool v6; // zf

  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v2 + 96) != CurrentFrameId )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 320LL))(*(_QWORD *)(v2 + 16));
    v6 = *((_DWORD *)this + 23) == v5;
    *((_DWORD *)this + 23) = v5;
    *((_QWORD *)this + 12) = CurrentFrameId;
    *((_BYTE *)this + 104) = !v6;
  }
  return *((_BYTE *)this + 104);
}
