/*
 * XREFs of ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ @ 0x18021F140
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18015D984 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18021EE20 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 */

struct CShaderCache *__fastcall CProjectedShadowApproxBlurEffect::GetShaderCache(
        CProjectedShadowApproxBlurEffect *this)
{
  struct CShaderCache *result; // rax
  _QWORD *v2; // rax

  result = CProjectedShadowApproxBlurEffect::s_spShaderCache;
  if ( !CProjectedShadowApproxBlurEffect::s_spShaderCache )
  {
    v2 = operator new(0x20uLL);
    if ( v2 )
    {
      *v2 = 0LL;
      v2[1] = 0LL;
      *((_DWORD *)v2 + 4) = 0;
      v2[3] = v2;
    }
    std::unique_ptr<CShaderCache>::reset(&CProjectedShadowApproxBlurEffect::s_spShaderCache, (CShaderCache *)v2);
    return CProjectedShadowApproxBlurEffect::s_spShaderCache;
  }
  return result;
}
