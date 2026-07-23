/*
 * XREFs of KiAllocateCpuSetData @ 0x140CD1870
 * Callers:
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KiCreateCpuSetForProcessor @ 0x140BFB578 (KiCreateCpuSetForProcessor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall KiAllocateCpuSetData(unsigned int a1)
{
  ULONG_PTR result; // rax
  __int64 v3; // rcx

  if ( KiMaximumGroups != 1 )
    a1 = (unsigned __int16)KiMaximumGroups << 6;
  result = ExAllocatePool2(64LL, 32 * a1, 0x2020654Bu);
  if ( result )
  {
    KiCpuSetAffinities = (void *)result;
    v3 = 8LL * a1;
    KiCpuSetAffinitiesShadow = (void *)(v3 + result);
    stru_140FC11F0.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)(v3 + result + v3);
    LODWORD(KiCpuSetAffinitySize) = 8 * a1;
    KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
    return 1LL;
  }
  return result;
}
