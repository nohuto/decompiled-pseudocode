/*
 * XREFs of ?SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023E750
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023E880 (-SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOS.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  struct DirectComposition::CResourceMarshaler **v6; // r8
  int v7; // [rsp+38h] [rbp-20h]
  _BYTE *v8; // [rsp+48h] [rbp-10h]

  switch ( a3 )
  {
    case 1:
      v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 72);
      v8 = a5;
      v7 = 128;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               v6,
               a4,
               1,
               16,
               (int *)(a1 + 16),
               v7,
               0,
               v8);
    case 2:
      v6 = (struct DirectComposition::CResourceMarshaler **)(a1 + 80);
      v8 = a5;
      v7 = 512;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               v6,
               a4,
               1,
               16,
               (int *)(a1 + 16),
               v7,
               0,
               v8);
    case 3:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 64),
               a4,
               1,
               56,
               (int *)(a1 + 16),
               256,
               0,
               a5);
    default:
      return DirectComposition::CShapeMarshaler::SetReferenceProperty(a1);
  }
}
