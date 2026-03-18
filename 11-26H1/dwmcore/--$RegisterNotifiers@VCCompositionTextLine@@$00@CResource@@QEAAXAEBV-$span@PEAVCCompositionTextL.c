/*
 * XREFs of ??$RegisterNotifiers@VCCompositionTextLine@@$00@CResource@@QEAAXAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x18020ECDC
 * Callers:
 *     ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x18020EBA4 (-SetOrAppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCo.c)
 *     ?SetOrAppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x18020EC50 (-SetOrAppendStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEA.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::RegisterNotifiers<CCompositionTextLine,1>(CResource *this, _QWORD *a2)
{
  struct CResource **v2; // rbx
  struct CResource **v4; // rdi

  v2 = (struct CResource **)a2[1];
  v4 = &v2[*a2];
  while ( v2 != v4 )
    CResource::RegisterNotifier(this, *v2++);
}
