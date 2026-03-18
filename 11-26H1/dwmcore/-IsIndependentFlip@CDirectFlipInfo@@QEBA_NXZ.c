/*
 * XREFs of ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D595C
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1800D4F00 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ @ 0x1800D5870 (-EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801B4E54 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1802516BC (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDirectFlipInfo::IsIndependentFlip(CDirectFlipInfo *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 352LL))(*((_QWORD *)this + 2));
}
