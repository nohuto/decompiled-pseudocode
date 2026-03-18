/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400A40BC (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1402349F0 (-ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChanne.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax

  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  DirectComposition::CCaptureControllerMarshaler::ReleaseAllReferences(this, a2, a3, a4);
}
