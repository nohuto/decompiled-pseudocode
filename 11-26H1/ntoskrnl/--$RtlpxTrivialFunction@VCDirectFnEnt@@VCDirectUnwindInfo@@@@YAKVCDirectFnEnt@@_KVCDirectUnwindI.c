/*
 * XREFs of ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140534F80
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052DF14 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x1406243C8 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpxTrivialFunction<CDirectFnEnt,CDirectUnwindInfo>(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx

  v3 = 0;
  while ( !*(_BYTE *)(a3 + 2) )
  {
    if ( (*(_BYTE *)a3 & 0x20) == 0 )
      return 1LL;
    if ( (unsigned int)++v3 > 0x20 )
      RtlRaiseStatus(-1073741569);
    a3 = a2 + *(unsigned int *)(a3 + 12);
  }
  return 0LL;
}
