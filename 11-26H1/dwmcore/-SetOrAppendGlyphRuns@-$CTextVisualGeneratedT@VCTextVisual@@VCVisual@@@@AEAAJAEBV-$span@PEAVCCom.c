/*
 * XREFs of ?SetOrAppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@_N@Z @ 0x180218E8C
 * Callers:
 *     ?AppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@@Z @ 0x180218E6C (-AppendGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposit.c)
 *     ?SetGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@@Z @ 0x180218E7C (-SetGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposition.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x18019F4C4 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendGlyphRuns(
        CResource *this,
        __int64 a2,
        char a3)
{
  struct CResource **v3; // rdi
  struct CResource **v7; // rsi

  v3 = *(struct CResource ***)(a2 + 8);
  v7 = &v3[*(_QWORD *)a2];
  while ( v3 != v7 )
    CResource::RegisterNotifier(this, *v3++);
  if ( !a3 )
    CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 84);
  std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
    (__int64)this + 672,
    *((char **)this + 85),
    *(const void **)(a2 + 8),
    (8LL * *(_QWORD *)a2) >> 3);
  CResource::NotifyOnChanged(*((_QWORD *)this + 31), 0, 0LL);
  return 0LL;
}
