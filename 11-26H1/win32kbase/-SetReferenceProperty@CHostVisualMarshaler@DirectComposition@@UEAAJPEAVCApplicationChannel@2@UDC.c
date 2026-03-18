/*
 * XREFs of ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x14022AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140180B70 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPO.c)
 */

int __fastcall DirectComposition::CHostVisualMarshaler::SetReferenceProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        bool *a5)
{
  if ( a3 == 11 )
    return -1073741823;
  else
    return DirectComposition::CVisualMarshaler::SetReferenceProperty(a1, a2, a3, a4, a5);
}
