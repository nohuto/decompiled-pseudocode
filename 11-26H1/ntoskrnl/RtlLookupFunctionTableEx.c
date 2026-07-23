/*
 * XREFs of RtlLookupFunctionTableEx @ 0x14044CDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402CBA80 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTableEx(unsigned __int64 a1, _QWORD *a2)
{
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    return RtlpxLookupFunctionTable(a1, (__int64)a2);
  }
  *(_OWORD *)a2 = xmmword_141200030;
  a2[2] = qword_141200040;
  return (PVOID)*a2;
}
