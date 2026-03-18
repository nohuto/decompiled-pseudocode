/*
 * XREFs of ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x18015D000
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x18015B7D4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

struct CShaderCache *__fastcall CPassthroughEffect::GetShaderCache(CPassthroughEffect *this)
{
  struct CShaderCache *result; // rax
  unsigned int v2; // edx
  CShaderCache *v3; // rcx

  result = CPassthroughEffect::s_spShaderCache;
  if ( !CPassthroughEffect::s_spShaderCache )
  {
    result = (struct CShaderCache *)operator new(0x20uLL);
    if ( result )
    {
      *(_QWORD *)result = 0LL;
      *((_QWORD *)result + 1) = 0LL;
      *((_DWORD *)result + 4) = 0;
      *((_QWORD *)result + 3) = result;
    }
    v3 = CPassthroughEffect::s_spShaderCache;
    CPassthroughEffect::s_spShaderCache = result;
    if ( v3 )
    {
      CShaderCache::`scalar deleting destructor'(v3, v2);
      return CPassthroughEffect::s_spShaderCache;
    }
  }
  return result;
}
