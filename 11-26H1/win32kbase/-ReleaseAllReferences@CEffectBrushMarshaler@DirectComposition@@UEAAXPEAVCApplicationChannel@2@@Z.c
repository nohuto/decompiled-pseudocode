/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A29D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear((char *)this + 80);
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CEffectBrushMarshaler *)((char *)this + 104),
    a2,
    1);
}
