/*
 * XREFs of ?MemoryReadSimd@CUmaMemoryAccessors@@SA?AU_M128A@@PEBU_AMD64_UNWIND_PARAMS@@_K@Z @ 0x1404E3FA0
 * Callers:
 *     ??$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404125BC (--$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 */

struct _M128A *__fastcall CUmaMemoryAccessors::MemoryReadSimd(
        struct _M128A *__return_ptr retstr,
        const struct _AMD64_UNWIND_PARAMS *a2,
        void *a3)
{
  *retstr = 0LL;
  RtlCopyFromUser(retstr, a3, 0x10uLL);
  return retstr;
}
