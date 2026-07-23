/*
 * XREFs of RtlpHpLfhSubsegmentFindEmptyUnits @ 0x180063BF8
 * Callers:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180064078 (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentFindEmptyUnits(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  _WORD *v5; // rcx
  __int64 result; // rax
  _WORD *i; // rdx

  v3 = a1 + 8LL * *(unsigned __int8 *)(a1 + 24);
  v4 = v3 + 2LL * *(unsigned __int8 *)(a1 + 39);
  v5 = (_WORD *)(v3 + 2LL * (unsigned int)a2);
  if ( *v5 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v5 >= v4 )
        return 0xFFFFFFFFLL;
      if ( !*v5 )
        break;
      ++v5;
    }
    a2 = ((__int64)v5 - v3) >> 1;
  }
  else
  {
    do
      --v5;
    while ( !*v5 );
    ++v5;
  }
  for ( i = (_WORD *)(v3 + 2 * ((unsigned int)a2 + 1LL)); (unsigned __int64)i < v4 && !*i; ++i )
    ;
  result = ((__int64)v5 - v3) >> 1;
  *a3 = i - v5;
  return result;
}
