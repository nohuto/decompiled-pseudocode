/*
 * XREFs of RtlLookupFunctionTable @ 0x140454D10
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402E9A40 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64)&v6);
  }
  else
  {
    result = (PVOID)xmmword_141200030;
    v6 = xmmword_141200030;
    v7 = qword_141200040;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
