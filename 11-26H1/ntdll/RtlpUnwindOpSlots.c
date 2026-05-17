/*
 * XREFs of RtlpUnwindOpSlots @ 0x1800E4CE4
 * Callers:
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014A678 (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014AA64 (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014AE50 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014B4AC (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014BB2C (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C440 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = byte_18017DFC8[v1];
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
