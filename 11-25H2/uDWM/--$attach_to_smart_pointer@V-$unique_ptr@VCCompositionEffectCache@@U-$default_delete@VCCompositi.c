/*
 * XREFs of ??$attach_to_smart_pointer@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@X@wil@@YAXAEAV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@PEAVCCompositionEffectCache@@@Z @ 0x180095590
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18009556C (--1-$out_param_t@V-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCa.c)
 * Callees:
 *     ??R?$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z @ 0x1800A9624 (--R-$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z.c)
 */

__int64 __fastcall wil::attach_to_smart_pointer<std::unique_ptr<CCompositionEffectCache>,void>(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return std::default_delete<CCompositionEffectCache>::operator()(a1, result);
  return result;
}
