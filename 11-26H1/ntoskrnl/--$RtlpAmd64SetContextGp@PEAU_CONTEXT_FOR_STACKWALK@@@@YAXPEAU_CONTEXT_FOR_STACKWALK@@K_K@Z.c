/*
 * XREFs of ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x14041B9F0
 * Callers:
 *     ??$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x14041AD6C (--$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x14041B300 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1406206C8 (--$RtlpUnwindEpilogue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K0KVCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140620BE0 (--$RtlpUnwindEpilogue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140621378 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140621D50 (--$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(_QWORD *a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx

  if ( a2 == 15 )
  {
    a1[4] = a3;
  }
  else
  {
    v3 = a2 - 4;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 11 )
          *a1 = a3;
      }
      else
      {
        a1[2] = a3;
      }
    }
    else
    {
      a1[1] = a3;
    }
  }
}
