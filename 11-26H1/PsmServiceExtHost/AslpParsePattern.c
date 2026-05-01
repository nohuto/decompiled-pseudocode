/*
 * XREFs of AslpParsePattern @ 0x1800A06B4
 * Callers:
 *     AslRegWildcardFindFirst @ 0x1800A04BC (AslRegWildcardFindFirst.c)
 * Callees:
 *     AslpAllocMatchNode @ 0x1800A0618 (AslpAllocMatchNode.c)
 */

__int64 __fastcall AslpParsePattern(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  char v6; // al
  unsigned __int64 i; // rbx
  __int64 result; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v5 = a1 + 2LL * (unsigned int)v2;
  v6 = 0;
  for ( i = v5 - 2; i > a1; i -= 2LL )
  {
    if ( *(_WORD *)i == 42 || *(_WORD *)i == 63 )
    {
      v6 = 1;
    }
    else if ( *(_WORD *)i == 92 )
    {
      if ( v6 )
      {
        result = AslpAllocMatchNode(i + 2, v5, a2);
        if ( (int)result < 0 )
          return result;
        v5 = i;
        *(_WORD *)i = 0;
        v6 = 0;
      }
      else
      {
        v5 = i;
      }
    }
  }
  if ( !v6 )
    v5 = i;
  return AslpAllocMatchNode(i & -(__int64)(v6 != 0), v5, a2);
}
