/*
 * XREFs of AslRegWildcardFindNext @ 0x140890B90
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140889FBC (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x140890AC8 (AslRegWildcardFindFirst.c)
 * Callees:
 *     AslpProcessMatchRegNode @ 0x1408912FC (AslpProcessMatchRegNode.c)
 */

__int64 __fastcall AslRegWildcardFindNext(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int matched; // ecx

  v2 = (_QWORD *)a2[2];
  if ( !v2 )
    return 2147483674LL;
  while ( v2 != a2 )
  {
    matched = AslpProcessMatchRegNode(v2, a2);
    if ( matched < 0 )
    {
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      if ( (_QWORD *)*v2 == a2 )
      {
        *a1 = v2[4];
        goto LABEL_9;
      }
      v2 = (_QWORD *)*v2;
    }
  }
  matched = -2147483622;
  v2 = 0LL;
LABEL_9:
  a2[2] = v2;
  return (unsigned int)matched;
}
