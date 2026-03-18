/*
 * XREFs of ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x140053FF4
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x14004EBDC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1400533D8 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@@DirectComposition@@QEAA@XZ @ 0x140228400 (--0-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@.c)
 */

DirectComposition::CRegionGeometryMarshaler *__fastcall DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)this, 129);
  *(_QWORD *)this = &DirectComposition::CRegionGeometryMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>((char *)this + 96);
  return this;
}
