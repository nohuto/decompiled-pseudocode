/*
 * XREFs of ?ReleaseAllReferences@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14022D4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001FD0C (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionDynamicTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CCompositionDynamicTextureMarshaler *)((char *)this + 56));
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 10) = 0LL;
  }
}
