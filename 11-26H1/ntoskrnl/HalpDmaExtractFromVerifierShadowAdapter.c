/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1404F0014
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404EFF50 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x1405799D0 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x140579C90 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x140579DA0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x140781460 (HalpAllocateMapRegisters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaExtractFromVerifierShadowAdapter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == 1634550870 )
    return *(_QWORD *)(a1 + 24);
  else
    return a1;
}
