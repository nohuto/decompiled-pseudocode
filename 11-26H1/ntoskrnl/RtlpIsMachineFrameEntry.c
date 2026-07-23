/*
 * XREFs of RtlpIsMachineFrameEntry @ 0x140447450
 * Callers:
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1403DA7C8 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404125BC (--$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsMachineFrameEntry(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rax

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( a1 == *(_QWORD *)(a2 + 8 * i) )
      return 1;
  }
  return 0;
}
