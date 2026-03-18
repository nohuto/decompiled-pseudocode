/*
 * XREFs of ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1401C00E0
 * Callers:
 *     ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140194110 (-SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140240400 (-SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 *     ?SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140241170 (-SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x14004926C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (__int64 *)(a1 + 72),
             a4,
             a4,
             110,
             (int *)(a1 + 16),
             128,
             1,
             a5);
  else
    return 3221225485LL;
}
