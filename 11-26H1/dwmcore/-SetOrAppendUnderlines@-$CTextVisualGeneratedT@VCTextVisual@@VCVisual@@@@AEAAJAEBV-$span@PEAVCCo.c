/*
 * XREFs of ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x18020EBA4
 * Callers:
 *     ?SetUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x18020EB84 (-SetUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCCompositio.c)
 *     ?AppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x18020EB94 (-AppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposi.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 *     ??$RegisterNotifiers@VCCompositionTextLine@@$00@CResource@@QEAAXAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x18020ECDC (--$RegisterNotifiers@VCCompositionTextLine@@$00@CResource@@QEAAXAEBV-$span@PEAVCCompositionTextL.c)
 *     ??$insert@PEAPEAVCCompositionTextLine@@$0A@@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1@Z @ 0x1802456AC (--$insert@PEAPEAVCCompositionTextLine@@$0A@@-$vector@PEAVCCompositionTextLine@@V-$allocator@PEAV.c)
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendUnderlines(
        CResource *this,
        _QWORD *a2,
        char a3)
{
  char v7; // [rsp+58h] [rbp+20h] BYREF

  CResource::RegisterNotifiers<CCompositionTextLine,1>(this);
  if ( !a3 )
    CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 90);
  std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,0>(
    (_DWORD)this + 720,
    (unsigned int)&v7,
    *((_QWORD *)this + 91),
    a2[1],
    a2[1] + 8LL * *a2);
  CResource::NotifyOnChanged(*((_QWORD *)this + 31), 0, 0LL);
  return 0LL;
}
