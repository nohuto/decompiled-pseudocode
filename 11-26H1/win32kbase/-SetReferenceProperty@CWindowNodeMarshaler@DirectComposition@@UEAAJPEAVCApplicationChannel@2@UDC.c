/*
 * XREFs of ?SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140198E60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140180B70 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPO.c)
 */

int __fastcall DirectComposition::CWindowNodeMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        bool *a5)
{
  *a5 = 0;
  switch ( a3 )
  {
    case '9':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 424),
               a4,
               1,
               56,
               (int *)(a1 + 336),
               64,
               0,
               a5);
    case 'A':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 488),
               a4,
               1,
               54,
               (int *)(a1 + 336),
               0x4000,
               0,
               a5);
    case 'B':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 496),
               a4,
               1,
               105,
               (int *)(a1 + 336),
               0x8000,
               0,
               a5);
  }
  return DirectComposition::CVisualMarshaler::SetReferenceProperty(a1, (__int64)a2, a3, a4, a5);
}
