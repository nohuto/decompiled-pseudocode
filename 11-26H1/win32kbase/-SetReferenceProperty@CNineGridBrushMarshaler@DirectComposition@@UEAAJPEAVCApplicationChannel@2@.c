/*
 * XREFs of ?SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140238050
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  *a5 = 0;
  if ( a3 == 9 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 96),
             a4,
             1,
             16,
             (int *)(a1 + 16),
             0x8000,
             0,
             a5);
  else
    return 3221225485LL;
}
