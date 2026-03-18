/*
 * XREFs of ?SetOrAppendColorStops@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@AEAAJAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801C63C8
 * Callers:
 *     ?AppendColorStops@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@@Z @ 0x18024719C (-AppendColorStops@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJAEBV-$span@PEAVCCo.c)
 *     ?SetColorStops@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@@Z @ 0x18024AA48 (-SetColorStops@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJAEBV-$span@PEAVCColor.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 *     ??$_Insert_counted_range@PEAPEAVCVectorShape@@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCVectorShape@@@std@@@std@@@1@PEAPEAVCVectorShape@@_K@Z @ 0x1801C6474 (--$_Insert_counted_range@PEAPEAVCVectorShape@@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVect.c)
 *     ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x1801C665C (-InvalidateGradient@CGradientBrush@@AEAAXXZ.c)
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1802113D0 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 */

__int64 __fastcall CGradientBrushGeneratedT<CGradientBrush,CBrush>::SetOrAppendColorStops(
        struct CResource ***this,
        _QWORD *a2,
        char a3)
{
  struct CResource **v3; // rdi
  struct CResource **v7; // rbp

  v3 = (struct CResource **)a2[1];
  v7 = &v3[*a2];
  while ( v3 != v7 )
    CResource::RegisterNotifier((CResource *)this, *v3++);
  if ( !a3 )
    CResource::UnRegisterNotifiers<CTransform,1>((CResource *)this, this + 16);
  std::vector<CVectorShape *>::_Insert_counted_range<CVectorShape * *>(this + 16, this[17], a2[1], (8LL * *a2) >> 3);
  CGradientBrush::FlattenStops((CGradientBrush *)this);
  CGradientBrush::InvalidateGradient((CGradientBrush *)this);
  return 0LL;
}
