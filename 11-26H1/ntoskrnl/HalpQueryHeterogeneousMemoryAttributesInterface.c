/*
 * XREFs of HalpQueryHeterogeneousMemoryAttributesInterface @ 0x140787938
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryHeterogeneousMemoryAttributesInterface(
        __int64 (__fastcall **a1)(unsigned int a1, int a2, __int64 a3, int a4))
{
  *a1 = HalpNumaQueryMemorySideCacheInfo;
  a1[2] = (__int64 (__fastcall *)(unsigned int, int, __int64, int))HalpNumaQueryMemoryNumaAttributes;
  a1[1] = (__int64 (__fastcall *)(unsigned int, int, __int64, int))HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo;
  return 0LL;
}
