/*
 * XREFs of ?SetHandleProperty@CGenericMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x14022ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x14022A520 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetHandleProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CHandleProperty>(a1, a2, a3, a4);
}
