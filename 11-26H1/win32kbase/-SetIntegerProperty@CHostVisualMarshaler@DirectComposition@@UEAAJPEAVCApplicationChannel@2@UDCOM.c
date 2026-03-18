/*
 * XREFs of ?SetIntegerProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14018C9E0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSI.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  if ( a3 == 8 )
    return DirectComposition::CVisualMarshaler::SetIntegerProperty(a1, a2, 8u, a4, a5);
  else
    return 3221225485LL;
}
