/*
 * XREFs of ??$RtlpxLookupPrimaryFunctionEntry@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140531EE0
 * Callers:
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062118C (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     RtlLookupPrimaryFunctionEntry @ 0x140622A38 (RtlLookupPrimaryFunctionEntry.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 */

_QWORD *__fastcall RtlpxLookupPrimaryFunctionEntry<CDirectFnEnt,CDirectUnwindInfo>(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  unsigned int v3; // r11d
  _BYTE *v4; // r10

  v3 = 0;
  while ( 1 )
  {
    v4 = (_BYTE *)(a3 + *((unsigned int *)a2 + 2));
    if ( (*v4 & 0x20) == 0 )
      break;
    ++v3;
    a2 = &v4[2 * (unsigned __int8)v4[2] + 4 + 2 * (v4[2] & 1)];
    if ( v3 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  *a1 = a2;
  return a1;
}
