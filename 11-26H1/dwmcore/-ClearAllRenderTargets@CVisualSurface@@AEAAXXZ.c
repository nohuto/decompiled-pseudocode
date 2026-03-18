/*
 * XREFs of ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x18009A268
 * Callers:
 *     ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099E8C (-SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x18020E52C (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18009B5B8 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CVisualSurface::ClearAllRenderTargets(CVisualSurface *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi

  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v2 = (_QWORD *)*((_QWORD *)this + 12);
  while ( v1 != v2 )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(*v1 + 168LL);
    v1 += 2;
  }
}
