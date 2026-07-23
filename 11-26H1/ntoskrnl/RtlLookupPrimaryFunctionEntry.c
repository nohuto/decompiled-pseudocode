/*
 * XREFs of RtlLookupPrimaryFunctionEntry @ 0x140625A88
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BF1B4 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     ??$RtlpxLookupPrimaryFunctionEntry@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140534380 (--$RtlpxLookupPrimaryFunctionEntry@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K.c)
 */

__int64 __fastcall RtlLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  return *RtlpxLookupPrimaryFunctionEntry<CDirectFnEnt,CDirectUnwindInfo>(&v3, a1, a2);
}
