/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x140592C24
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
