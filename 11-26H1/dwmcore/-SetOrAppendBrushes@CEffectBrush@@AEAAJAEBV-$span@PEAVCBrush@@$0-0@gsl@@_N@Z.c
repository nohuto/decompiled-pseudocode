/*
 * XREFs of ?SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@_N@Z @ 0x18026E718
 * Callers:
 *     ?AppendBrushes@CEffectBrush@@QEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@@Z @ 0x18024718C (-AppendBrushes@CEffectBrush@@QEAAJAEBV-$span@PEAVCBrush@@$0-0@gsl@@@Z.c)
 *     ?SetBrushes@CEffectBrush@@QEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@@Z @ 0x18024A4BC (-SetBrushes@CEffectBrush@@QEAAJAEBV-$span@PEAVCBrush@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z @ 0x1801B5C70 (-IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?CreatesCycle@CBrush@@IEAA_NPEAV1@@Z @ 0x1801D3200 (-CreatesCycle@CBrush@@IEAA_NPEAV1@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18021B9D0 (-clear@-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@de.c)
 *     ?OnBrushesChanged@CEffectBrush@@QEAAXXZ @ 0x18026E2E8 (-OnBrushesChanged@CEffectBrush@@QEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCBrush@@_K0@Z @ 0x18026EB20 (-reserve_region@-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_.c)
 */

__int64 __fastcall CEffectBrush::SetOrAppendBrushes(CEffectBrush *this, __int64 *a2, char a3)
{
  const struct CResource **v3; // rbx
  const struct CResource **v7; // r15
  struct CBrush *v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // r8
  _QWORD *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (const struct CResource **)a2[1];
  v7 = &v3[*a2];
  while ( v3 != v7 )
  {
    v8 = *v3;
    if ( !CEffectBrush::IsValidInputResource(*v3) || CBrush::CreatesCycle(this, v8) )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xCA,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
        (const char *)0x80070057LL);
      return 0LL;
    }
    ++v3;
  }
  if ( !a3 )
    detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 27);
  v9 = (_QWORD *)a2[1];
  v10 = *a2;
  v11 = &v9[v10];
  v12 = detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::reserve_region(
          (char *)this + 216,
          (__int64)(*((_QWORD *)this + 28) - *((_QWORD *)this + 27)) >> 3,
          (v10 * 8) >> 3);
  if ( v9 != v11 )
  {
    v13 = v12 - (_QWORD)v9;
    do
    {
      *(_QWORD *)((char *)v9 + v13) = *v9;
      ++v9;
    }
    while ( v9 != v11 );
  }
  CEffectBrush::OnBrushesChanged(this);
  return 0LL;
}
