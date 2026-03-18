/*
 * XREFs of ?ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A35C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CProjectedShadowSceneMarshaler::ReleaseAllReferences(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CProjectedShadowSceneMarshaler *)((char *)this + 72),
    a2,
    1);
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CProjectedShadowSceneMarshaler *)((char *)this + 96),
    a2,
    1);
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 18) = 0LL;
  }
}
