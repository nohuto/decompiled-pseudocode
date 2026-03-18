/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053F20
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1400533D8 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@@DirectComposition@@QEAA@XZ @ 0x140228400 (--0-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(__int64 a1, __int64 a2)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  *(_QWORD *)a1 = &DirectComposition::CVisualMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>(a1 + 312);
  DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>(a1 + 336);
  *(_DWORD *)(a1 + 360) = 0;
  return a1;
}
