/*
 * XREFs of AslRegWildcardFindNext @ 0x14088A794
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140883BBC (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x14088A6CC (AslRegWildcardFindFirst.c)
 * Callees:
 *     AslpProcessMatchRegNode @ 0x14088AF00 (AslpProcessMatchRegNode.c)
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
