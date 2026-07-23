/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1404E95F4
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404E9530 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x14057BF00 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x14057C1C0 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x140783F60 (HalpAllocateMapRegisters.c)
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
