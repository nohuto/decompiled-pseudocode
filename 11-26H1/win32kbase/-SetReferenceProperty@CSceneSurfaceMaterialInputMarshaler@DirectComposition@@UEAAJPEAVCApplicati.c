/*
 * XREFs of ?SetReferenceProperty@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1402477F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  struct _RTL_GENERIC_TABLE *v5; // r11
  __int64 v6; // r10
  unsigned int v7; // r8d

  v5 = a2;
  v6 = a1;
  if ( a3 == 1
    && (!a4
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(a4[9], 29)
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(v7, 162)) )
  {
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             v6,
             v5,
             (struct DirectComposition::CResourceMarshaler **)(v6 + 56),
             a4,
             1,
             110,
             (int *)(v6 + 16),
             128,
             0,
             a5);
  }
  else
  {
    return 3221225485LL;
  }
}
