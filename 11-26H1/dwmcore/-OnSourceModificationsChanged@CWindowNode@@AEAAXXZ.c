/*
 * XREFs of ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800DF778
 * Callers:
 *     ?SetSourceModifications@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUDCOMPOSITION_WINDOWNODE_SOURCEMODIFICATIONS@@@Z @ 0x1800DF654 (-SetSourceModifications@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUDCOMPOSITION_WIN.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ @ 0x1800E0830 (-last@-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x1800E0920 (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 */

void __fastcall CWindowNode::OnSourceModificationsChanged(CWindowNode *this)
{
  const struct CColorKey *v1; // rbp
  CGdiSpriteBitmap **v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // [rsp+40h] [rbp-18h]

  v1 = (CWindowNode *)((char *)this + 840);
  if ( (*((_BYTE *)this + 764) & 2) != 0 )
  {
    v5 = *((_DWORD *)this + 192);
    *((float *)this + 213) = (float)HIBYTE(v5) / 255.0;
    *(float *)v1 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)v5] / 255.0;
    *((float *)this + 211) = GammaLUT_sRGB_to_scRGB[BYTE1(v5)] / 255.0;
    *((float *)this + 212) = GammaLUT_sRGB_to_scRGB[BYTE2(v5)] / 255.0;
    v6 = *((_DWORD *)this + 193);
    *((float *)this + 217) = (float)HIBYTE(v6) / 255.0;
    *((float *)this + 214) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)v6] / 255.0;
    *((float *)this + 215) = GammaLUT_sRGB_to_scRGB[BYTE1(v6)] / 255.0;
    *((float *)this + 216) = GammaLUT_sRGB_to_scRGB[BYTE2(v6)] / 255.0;
    if ( (*((_BYTE *)this + 764) & 4) != 0 )
      *((_BYTE *)this + 872) = 1;
  }
  else
  {
    *(__m128i *)v1 = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v7) = 0;
    *(_OWORD *)((char *)this + 856) = 0LL;
    *((_DWORD *)this + 218) = v7;
  }
  v3 = (CGdiSpriteBitmap **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
  v4 = detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::last((char *)this + 824);
  while ( v3 != (CGdiSpriteBitmap **)v4 )
    CGdiSpriteBitmap::SetColorKey(*v3++, (*((_DWORD *)this + 191) & 2) != 0, v1);
  CVisual::ClearContentTreeDataCaches(this);
  CVisual::PropagateFlags((__int64)this, 4u);
}
