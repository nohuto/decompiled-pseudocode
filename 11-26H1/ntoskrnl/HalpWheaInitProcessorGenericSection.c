/*
 * XREFs of HalpWheaInitProcessorGenericSection @ 0x14044B4F0
 * Callers:
 *     <none>
 * Callees:
 *     HaliWheaInitProcessorGenericSection @ 0x14044B548 (HaliWheaInitProcessorGenericSection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpWheaInitProcessorGenericSection(__int64 a1, __int64 a2)
{
  memset_0((void *)a1, 0, 0x48uLL);
  *(_WORD *)(a1 + 8) = 768;
  *(_DWORD *)(a1 + 4) = 192;
  *(GUID *)(a1 + 16) = PROCESSOR_GENERIC_ERROR_SECTION_GUID;
  *(_DWORD *)(a1 + 48) = 3;
  return HaliWheaInitProcessorGenericSection(a2);
}
