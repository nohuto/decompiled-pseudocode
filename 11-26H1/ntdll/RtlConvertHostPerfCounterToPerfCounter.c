/*
 * XREFs of RtlConvertHostPerfCounterToPerfCounter @ 0x180064C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x180066280 (RtlGetMultiTimePrecise.c)
 */

__int64 __fastcall RtlConvertHostPerfCounterToPerfCounter(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  v8 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  result = RtlGetMultiTimePrecise(&v8, 3LL, &v9);
  if ( (int)result >= 0 )
  {
    if ( (v9 & 3) == 3
      && (a2 == -1LL
       || (a1 >= *((_QWORD *)&v8 + 1) ? (v7 = a1 - *((_QWORD *)&v8 + 1)) : (v7 = *((_QWORD *)&v8 + 1) - a1), v7 < a2)) )
    {
      *a3 = a1 + v8 - *((_QWORD *)&v8 + 1);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
