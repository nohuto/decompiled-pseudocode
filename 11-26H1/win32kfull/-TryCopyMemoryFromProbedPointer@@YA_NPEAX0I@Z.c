/*
 * XREFs of ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x140295AF0
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400D1DD0 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TryCopyMemoryFromProbedPointer(void *a1, void *a2, unsigned int a3)
{
  GreProbeAndReadFromUntrustedVa(a1, a3, a2, a3, 1uLL);
  return 1;
}
