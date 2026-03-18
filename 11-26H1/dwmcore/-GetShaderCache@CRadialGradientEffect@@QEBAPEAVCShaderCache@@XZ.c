/*
 * XREFs of ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802B36E0
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BC64 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18021EE20 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 */

struct CShaderCache *__fastcall CRadialGradientEffect::GetShaderCache(CRadialGradientEffect *this)
{
  struct CShaderCache *result; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  if ( *((_BYTE *)this + 60) )
  {
    result = CRadialGradientEffect::s_spCenteredShaderCache;
    if ( !CRadialGradientEffect::s_spCenteredShaderCache )
    {
      v2 = operator new(0x20uLL);
      if ( v2 )
      {
        *v2 = 0LL;
        v2[1] = 0LL;
        *((_DWORD *)v2 + 4) = 0;
        v2[3] = v2;
      }
      std::unique_ptr<CShaderCache>::reset(&CRadialGradientEffect::s_spCenteredShaderCache, (CShaderCache *)v2);
      return CRadialGradientEffect::s_spCenteredShaderCache;
    }
  }
  else
  {
    result = CRadialGradientEffect::s_spNonCenteredShaderCache;
    if ( !CRadialGradientEffect::s_spNonCenteredShaderCache )
    {
      v3 = operator new(0x20uLL);
      if ( v3 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
        *((_DWORD *)v3 + 4) = 0;
        v3[3] = v3;
      }
      std::unique_ptr<CShaderCache>::reset(&CRadialGradientEffect::s_spNonCenteredShaderCache, (CShaderCache *)v3);
      return CRadialGradientEffect::s_spNonCenteredShaderCache;
    }
  }
  return result;
}
