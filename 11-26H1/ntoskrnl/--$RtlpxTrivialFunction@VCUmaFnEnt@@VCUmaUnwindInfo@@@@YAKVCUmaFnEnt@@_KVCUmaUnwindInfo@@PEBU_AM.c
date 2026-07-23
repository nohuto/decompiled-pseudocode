/*
 * XREFs of ??$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14052F6BC
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140624DA0 (--$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ??0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z @ 0x140412AD4 (--0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z.c)
 *     ??0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z @ 0x1404DBB3C (--0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpxTrivialFunction<CUmaFnEnt,CUmaUnwindInfo>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // xmm1_8
  CUmaUnwindInfo *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]

  v6 = 0;
  while ( !*(_BYTE *)(a3 + 10) )
  {
    if ( (*(_BYTE *)(a3 + 8) & 0x20) == 0 )
      return 1LL;
    CUmaFnEnt::CUmaFnEnt((CUmaFnEnt *)&v12, (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(*(_QWORD *)a3 + 4LL));
    ++v6;
    v7 = v13;
    *(_OWORD *)a1 = v12;
    *(_QWORD *)(a1 + 16) = v7;
    if ( v6 > 0x20 )
      RtlRaiseStatus(-1073741569);
    v8 = CUmaUnwindInfo::CUmaUnwindInfo((CUmaUnwindInfo *)&v12, (struct _UNWIND_INFO *)(a2 + *(unsigned int *)(a1 + 8)));
    v9 = *((_OWORD *)v8 + 1);
    *(_OWORD *)a3 = *(_OWORD *)v8;
    v10 = *((_OWORD *)v8 + 2);
    *(_OWORD *)(a3 + 16) = v9;
    *(_OWORD *)(a3 + 32) = v10;
  }
  return 0LL;
}
