/*
 * XREFs of ??$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z @ 0x18010A5C4
 * Callers:
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014B35C (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C2F0 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(_QWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // edx

  v2 = a2 - 4;
  if ( !v2 )
    return a1[1];
  v3 = v2 - 1;
  if ( !v3 )
    return a1[2];
  v5 = v3 - 10;
  if ( !v5 )
    return a1[4];
  if ( v5 == 1 )
    return *a1;
  return 0LL;
}
