/*
 * XREFs of ??0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140228418
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::CCompositionSurfaceBitmapMarshaler(
        _QWORD *a1)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)a1, 41);
  *a1 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
  return a1;
}
