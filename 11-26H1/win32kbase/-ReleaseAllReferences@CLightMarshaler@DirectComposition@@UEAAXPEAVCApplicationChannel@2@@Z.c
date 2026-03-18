/*
 * XREFs of ?ReleaseAllReferences@CLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234D90
 * Callers:
 *     ?ReleaseAllReferences@CPositionedLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234DD0 (-ReleaseAllReferences@CPositionedLightMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@.c)
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BC50 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCAmbientLightMarshaler@DirectComposition@@$01@.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 */

void __fastcall DirectComposition::CLightMarshaler::ReleaseAllReferences(
        DirectComposition::CLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9

  LOBYTE(a3) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CLightMarshaler *)((char *)this + 64),
    a2,
    a3,
    a4);
  LOBYTE(v6) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CLightMarshaler *)((char *)this + 88),
    a2,
    v6,
    v7);
}
