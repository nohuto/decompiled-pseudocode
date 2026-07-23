/*
 * XREFs of RtlpHpLfhSubsegmentFindEmptyUnits @ 0x14034BDF0
 * Callers:
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x14034BD40 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentFindEmptyUnits(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  _WORD *v5; // rax
  __int64 result; // rax
  _WORD *i; // rdx
  __int64 v8; // rdx
  __int16 v9; // cx
  _WORD *v10; // rax

  v3 = a1 + 8LL * *(unsigned __int8 *)(a1 + 24);
  v4 = v3 + 2LL * *(unsigned __int8 *)(a1 + 39);
  v5 = (_WORD *)(v3 + 2LL * (unsigned int)a2);
  if ( *v5 )
  {
    if ( (unsigned __int64)v5 >= v4 )
      return 0xFFFFFFFFLL;
    while ( *v5 )
    {
      if ( (unsigned __int64)++v5 >= v4 )
        return 0xFFFFFFFFLL;
    }
    a2 = ((__int64)v5 - v3) >> 1;
  }
  else
  {
    v9 = *(v5 - 1);
    v10 = v5 - 1;
    if ( !v9 )
    {
      while ( !*--v10 )
        ;
    }
    v5 = v10 + 1;
  }
  for ( i = (_WORD *)(v3 + 2 * ((unsigned int)a2 + 1LL)); (unsigned __int64)i < v4; ++i )
  {
    if ( *i )
      break;
  }
  v8 = i - v5;
  result = (unsigned int)(((__int64)v5 - v3) >> 1);
  *a3 = v8;
  return result;
}
