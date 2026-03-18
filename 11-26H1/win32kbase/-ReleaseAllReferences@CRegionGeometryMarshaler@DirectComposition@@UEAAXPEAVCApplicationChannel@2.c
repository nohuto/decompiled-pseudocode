/*
 * XREFs of ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A3D50
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A3D00 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$0.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CRegionGeometryMarshaler::ReleaseAllReferences(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear((char *)this + 96);
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 9) = 0LL;
  }
}
