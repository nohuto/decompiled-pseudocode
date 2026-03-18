/*
 * XREFs of ?ReleaseAllReferences@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::ReleaseAllReferences(
        char **this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 7, (__int64)a2, a3, a4);
  v6 = (struct DirectComposition::CResourceMarshaler *)this[10];
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    this[10] = 0LL;
  }
}
