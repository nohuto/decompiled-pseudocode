/*
 * XREFs of ?clear@?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18021B9D0
 * Callers:
 *     ??1?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18021B9AC (--1-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail.c)
 *     ?SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@_N@Z @ 0x18026E718 (-SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV-$span@PEAVCBrush@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18026E8F8 (-clear_region@-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_po.c)
 */

__int64 __fastcall detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 3 )
    return detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::clear_region();
  return result;
}
