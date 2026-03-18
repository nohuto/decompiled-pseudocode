/*
 * XREFs of ?SetReferenceProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14019CA80 (-SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@UDCOM.c)
 */

__int64 __fastcall DirectComposition::CPathGeometryMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  if ( a3 == 5 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 96),
             a4,
             1,
             132,
             (int *)(a1 + 16),
             4096,
             0,
             a5);
  else
    return DirectComposition::CGeometryMarshaler::SetReferenceProperty(a1, a2, a3, a4, a5);
}
