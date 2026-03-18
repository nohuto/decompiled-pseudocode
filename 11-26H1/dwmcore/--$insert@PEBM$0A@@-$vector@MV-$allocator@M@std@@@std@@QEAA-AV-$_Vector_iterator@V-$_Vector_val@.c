/*
 * XREFs of ??$insert@PEBM$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1@Z @ 0x18024570C
 * Callers:
 *     ?SetOrAppendIndexes@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801E1A54 (-SetOrAppendIndexes@-$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@AEAAJAEBV-$span@$$CBI$0-0.c)
 *     ?SetOrAppendFlags@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021D5E0 (-SetOrAppendFlags@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV-$span@$$CBI$0-.c)
 *     ?SetOrAppendInertiaModifierPositionXYModifiers@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021D670 (-SetOrAppendInertiaModifierPositionXYModifiers@-$CInteractionTracker2GeneratedT@VCInteractionTra.c)
 *     ?SetOrAppendGreenTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@AEAAJAEBV?$span@$$CBM$0?0@gsl@@_N@Z @ 0x18021D700 (-SetOrAppendGreenTable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@.c)
 *     ?SetOrAppendRedTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@AEAAJAEBV?$span@$$CBM$0?0@gsl@@_N@Z @ 0x18021D790 (-SetOrAppendRedTable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@A.c)
 *     ?SetOrAppendSurfaceInputsIds@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021D8B0 (-SetOrAppendSurfaceInputsIds@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV-$sp.c)
 *     ?SetOrAppendBlueTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@AEAAJAEBV?$span@$$CBM$0?0@gsl@@_N@Z @ 0x18021D934 (-SetOrAppendBlueTable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@.c)
 *     ?SetOrAppendAlphaTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@AEAAJAEBV?$span@$$CBM$0?0@gsl@@_N@Z @ 0x18021D9C4 (-SetOrAppendAlphaTable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@.c)
 *     ?SetOrAppendInertiaModifierScaleModifiers@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DA54 (-SetOrAppendInertiaModifierScaleModifiers@-$CInteractionTracker2GeneratedT@VCInteractionTracker2.c)
 *     ?SetOrAppendFilterEffectInputsIds@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DAE4 (-SetOrAppendFilterEffectInputsIds@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEB.c)
 *     ?SetOrAppendManipulationsToInteractions@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DB68 (-SetOrAppendManipulationsToInteractions@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@.c)
 *     ?SetOrAppendInputConfigIds@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DBF8 (-SetOrAppendInputConfigIds@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV-$span.c)
 *     ?SetOrAppendInertiaModifierPositionXModifiers@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DC88 (-SetOrAppendInertiaModifierPositionXModifiers@-$CInteractionTracker2GeneratedT@VCInteractionTrac.c)
 *     ?SetOrAppendInertiaModifierPositionYModifiers@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DDA0 (-SetOrAppendInertiaModifierPositionYModifiers@-$CInteractionTracker2GeneratedT@VCInteractionTrac.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@I@std@@@std@@@1@PEBI_K@Z @ 0x1801E7B2C (--$_Insert_counted_range@PEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 */

_QWORD *__fastcall std::vector<float>::insert<float const *,0>(
        char **a1,
        _QWORD *a2,
        char *a3,
        const void *a4,
        __int64 a5)
{
  __int64 v6; // rbx

  v6 = (a3 - *a1) >> 2;
  std::vector<unsigned int>::_Insert_counted_range<unsigned int const *>(a1, a3, a4, (a5 - (__int64)a4) >> 2);
  *a2 = &(*a1)[4 * v6];
  return a2;
}
