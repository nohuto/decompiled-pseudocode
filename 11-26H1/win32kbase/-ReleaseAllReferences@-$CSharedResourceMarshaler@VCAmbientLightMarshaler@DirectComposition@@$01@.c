/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234D90 (-ReleaseAllReferences@CLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CAmbientLightMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax

  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  DirectComposition::CLightMarshaler::ReleaseAllReferences(this, a2, a3, a4);
}
