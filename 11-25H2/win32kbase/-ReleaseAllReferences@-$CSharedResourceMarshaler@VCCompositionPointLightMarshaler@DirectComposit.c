/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140230AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400F0604 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x14023A190 (-ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 20));
    *((_QWORD *)this + 20) = 0LL;
  }
  DirectComposition::CCompositionPointLightMarshaler::ReleaseAllReferences(this, a2);
}
