/*
 * XREFs of ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x180079794
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 *     _CCompositionEffectCache::Create_::_1_::dtor$0 @ 0x1800E812A (_CCompositionEffectCache--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z @ 0x1800A6FC0 (--R-$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CCompositionEffectCache>::~unique_ptr<CCompositionEffectCache>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CCompositionEffectCache>::operator()(a1, *a1);
  return result;
}
