/*
 * XREFs of ?SetReferenceProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1402383F0
 * Callers:
 *     ?SetReferenceProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1402382A0 (-SetReferenceProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCAppl.c)
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  *a5 = 0;
  switch ( a3 )
  {
    case 2:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 64),
               a4,
               1,
               119,
               (int *)(a1 + 16),
               256,
               0,
               a5);
    case 5:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 88),
               a4,
               1,
               119,
               (int *)(a1 + 16),
               2048,
               0,
               a5);
    case 7:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a1,
               a2,
               (struct DirectComposition::CResourceMarshaler **)(a1 + 104),
               a4,
               1,
               119,
               (int *)(a1 + 16),
               0x2000,
               0,
               a5);
  }
  return 3221225485LL;
}
