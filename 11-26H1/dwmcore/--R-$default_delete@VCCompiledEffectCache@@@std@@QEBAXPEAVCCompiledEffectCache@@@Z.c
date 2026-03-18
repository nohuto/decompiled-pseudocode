/*
 * XREFs of ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1802450E8
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801979A0 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCCompiledEffectCache@@U?$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA@XZ @ 0x180244FB0 (--1-$unique_ptr@VCCompiledEffectCache@@U-$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompiledEffectCache@@QEAA@XZ @ 0x180244FD0 (--1CCompiledEffectCache@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CCompiledEffectCache>::operator()(__int64 a1, CCompiledEffectCache *a2)
{
  if ( a2 )
  {
    CCompiledEffectCache::~CCompiledEffectCache(a2);
    operator delete(a2);
  }
}
