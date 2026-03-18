/*
 * XREFs of ?SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022AE60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140242C20 (-SetIntegerProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 */

__int64 __fastcall DirectComposition::CLegacyStereoRenderTargetMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  if ( a3 != 5 || !a4 )
    return DirectComposition::CLegacyRenderTargetMarshaler::SetIntegerProperty(a1);
  *a5 = 0;
  return 3221225485LL;
}
