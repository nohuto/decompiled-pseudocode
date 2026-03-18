/*
 * XREFs of ?ReleaseAllReferences@CPositionedLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234DD0
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BD10 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCDistantLightMarshaler@DirectComposition@@$01@.c)
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BDF0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCPointLightMarshaler@DirectComposition@@$01@Di.c)
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BF30 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCSpotLightMarshaler@DirectComposition@@$01@Dir.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234D90 (-ReleaseAllReferences@CLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CPositionedLightMarshaler::ReleaseAllReferences(
        DirectComposition::CPositionedLightMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 14) = 0LL;
  }
  DirectComposition::CLightMarshaler::ReleaseAllReferences(
    this,
    (struct DirectComposition::CApplicationChannel *)a2,
    a3,
    a4);
}
