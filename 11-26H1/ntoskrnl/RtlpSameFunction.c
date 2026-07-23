/*
 * XREFs of RtlpSameFunction @ 0x140625AAC
 * Callers:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     ??0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z @ 0x1404DBB3C (--0CUmaFnEnt@@QEAA@PEAU_IMAGE_RUNTIME_FUNCTION_ENTRY@@@Z.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1406241DC (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     ??$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062429C (--$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARA.c)
 */

__int64 __fastcall RtlpSameFunction(struct _IMAGE_RUNTIME_FUNCTION_ENTRY *a1, __int64 a2, unsigned __int64 a3)
{
  CUmaFnEnt *v6; // rax
  __int64 v7; // xmm1_8
  __int128 v8; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+40h] [rbp-68h]
  __int128 v10; // [rsp+50h] [rbp-58h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  _BYTE v12[24]; // [rsp+68h] [rbp-40h] BYREF
  __m128i v13[2]; // [rsp+80h] [rbp-28h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+8h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( a3 < 0x7FFFFFFF0000LL != (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    return 0LL;
  if ( a3 >= 0x7FFFFFFF0000LL )
    return *RtlpxSameFunction<CDirectFnEnt,CDirectUnwindInfo>(&v14, a1, a2, a3);
  v6 = CUmaFnEnt::CUmaFnEnt((CUmaFnEnt *)v12, a1);
  v7 = *((_QWORD *)v6 + 2);
  v8 = *(_OWORD *)v6;
  v9 = v7;
  return RtlpxSameFunction<CUmaFnEnt,CUmaUnwindInfo>(v13, &v8, a2, a3)[1].m128i_i64[0];
}
