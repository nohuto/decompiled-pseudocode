/*
 * XREFs of ??R?$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z @ 0x1800A9624
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180086B9C (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x18008A8D0 (--1-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCache@@@std@@@std.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@X@wil@@YAXAEAV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@PEAVCCompositionEffectCache@@@Z @ 0x180095590 (--$attach_to_smart_pointer@V-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositi.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800A9588 (--1CCompositionEffectCache@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CCompositionEffectCache>::operator()(__int64 a1, CCompositionEffectCache *a2)
{
  const struct std::nothrow_t *v3; // rdx

  if ( a2 )
  {
    CCompositionEffectCache::~CCompositionEffectCache(a2);
    CDisplayBlackCurtainAnimatedVisual::operator delete(a2, v3);
  }
}
