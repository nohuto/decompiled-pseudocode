/*
 * XREFs of ?SetIntegerProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140228B80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400DAA80 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::SetIntegerProperty(
        DirectComposition::CHostVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned __int64 a4,
        bool *a5)
{
  if ( a3 == 8 )
    return DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, 8u, a4, a5);
  else
    return 3221225485LL;
}
