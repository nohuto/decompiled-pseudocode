/*
 * XREFs of PoFxSetComponentResidency @ 0x140607570
 * Callers:
 *     DifPoFxSetComponentResidencyWrapper @ 0x1406977E0 (DifPoFxSetComponentResidencyWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x14060B5D0 (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x140614364 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
