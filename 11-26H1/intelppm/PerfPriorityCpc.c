/*
 * XREFs of PerfPriorityCpc @ 0x140009580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfPriorityCpc(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v4; // r9d

  result = 0LL;
  *a3 = 0LL;
  v4 = *(_DWORD *)(a1 + 1344);
  if ( v4 )
  {
    if ( a2 < v4 )
      *a3 = (unsigned __int64)a2 << *(_BYTE *)(*(_QWORD *)(a1 + 1336) + 82LL);
    else
      return 3221225485LL;
  }
  return result;
}
