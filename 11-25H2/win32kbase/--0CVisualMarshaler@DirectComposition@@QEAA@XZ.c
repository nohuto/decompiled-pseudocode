/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140053F68
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x14004EBDC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14005426C (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x140054914 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ??0CHostVisualMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140198174 (--0CHostVisualMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@@DirectComposition@@QEAA@XZ @ 0x140228400 (--0-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@.c)
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(
        DirectComposition::CVisualMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 182LL);
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>((char *)this + 312);
  DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>((char *)this + 336);
  *((_DWORD *)this + 90) = 0;
  return this;
}
