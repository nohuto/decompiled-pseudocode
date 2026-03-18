/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140235210 (-ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  DirectComposition::CVisualGroupMarshaler::ReleaseAllReferences(this, a2, a3, a4);
}
