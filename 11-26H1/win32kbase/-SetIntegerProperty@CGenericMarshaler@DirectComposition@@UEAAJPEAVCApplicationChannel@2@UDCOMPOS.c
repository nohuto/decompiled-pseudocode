/*
 * XREFs of ?SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022AE00
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022A5F0 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(a1, a3, a4, a5);
}
