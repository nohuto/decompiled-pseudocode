/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CPositionedLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234DD0 (-ReleaseAllReferences@CPositionedLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CSpotLightMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CPositionedLightMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax

  v4 = *((_QWORD *)this + 27);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
  DirectComposition::CPositionedLightMarshaler::ReleaseAllReferences(this, a2, a3, a4);
}
