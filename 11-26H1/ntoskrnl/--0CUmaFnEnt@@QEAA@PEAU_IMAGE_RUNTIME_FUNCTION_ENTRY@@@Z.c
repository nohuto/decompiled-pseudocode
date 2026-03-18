/*
 * XREFs of ??0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z @ 0x1404E245C
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262EB0 (RtlpWalkFrameChain.c)
 *     ??$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14041AC98 (--$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_KPEBU_AMD6.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140523030 (RtlpLookupPrimaryFunctionEntry.c)
 *     ??$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14052D19C (--$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AM.c)
 *     ??$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140620BE0 (--$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     RtlpSameFunction @ 0x140622A5C (RtlpSameFunction.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 */

CUmaFnEnt *__fastcall CUmaFnEnt::CUmaFnEnt(CUmaFnEnt *this, struct _IMAGE_RUNTIME_FUNCTION_ENTRY *a2)
{
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    RtlCopyFromUser(this, a2, 0xCuLL);
  return this;
}
