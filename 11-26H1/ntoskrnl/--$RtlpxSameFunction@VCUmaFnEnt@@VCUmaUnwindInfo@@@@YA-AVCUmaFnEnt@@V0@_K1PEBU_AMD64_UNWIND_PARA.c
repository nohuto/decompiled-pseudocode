/*
 * XREFs of ??$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062429C
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140624DA0 (--$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     RtlpSameFunction @ 0x140625AAC (RtlpSameFunction.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402CB6E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     ??$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404124E8 (--$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_KPEBU_AMD6.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__m128i *__fastcall RtlpxSameFunction<CUmaFnEnt,CUmaUnwindInfo>(__m128i *a1, __int128 *a2, __int64 a3, DWORD64 a4)
{
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v5; // xmm1_8
  unsigned __int64 v6; // rdi
  __m128i *v8; // rax
  PRUNTIME_FUNCTION v9; // rax
  _DWORD *v10; // rax
  __int128 v12; // [rsp+20h] [rbp-51h] BYREF
  PRUNTIME_FUNCTION v13; // [rsp+30h] [rbp-41h]
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-31h] BYREF
  __int64 v15; // [rsp+48h] [rbp-29h]
  __m128i v16; // [rsp+50h] [rbp-21h]
  _BYTE v17[24]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v18; // [rsp+78h] [rbp+7h] BYREF
  PRUNTIME_FUNCTION v19; // [rsp+88h] [rbp+17h]

  v5 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)*((_QWORD *)a2 + 2);
  v6 = 0LL;
  v12 = *a2;
  ImageBase = 0LL;
  v13 = v5;
  v8 = (__m128i *)RtlpxLookupPrimaryFunctionEntry<CUmaFnEnt,CUmaUnwindInfo>((__int64)v17, (__int64)&v12, a3);
  v16 = *v8;
  v15 = v8[1].m128i_i64[0];
  if ( a4 >= 0x7FFFFFFF0000LL )
  {
    v9 = RtlLookupFunctionEntry(a4, &ImageBase, 0LL);
    v6 = ImageBase;
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    v9 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a4, (__int64)&v12);
    if ( v9 )
    {
      v6 = *((_QWORD *)&v12 + 1);
      v19 = v9;
      goto LABEL_6;
    }
  }
  v19 = v9;
  if ( !v9 )
  {
LABEL_9:
    a1[1].m128i_i64[0] = 0LL;
    return a1;
  }
LABEL_6:
  RtlCopyFromUser(&v18, v9, 0xCuLL);
  if ( !v19 )
    goto LABEL_9;
  v12 = v18;
  v13 = v19;
  v10 = (_DWORD *)RtlpxLookupPrimaryFunctionEntry<CUmaFnEnt,CUmaUnwindInfo>((__int64)v17, (__int64)&v12, v6);
  if ( _mm_cvtsi128_si32(v16) != *v10 )
    goto LABEL_9;
  *a1 = v16;
  a1[1].m128i_i64[0] = v15;
  return a1;
}
