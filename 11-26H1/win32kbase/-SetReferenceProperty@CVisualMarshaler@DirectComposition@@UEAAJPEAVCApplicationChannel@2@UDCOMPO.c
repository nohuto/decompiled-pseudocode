/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140180B70
 * Callers:
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140180AB0 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@U.c)
 *     ?SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140198E60 (-SetReferenceProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022AEA0 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 *     ?SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140238490 (-SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UD.c)
 *     ?SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140238500 (-SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023DE60 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UD.c)
 *     ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14023E1D0 (-SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UD.c)
 *     ?SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140244CA0 (-SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     McTemplateK0qqqxx_EtwWriteTransfer @ 0x140173028 (McTemplateK0qqqxx_EtwWriteTransfer.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x140191E6C (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 */

int __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        bool *a5)
{
  unsigned int v9; // r10d
  unsigned int v10; // r9d

  *a5 = 0;
  if ( a3 == 4 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a1,
             (struct _RTL_GENERIC_TABLE *)a2,
             (struct DirectComposition::CResourceMarshaler **)(a1 + 136),
             a4,
             1,
             148,
             (int *)(a1 + 16),
             512,
             0,
             a5);
  if ( a3 != 5 )
  {
    switch ( a3 )
    {
      case 6:
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a1,
                 (struct _RTL_GENERIC_TABLE *)a2,
                 (struct DirectComposition::CResourceMarshaler **)(a1 + 152),
                 a4,
                 1,
                 46,
                 (int *)(a1 + 16),
                 2048,
                 0,
                 a5);
      case 7:
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a1,
                 (struct _RTL_GENERIC_TABLE *)a2,
                 (struct DirectComposition::CResourceMarshaler **)(a1 + 160),
                 a4,
                 1,
                 56,
                 (int *)(a1 + 16),
                 0x2000,
                 0,
                 a5);
      case 11:
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a1,
                 (struct _RTL_GENERIC_TABLE *)a2,
                 (struct DirectComposition::CResourceMarshaler **)(a1 + 168),
                 a4,
                 1,
                 36,
                 (int *)(a1 + 16),
                 4096,
                 0,
                 a5);
      case 23:
        if ( a4 )
          v9 = a4[8];
        else
          v9 = 0;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
          McTemplateK0qqqxx_EtwWriteTransfer(
            ((unsigned __int64)*(unsigned int *)(a2 + 28) << 32) | v9,
            (unsigned __int64)*(unsigned int *)(a2 + 28) << 32,
            *(unsigned int *)(a1 + 32),
            *(_DWORD *)(a2 + 28),
            *(_DWORD *)(a1 + 32),
            v9,
            *(_DWORD *)(a1 + 32),
            v9);
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a1,
                 (struct _RTL_GENERIC_TABLE *)a2,
                 (struct DirectComposition::CResourceMarshaler **)(a1 + 216),
                 a4,
                 1,
                 65,
                 (int *)(a1 + 16),
                 0x200000,
                 0,
                 a5);
    }
    if ( a3 != 39 )
    {
      if ( a3 == 40 )
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a1,
                 (struct _RTL_GENERIC_TABLE *)a2,
                 (struct DirectComposition::CResourceMarshaler **)(a1 + 224),
                 a4,
                 1,
                 16,
                 (int *)(a1 + 16),
                 0x8000000,
                 0,
                 a5);
      if ( a3 == 47 )
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a1,
                 (struct _RTL_GENERIC_TABLE *)a2,
                 (struct DirectComposition::CResourceMarshaler **)(a1 + 232),
                 a4,
                 1,
                 162,
                 (int *)(a1 + 328),
                 1,
                 0,
                 a5);
      return -1073741811;
    }
  }
  if ( a4
    && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(a4[9], 156)
    && (a3 == 5 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v10, 160)) )
  {
    return -1073741811;
  }
  return DirectComposition::CVisualMarshaler::SetTransformParent(
           (DirectComposition::CVisualMarshaler *)a1,
           (struct DirectComposition::CApplicationChannel *)a2,
           (struct DirectComposition::CResourceMarshaler *)a4,
           a3 == 39,
           a5);
}
