/*
 * XREFs of ??$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404124E8
 * Callers:
 *     ??$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062429C (--$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARA.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ??0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z @ 0x140412AD4 (--0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z.c)
 *     ??0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z @ 0x1404DBB3C (--0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpxLookupPrimaryFunctionEntry<CUmaFnEnt,CUmaUnwindInfo>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  CUmaUnwindInfo *v7; // rax
  __int128 v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // xmm1_8
  __int64 result; // rax
  __int64 v12; // xmm1_8
  __int128 v13; // [rsp+50h] [rbp-58h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h]

  v6 = 0;
  while ( 1 )
  {
    v7 = CUmaUnwindInfo::CUmaUnwindInfo((CUmaUnwindInfo *)&v13, (struct _UNWIND_INFO *)(a3 + *(unsigned int *)(a2 + 8)));
    v8 = *(_OWORD *)v7;
    v9 = *((_QWORD *)v7 + 1);
    if ( (v9 & 0x20) == 0 )
      break;
    CUmaFnEnt::CUmaFnEnt(
      (CUmaFnEnt *)&v13,
      (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v8 + 4 + 2LL * (BYTE2(v9) + (BYTE2(v9) & 1u))));
    ++v6;
    v10 = v14;
    *(_OWORD *)a2 = v13;
    *(_QWORD *)(a2 + 16) = v10;
    if ( v6 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  result = a1;
  v12 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
