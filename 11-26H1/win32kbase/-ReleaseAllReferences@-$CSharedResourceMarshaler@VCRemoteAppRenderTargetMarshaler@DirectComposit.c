/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140242730 (-ReleaseAllReferences@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  DirectComposition::CRemoteAppRenderTargetMarshaler::ReleaseAllReferences(this, a2);
}
