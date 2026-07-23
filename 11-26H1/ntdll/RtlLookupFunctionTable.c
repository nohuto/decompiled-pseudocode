/*
 * XREFs of RtlLookupFunctionTable @ 0x180035790
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTable(void *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+34h] [rbp-14h]

  v7 = 0;
  v6 = 0LL;
  if ( (unsigned __int64)a1 < *((_QWORD *)&xmmword_1801DF450 + 1)
    || (unsigned __int64)a1 >= *((_QWORD *)&xmmword_1801DF450 + 1) + (unsigned __int64)(unsigned int)qword_1801DF460 )
  {
    result = RtlpxLookupFunctionTable(a1);
  }
  else
  {
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&xmmword_1801DF450 + 1);
    result = xmmword_1801DF450;
    v7 = HIDWORD(qword_1801DF460);
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = v7;
  }
  return result;
}
