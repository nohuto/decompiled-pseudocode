/*
 * XREFs of ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011D0A8
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C2F0 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 */

_QWORD *__fastcall RtlpxSameFunction<CDirectFnEnt,CDirectUnwindInfo>(_QWORD *a1, _DWORD *a2, __int64 a3, ULONG64 a4)
{
  unsigned int v6; // r10d
  _BYTE *v7; // rdx
  PRUNTIME_FUNCTION v8; // rax
  unsigned int v9; // r8d
  _BYTE *v10; // rdx
  unsigned __int64 ImageBase; // [rsp+38h] [rbp+10h] BYREF

  ImageBase = 0LL;
  v6 = 0;
  while ( 1 )
  {
    v7 = (_BYTE *)(a3 + (unsigned int)a2[2]);
    if ( (*v7 & 0x20) == 0 )
      break;
    ++v6;
    a2 = &v7[2 * (unsigned __int8)v7[2] + 4 + 2 * (v7[2] & 1)];
    if ( v6 > 0x20 )
LABEL_9:
      RtlRaiseStatus(-1073741569);
  }
  v8 = RtlLookupFunctionEntry(a4, &ImageBase, 0LL);
  if ( !v8 )
    goto LABEL_12;
  v9 = 0;
  while ( 1 )
  {
    v10 = (_BYTE *)(ImageBase + v8->UnwindInfoAddress);
    if ( (*v10 & 0x20) == 0 )
      break;
    ++v9;
    v8 = (PRUNTIME_FUNCTION)&v10[2 * (v10[2] & 1) + 4 + 2 * (unsigned __int8)v10[2]];
    if ( v9 > 0x20 )
      goto LABEL_9;
  }
  if ( *a2 == v8->BeginAddress )
    *a1 = a2;
  else
LABEL_12:
    *a1 = 0LL;
  return a1;
}
