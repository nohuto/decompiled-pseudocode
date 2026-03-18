/*
 * XREFs of ?IsPropertyIndividuallyAddressable@CTableTransferEffectMarshaler@DirectComposition@@UEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14023BC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::IsPropertyIndividuallyAddressable(
        __int64 a1,
        unsigned int a2)
{
  return a2 != 2065 && a2 != 1040 && a2 > 0xF && a2 < 0xC12 || a2 - 3091 <= 0x3FF;
}
