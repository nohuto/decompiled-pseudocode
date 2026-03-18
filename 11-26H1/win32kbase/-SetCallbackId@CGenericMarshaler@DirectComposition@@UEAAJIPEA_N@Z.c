/*
 * XREFs of ?SetCallbackId@CGenericMarshaler@DirectComposition@@UEAAJIPEA_N@Z @ 0x14022AD80
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@IPEA_N@Z @ 0x14022A384 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetCallbackId(
        DirectComposition::CGenericMarshaler *this,
        int a2,
        bool *a3)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CCallbackIdProperty>(
           (__int64)this,
           0xFFFFFFFF,
           a2,
           a3);
}
