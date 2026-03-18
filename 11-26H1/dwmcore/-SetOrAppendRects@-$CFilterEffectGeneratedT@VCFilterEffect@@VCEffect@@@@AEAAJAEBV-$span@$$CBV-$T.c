/*
 * XREFs of ?SetOrAppendRects@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@_N@Z @ 0x18021D820
 * Callers:
 *     ?SetRects@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18021D800 (-SetRects@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV-$span@$$CBV-$TMilRect_.c)
 *     ?AppendRects@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18021D810 (-AppendRects@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV-$span@$$CBV-$TMilRe.c)
 * Callees:
 *     ??$insert@PEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0A@@?$vector@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@1@PEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@1@Z @ 0x1801B6730 (--$insert@PEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniquene.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::SetOrAppendRects(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = a1[23];
    if ( v4 != a1[24] )
      a1[24] = v4;
  }
  std::vector<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>>::insert<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_> const *,0>(
    a1 + 23,
    &v6,
    a1[24],
    a2[1],
    a2[1] + 16LL * *a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}
