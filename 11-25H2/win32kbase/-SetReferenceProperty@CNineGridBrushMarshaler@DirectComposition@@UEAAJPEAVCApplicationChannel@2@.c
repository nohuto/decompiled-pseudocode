/*
 * XREFs of ?SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140059E60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x14005A074 (-SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEA.c)
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetReferenceProperty(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4)
{
  if ( a3 == 7 )
    return DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(this, a2, (char *)this + 72, a4);
  else
    return 3221225485LL;
}
