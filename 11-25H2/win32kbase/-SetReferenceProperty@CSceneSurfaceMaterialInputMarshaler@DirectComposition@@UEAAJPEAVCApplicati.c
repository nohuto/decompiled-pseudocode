/*
 * XREFs of ?SetReferenceProperty@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023D030
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetReferenceProperty(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  DirectComposition::CApplicationChannel *v5; // r11
  DirectComposition::CSceneSurfaceMaterialInputMarshaler *v6; // r10
  unsigned int v7; // r8d

  v5 = a2;
  v6 = this;
  if ( a3 == 1
    && (!a4
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4 + 9), 37)
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(v7, 188)) )
  {
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             (__int64)v6,
             v5,
             (struct DirectComposition::CResourceMarshaler **)v6 + 7,
             (unsigned int *)a4,
             1,
             134,
             (int *)v6 + 4,
             64,
             0,
             a5);
  }
  else
  {
    return 3221225485LL;
  }
}
