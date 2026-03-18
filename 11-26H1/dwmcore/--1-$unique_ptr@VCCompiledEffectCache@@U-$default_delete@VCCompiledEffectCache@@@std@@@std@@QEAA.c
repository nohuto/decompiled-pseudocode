/*
 * XREFs of ??1?$unique_ptr@VCCompiledEffectCache@@U?$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA@XZ @ 0x180244FB0
 * Callers:
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180245048 (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1802450E8 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CCompiledEffectCache>::~unique_ptr<CCompiledEffectCache>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CCompiledEffectCache>::operator()();
  return result;
}
