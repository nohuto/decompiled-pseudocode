/*
 * XREFs of ?SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14022ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14022A450 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(a1, a2, a3, a4);
}
