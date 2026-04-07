/*
 * XREFs of ??R?$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z @ 0x1800A6FC0
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180076B24 (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x180079794 (--1-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCache@@@std@@@std.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@X@wil@@YAXAEAV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@PEAVCCompositionEffectCache@@@Z @ 0x180087A44 (--$attach_to_smart_pointer@V-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositi.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800A6F5C (--1CCompositionEffectCache@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CCompositionEffectCache>::operator()(__int64 a1, CCompositionEffectCache *a2)
{
  if ( a2 )
  {
    CCompositionEffectCache::~CCompositionEffectCache(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x50);
  }
}
