/*
 * XREFs of ??0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z @ 0x140412AD4
 * Callers:
 *     ??$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404124E8 (--$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_KPEBU_AMD6.c)
 *     ??$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404125BC (--$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1405256A0 (RtlpLookupPrimaryFunctionEntry.c)
 *     ??$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14052F6BC (--$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AM.c)
 *     ??$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140623C30 (--$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140624DA0 (--$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 */

CUmaUnwindInfo *__fastcall CUmaUnwindInfo::CUmaUnwindInfo(CUmaUnwindInfo *this, struct _UNWIND_INFO *a2)
{
  unsigned int v4; // r8d

  *(_QWORD *)this = a2;
  if ( a2 )
  {
    RtlCopyFromUser((char *)this + 8, a2, 4uLL);
    v4 = *((unsigned __int8 *)this + 10);
    if ( (*((_BYTE *)this + 8) & 0x18) != 0 )
      v4 += (v4 & 1) + 2;
    if ( v4 > 0x10 )
      v4 = 16;
    RtlCopyFromUser((char *)this + 12, (char *)a2 + 4, 2 * v4);
  }
  return this;
}
