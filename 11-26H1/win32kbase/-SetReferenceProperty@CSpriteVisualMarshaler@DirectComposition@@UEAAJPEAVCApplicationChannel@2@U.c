/*
 * XREFs of ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140180AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140180B70 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPO.c)
 */

__int64 __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  switch ( a3 )
  {
    case 11:
      return 3221225485LL;
    case 51:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 336),
               a4,
               1,
               16,
               (int *)(a1 + 352),
               1,
               0,
               a5);
    case 52:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 344),
               a4,
               1,
               30,
               (int *)(a1 + 352),
               2,
               0,
               a5);
  }
  return DirectComposition::CVisualMarshaler::SetReferenceProperty(a1);
}
