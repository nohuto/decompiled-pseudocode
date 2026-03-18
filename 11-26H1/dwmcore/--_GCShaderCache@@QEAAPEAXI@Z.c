/*
 * XREFs of ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800ABE2C (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x18015D000 (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     _dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache__ @ 0x1801DD120 (_dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache__.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18021EE20 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 *     ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x18021F244 (--1-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spShaderCache__ @ 0x1802B9C50 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spShaderCache__.c)
 *     _dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache__ @ 0x1802B9C80 (_dynamic_atexit_destructor_for__CPassthroughEffect--s_spShaderCache__.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache__ @ 0x1802B9D80 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredShaderCache__.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredShaderCache__ @ 0x1802B9DB0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredShaderCache__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CShaderCache *__fastcall CShaderCache::`scalar deleting destructor'(CShaderCache *this)
{
  int i; // edi
  void *v3; // rcx

  if ( *(_QWORD *)this )
  {
    for ( i = 0; i < *((_DWORD *)this + 4); ++i )
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)(*((_QWORD *)this + 1)
                                                                                         + 8LL * i));
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  operator delete(this, 0x20uLL);
  return this;
}
