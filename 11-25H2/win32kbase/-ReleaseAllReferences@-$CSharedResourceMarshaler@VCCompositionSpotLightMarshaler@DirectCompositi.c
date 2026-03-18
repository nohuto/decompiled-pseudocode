/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140230B20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400F00B0 (-ReleaseAllReferences@CCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationCha.c)
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400F0604 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionSpotLightMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 25);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 25));
    *((_QWORD *)this + 25) = 0LL;
  }
  DirectComposition::CCompositionSpotLightMarshaler::ReleaseAllReferences(this, a2);
}
