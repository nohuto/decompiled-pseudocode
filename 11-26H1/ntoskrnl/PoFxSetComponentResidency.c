/*
 * XREFs of PoFxSetComponentResidency @ 0x140604A70
 * Callers:
 *     DifPoFxSetComponentResidencyWrapper @ 0x140693C00 (DifPoFxSetComponentResidencyWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x140608A10 (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x140611524 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
