/*
 * XREFs of ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x18015D790
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18015BC9C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18021EE20 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 */

struct CShaderCache *__fastcall CCustomKernelEffect::GetShaderCache(CCustomKernelEffect *this)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  char *v3; // rbx
  _QWORD *v4; // rax

  v1 = 0LL;
  v2 = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 4;
  if ( v2 <= 8 )
    v1 = (unsigned int)v2;
  v3 = (char *)&CCustomKernelEffect::s_rgspCache + 8 * v1;
  if ( !*(_QWORD *)v3 )
  {
    v4 = operator new(0x20uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      v4[3] = v4;
    }
    std::unique_ptr<CShaderCache>::reset(v3, v4);
  }
  return *(struct CShaderCache **)v3;
}
