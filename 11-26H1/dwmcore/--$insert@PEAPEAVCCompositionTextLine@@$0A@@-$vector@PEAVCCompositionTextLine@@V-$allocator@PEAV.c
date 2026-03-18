/*
 * XREFs of ??$insert@PEAPEAVCCompositionTextLine@@$0A@@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1@Z @ 0x1802456AC
 * Callers:
 *     ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x18020EBA4 (-SetOrAppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCo.c)
 *     ?SetOrAppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x18020EC50 (-SetOrAppendStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEA.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAPEAVCVectorShape@@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCVectorShape@@@std@@@std@@@1@PEAPEAVCVectorShape@@_K@Z @ 0x1801C6474 (--$_Insert_counted_range@PEAPEAVCVectorShape@@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVect.c)
 */

_QWORD *__fastcall std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,0>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        const void *a4,
        __int64 a5)
{
  __int64 v6; // rbx

  v6 = (__int64)&a3[-*a1] >> 3;
  std::vector<CVectorShape *>::_Insert_counted_range<CVectorShape * *>((__int64)a1, a3, a4, (a5 - (__int64)a4) >> 3);
  *a2 = *a1 + 8 * v6;
  return a2;
}
