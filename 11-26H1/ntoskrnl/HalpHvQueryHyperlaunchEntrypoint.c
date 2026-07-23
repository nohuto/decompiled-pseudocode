/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x1405953A4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
