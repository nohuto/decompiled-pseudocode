/*
 * XREFs of ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1406241DC
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052DF14 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x1406243C8 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     RtlpSameFunction @ 0x140625AAC (RtlpSameFunction.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402CB6E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     ??$RtlpxLookupPrimaryFunctionEntry@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140534380 (--$RtlpxLookupPrimaryFunctionEntry@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K.c)
 */

_QWORD *RtlpxSameFunction<CDirectFnEnt,CDirectUnwindInfo>(_QWORD *a1, _BYTE *a2, __int64 a3, unsigned __int64 a4, ...)
{
  _DWORD *v6; // rbx
  PRUNTIME_FUNCTION v7; // rax
  unsigned __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  ImageBase = 0LL;
  v6 = (_DWORD *)*RtlpxLookupPrimaryFunctionEntry<CDirectFnEnt,CDirectUnwindInfo>((__int64 *)va, a2, a3);
  if ( a4 < 0x7FFFFFFF0000LL )
  {
    v10 = 0LL;
    v11 = 0LL;
    v7 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a4, (__int64)&v10);
    if ( v7 )
    {
      v8 = *((_QWORD *)&v10 + 1);
      goto LABEL_5;
    }
LABEL_7:
    *a1 = 0LL;
    return a1;
  }
  v7 = RtlLookupFunctionEntry(a4, &ImageBase, 0LL);
  v8 = ImageBase;
  if ( !v7 )
    goto LABEL_7;
LABEL_5:
  if ( *v6 != *(_DWORD *)*RtlpxLookupPrimaryFunctionEntry<CDirectFnEnt,CDirectUnwindInfo>(&ImageBase, v7, v8) )
    goto LABEL_7;
  *a1 = v6;
  return a1;
}
