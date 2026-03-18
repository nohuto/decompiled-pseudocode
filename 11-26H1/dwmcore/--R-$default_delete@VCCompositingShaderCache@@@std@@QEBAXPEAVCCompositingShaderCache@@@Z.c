/*
 * XREFs of ??R?$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z @ 0x1802B3BF0
 * Callers:
 *     ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z @ 0x180153914 (-EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z.c)
 *     _dynamic_atexit_destructor_for__g_spCompositingShaderCache__ @ 0x1802B9CB0 (_dynamic_atexit_destructor_for__g_spCompositingShaderCache__.c)
 * Callees:
 *     ??1CCompositingShaderCache@@QEAA@XZ @ 0x1802146F0 (--1CCompositingShaderCache@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CCompositingShaderCache>::operator()(__int64 a1, CCompositingShaderCache *a2)
{
  if ( a2 )
  {
    CCompositingShaderCache::~CCompositingShaderCache(a2);
    operator delete(a2);
  }
}
