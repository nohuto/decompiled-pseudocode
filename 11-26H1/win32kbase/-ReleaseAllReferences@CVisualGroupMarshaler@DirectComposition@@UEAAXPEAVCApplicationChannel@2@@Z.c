/*
 * XREFs of ?ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140235210
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BF90 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@D.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 */

void __fastcall DirectComposition::CVisualGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        __int64 a4)
{
  LOBYTE(a3) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CVisualGroupMarshaler *)((char *)this + 56),
    a2,
    a3,
    a4);
}
