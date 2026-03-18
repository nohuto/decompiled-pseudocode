/*
 * XREFs of ?ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400A3A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 */

void __fastcall DirectComposition::CTransformGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTransformGroupMarshaler *)((char *)this + 72),
    a2,
    1);
}
